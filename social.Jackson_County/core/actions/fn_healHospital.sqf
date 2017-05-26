#include "..\..\script_macros.hpp"
#include "\z\ace\addons\medical\script_component.hpp"
/*
    File: fn_healHospital.sqf
    Author: Bryan "Tonic" Boardwine
    Reworked: Jesse "TKCJesse" Schultz

    Description:
    Prompts user with a confirmation dialog to heal themselves.
    Used at the hospitals to restore health to full.
    Note: Dialog helps stop a few issues regarding money loss.
*/
private ["_healCost","_action"];
if(playersNumber independent > 2) exitWith { hint "Es sind Medic´s im Diest. Suchen Sie diese auf!"};
if (life_action_inUse) exitWith {};
_healCost = LIFE_SETTINGS(getNumber,"hospital_heal_fee");
if (CASH < _healCost) exitWith {hint format [localize "STR_NOTF_HS_NoCash",[_healCost] call life_fnc_numberText];};

life_action_inUse = true;
_action = [
    format [localize "STR_NOTF_HS_PopUp",[_healCost] call life_fnc_numberText],
    localize "STR_NOTF_HS_TITLE",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
    titleText[localize "STR_NOTF_HS_Healing","PLAIN"];
    closeDialog 0;
    uiSleep 8;
    if (player distance (_this select 0) > 5) exitWith {life_action_inUse = false; titleText[localize "STR_NOTF_HS_ToFar","PLAIN"]};
    titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
	player setVariable [QGVAR(pain), 0, true];
	player setVariable [QGVAR(morphine), 0, true];
	player setVariable [QGVAR(bloodVolume), 100, true];
	player setVariable ["ACE_isUnconscious", false, true];
	player setvariable [QGVAR(tourniquets), [0,0,0,0,0,0], true];
	player setvariable [QGVAR(openWounds), [], true];
	player setvariable [QGVAR(bandagedWounds), [], true];
	player setVariable [QGVAR(internalWounds), [], true];
	player setvariable [QGVAR(lastUniqueWoundID), 1, true];
	player setVariable [QGVAR(heartRate), 80];
	player setvariable [QGVAR(heartRateAdjustments), []];
	player setvariable [QGVAR(bloodPressure), [80, 120]];
	player setVariable [QGVAR(peripheralResistance), 100];
	player setVariable [QGVAR(fractures), [], true];
	player setvariable [QGVAR(triageLevel), 0, true];
	player setvariable [QGVAR(triageCard), [], true];
	player setVariable [QGVAR(salineIVVolume), 0, true];
	player setVariable [QGVAR(plasmaIVVolume), 0, true];
	player setVariable [QGVAR(bloodIVVolume), 0, true];
	player setvariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0], true];
	player setvariable [QGVAR(airwayStatus), 100];
	player setVariable [QGVAR(airwayOccluded), false];
	player setvariable [QGVAR(airwayCollapsed), false];
	player setvariable [QGVAR(addedToUnitLoop), false, true];
	player setvariable [QGVAR(inCardiacArrest), false, true];
	player setvariable [QGVAR(hasLostBlood), 0, true];
	player setvariable [QGVAR(isBleeding), false, true];
	player setvariable [QGVAR(hasPain), false, true];
	player setvariable [QGVAR(painSuppress), 0, true];
    player setDamage 0;
    CASH = CASH - _healCost;
    life_action_inUse = false;
} else {
    hint localize "STR_NOTF_ActionCancel";
    closeDialog 0;
    life_action_inUse = false;
};
