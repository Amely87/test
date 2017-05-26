#include "..\..\script_macros.hpp"
/*
    File: fn_lacLoadout.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Loads the lac out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "CG_EMS8";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
