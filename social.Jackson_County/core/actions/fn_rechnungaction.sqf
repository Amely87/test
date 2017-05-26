/*
	File: fn_rechnungAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the ticketing process.
*/

params [
    ["_unit",objNull,[objNull]]
];
disableSerialization;
if(!(createDialog "life_rechnung_give")) exitWith {hint "Fehler: Der Dialog life_rechnung_give wurde nicht gefunden!"};
if (isNull _unit || !isPlayer _unit) exitWith {};
ctrlSetText[8651,format["Rechnung an %1",_unit getVariable["realname",name _unit]]];
life_rechnung_unit = _unit;