#include "..\..\script_macros.hpp"
/*
    File: fn_ticketPay.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pays the ticket.
*/
if (isNil "life_rechnung_val" || isNil "life_rechnung_ems") exitWith {};
if (CASH < life_rechnung_val) exitWith {
    if (BANK < life_rechnung_val) exitWith {
        hint localize "STR_Med_Rechnung_NotEnough";
        [1,"STR_Med_Rechnung_NotEnoughNOTF",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_rechnung_ems];
        closeDialog 0;
    };

    hint format [localize "STR_Med_Rechnung_Paid",[life_rechnung_val] call life_fnc_numberText];
    BANK = BANK - life_rechnung_val;
    [1] call SOCK_fnc_updatePartial;
    life_rechnung_paid = true;

    [0,"STR_Med_Rechnung_PaidNOTF",true,[profileName,[life_rechnung_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
    [1,"STR_Med_Rechnung_PaidNOTF_1",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_rechnung_ems];
    [life_rechnung_val,player,life_rechnung_ems] remoteExecCall ["life_fnc_rechnungPaid",life_rechnung_ems];

    closeDialog 0;
};

CASH = CASH - life_rechnung_val;
[0] call SOCK_fnc_updatePartial;
life_rechnung_paid = true;

[0,"STR_Med_Rechnung_PaidNOTF",true,[profileName,[life_rechnung_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
closeDialog 0;
[1,"STR_Med_Rechnung_PaidNOTF_1",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_rechnung_ems];
[life_rechnung_val,player,life_rechnung_ems] remoteExecCall ["life_fnc_rechnungPaid",life_rechnung_ems];