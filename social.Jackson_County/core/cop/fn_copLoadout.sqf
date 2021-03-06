/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "mr_pol_cloth_lvpd_c_1";

/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCopCard";
player assignItem "ItemCopCard";
player addItem "ItemGPS";
player assignItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
