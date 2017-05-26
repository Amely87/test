#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
/*
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if (!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
    if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
        ["NotWhitelisted",false,true] call BIS_fnc_endMission;
        sleep 35;
    };
};


player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
*/
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_coplevel)) < 1) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};

switch(FETCH_CONST(life_coplevel)) do {
		case 1: {life_paycheck = life_paycheck;};
		case 2: {life_paycheck = life_paycheck + 50;};
		case 3: {life_paycheck = life_paycheck + 100;};
		case 4: {life_paycheck = life_paycheck + 150;};
		case 5: {life_paycheck = life_paycheck + 200;};
		case 6: {life_paycheck = life_paycheck + 250;};
		case 7: {life_paycheck = life_paycheck + 300;};
		case 8: {life_paycheck = life_paycheck + 300;};
		case 9: {life_paycheck = life_paycheck + 300;};
		case 10: {life_paycheck = life_paycheck + 320;};
		case 11: {life_paycheck = life_paycheck + 340;};
		case 12: {life_paycheck = life_paycheck + 360;};
		case 13: {life_paycheck = life_paycheck + 400;};
};

player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
player setVariable ["copLevel",1,true];
[] spawn life_fnc_placeablesInit;
[] call life_fnc_spawnMenu;
[] execVM "core\welcomecop.sqf";
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.