#include "..\..\script_macros.hpp"
/*
    File: fn_hudSetup.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Setups the hud for the player?
*/
/*disableSerialization;

cutRsc ["playerHUD", "PLAIN", 2, false];
[] call life_fnc_hudUpdate;

[] spawn
{
    private ["_dam"];
    for "_i" from 0 to 1 step 0 do {
        _dam = damage player;
        waitUntil {!((damage player) isEqualTo _dam)};
        [] call life_fnc_hudUpdate;
    };
};
*/
disableSerialization;

[] execVM "scripts\inithud.sqf";

("nlhud" call BIS_fnc_rscLayer) cutRsc ["nlhud","PLAIN"]; //show

[] spawn
{
	while {true} do
	{
		sleep 120;
		("nlhud" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; //remove
		("nlhud" call BIS_fnc_rscLayer) cutRsc ["nlhud","PLAIN"]; //show
	};
};
