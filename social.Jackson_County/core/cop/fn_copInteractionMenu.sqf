#include "..\..\script_macros.hpp"
/*
    File: fn_copInteractionMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Replaces the mass addactions for various cop actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Title 37401

private ["_display","_curTarget","_seizeRank","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];
_seizeRank = LIFE_SETTINGS(getNumber,"seize_minimum_rank");

if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
    if (!isPlayer _curTarget && side _curTarget isEqualTo civilian) exitWith {closeDialog 0;}; //Bad side check?
    if (player distance _curTarget > 4 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.
};

if (!dialog) then {
    createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn3,_Btn5,_Btn6,_Btn7,_Btn8];
};

//Set Unrestrain Button
if (_curTarget getVariable["isblinded",false]) then {
	_Btn1 ctrlSetText "Augenbinde Ab";
	_Btn1 buttonSetAction "closeDialog 0; [life_pInact_curTarget] call life_fnc_blindoff;";
} else {
	_Btn1 ctrlSetText "Augenbinde An";
	_Btn1 buttonSetAction "closeDialog 0; [life_pInact_curTarget] call life_fnc_blindAction;";
	if(life_inv_augenbinde isEqualTo 0 ) then { _Btn1 ctrlEnable false};
};

//Set Check Licenses Button
_Btn2 ctrlSetText localize "STR_pInAct_checkLicenses";
_Btn2 buttonSetAction "[player] remoteExecCall [""life_fnc_licenseCheck"",life_pInact_curTarget]; closeDialog 0;";

//Set Search Button
_Btn3 ctrlSetText localize "STR_pInAct_SearchPlayer";
_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_searchAction; closeDialog 0;";

//Set Escort Button
_Btn4 ctrlSetText localize "STR_pInAct_RevokeLicense";
_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_revokeLicense; closeDialog 0;";

//Set Ticket Button
_Btn5 ctrlSetText localize "STR_pInAct_TicketBtn";
_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

_Btn6 ctrlSetText localize "STR_pInAct_Arrest";
_Btn6 buttonSetAction "closeDialog 0; [] call life_fnc_showArrestDialog;";
_Btn6 ctrlEnable false;

_Btn7 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn7 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";

//SeizeWeapons Button
_Btn8 ctrlSetText localize "STR_pInAct_Seize";
_Btn8 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_seizePlayerAction; closeDialog 0;";

//SeizeWeapons Button
_Btn9 ctrlSetText localize "STR_pInAct_Breathalyzer";
_Btn9 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_testIntox; closeDialog 0;";

if (FETCH_CONST(life_coplevel) < _seizeRank) then {_Btn8 ctrlEnable false;};

if !(_curTarget getVariable ["ace_captives_isHandcuffed",false]) then {
 _Btn1 ctrlEnable false;
 _Btn6 ctrlEnable false;
};
{
    if ((player distance (getMarkerPos _x) <30)) exitWith { _Btn6 ctrlEnable true;};
} forEach LIFE_SETTINGS(getArray,"sendtoJail_locations");