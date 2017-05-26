/*
	File: fn_blindaction.sqf
	Author: Xcalade	
	Description:
		Make Player Blind
*/

params [
	["_target",ObjNull,[ObjNull]]
];

if(isNull _target) exitWith {};
if(player == _target) exitWith {};
if(player distance _target > 4) exitWith {};
if!(alive _target) exitWith {}; 
if(!([false,"augenbinde",1] call life_fnc_handleInv)) exitWith {hint "Du hast keine Augenbinde dabei!"};
if(_target getVariable "isblinded") exitWith {hint "Dem ziel wurden bereits die augen Verbunden."};
if!(_target getVariable "ace_captives_isHandcuffed") exitWith {hint "Haben wir nicht einen schritt übersprungen? 1.Festnehmen 2.Augenbinde"};

[player,"CL3_anim_drill_short"] remoteExec ["life_fnc_animSync",0];
_target setVariable["isblinded",true,true];

[player] remoteExec ["life_fnc_blindon",_target];
hint localize "STR_MISC_AugenBinde_Attach";
