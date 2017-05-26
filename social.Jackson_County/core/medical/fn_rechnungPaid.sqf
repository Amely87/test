#include "..\..\script_macros.hpp"
/*
    File: fn_ticketPaid.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Verifies that the ticket was paid.
*/
params [
    ["_value",5,[0]],
    ["_unit",objNull,[objNull]],
    ["_ems",objNull,[objNull]]
];
if (isNull _unit || {_unit != life_rechnung_unit}) exitWith {}; //NO
if (isNull _ems || {_ems != player}) exitWith {}; //Double NO

BANK = BANK + _value;
[1] call SOCK_fnc_updatePartial;