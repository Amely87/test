#include "..\script_macros.hpp"
/*
    File: fn_initLac.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the Lac..
*/
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_lacLevel)) < 1) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};

switch(FETCH_CONST(life_lacLevel)) do {
		case 1: {life_paycheck = life_paycheck;};
		case 2: {life_paycheck = life_paycheck + 50;};
		case 3: {life_paycheck = life_paycheck + 100;};
		case 4: {life_paycheck = life_paycheck + 150;};
		case 5: {life_paycheck = life_paycheck + 200;};
		case 6: {life_paycheck = life_paycheck + 250;};
		case 7: {life_paycheck = life_paycheck + 300;};
		case 8: {life_paycheck = life_paycheck + 300;};
		case 9: {life_paycheck = life_paycheck + 300;};
};

[] spawn life_fnc_medicPlaceablesInit;
[] call life_fnc_spawnMenu;
[] execVM "core\welcomemedic.sqf";
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

