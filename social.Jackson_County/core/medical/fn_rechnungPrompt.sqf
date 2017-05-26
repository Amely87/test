#include "..\..\script_macros.hpp"
/*
    File: fn_ticketPrompt
    Author: Bryan "Tonic" Boardwine

    Description:
    Prompts the player that he is being ticketed.
*/
private ["_ems","_val"];
if (!isNull (findDisplay 8600)) exitWith {}; //Already at the ticket menu, block for abuse?
_ems = _this select 0;
if (isNull _ems) exitWith {};
_val = _this select 1;

createDialog "life_rechnung_pay";
disableSerialization;
waitUntil {!isNull (findDisplay 8600)};

life_rechnung_paid = false;
life_rechnung_val = _val;
life_rechnung_ems = _ems;
CONTROL(8600,8601) ctrlSetStructuredText parseText format ["<t align='center'><t size='.8px'>" +(localize "STR_Med_Rechnung_GUI_Given"),_ems getVariable ["realname",name _ems],_val];

[] spawn {
    disableSerialization;
    waitUntil {life_rechnung_paid || (isNull (findDisplay 8600))};
    if (isNull (findDisplay 8600) && !life_rechnung_paid) then {
        [0,"STR_Cop_Ticket_Refuse",true,[profileName]] remoteExecCall ["life_fnc_broadcast",west];
        [1,"STR_Cop_Ticket_Refuse",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_rechnung_ems];
    };
};