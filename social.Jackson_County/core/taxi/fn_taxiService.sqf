#include "..\..\script_macros.hpp"
/*
    File: fn_vehicleShop.sqf
    Author: Bryan "Tonic" Boardwine
    
    Description:
    Initializes the vehicle shop.
    CANT WAIT TO SCRAP THIS! ( You should scrap yourself for what you did )
*/
private["_display","_locations","_price","_pos1","_pos2","_dest_name","_distance","_time","_ui","_progress","_pgText","_cP","_upp"];
disableSerialization;

if(vehicle player != player) exitWith {
    hint "Du musst erst das Fahrzeug verlassen, bevor du den Bus nehmen kannst";
};
hint localize "Warte auf den Bus....... Du musst innerhalb von 5 Metern deiner Haltestelle warten, sonst fährt er einfach weiter.";
life_taxiLocation = getPosATL player;

//Setup our progress bar.
_upp = "Auf den Bus warten...";
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

life_is_processing = true;

while{true} do {
	uisleep  0.3;
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = uiNamespace getVariable "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(player distance life_taxiLocation > 10) exitWith {hint localize "Entferne dich nicht weiter als 10m von der Haltestelle weg."; life_is_processing = false;5 cutText ["","PLAIN"];};
};
if(player distance life_taxiLocation > 10) exitWith {hint localize "Entferne dich nicht weiter als 10m von der Haltestelle weg."; life_is_processing = false;5 cutText ["","PLAIN"];};
hint "Der Bus ist da";
5 cutText ["","PLAIN"];
life_is_processing = false;
if(!dialog) then {
    createDialog "life_dialog_taxi";
    life_taxiLocation = (_this select 3) select 0;
};

_display = findDisplay 48400;
_locations = _display displayCtrl 48402;
lbClear _locations;

ctrlSetText[48401, "Haltestelle " + (switch (life_taxiLocation) do {
    case "taxi_spawn_lakeside"; case "taxi_spawn_lakeside": { "Lakeside" };
    case "taxi_spawn_morrison"; case "taxi_spawn_morrison": { "Morrison" };
    case "taxi_spawn_losd"; case "taxi_spawn_losd": { "LosD" };
    case "taxi_spawn_verwahrstelle"; case "taxi_spawn_verwahrstelle": { "Verwahrplatz" };
    default { "ERROR" };
})];

{
    if( playerSide == _x select 2 ) then {
        if( count _x < 4 || count _x == 4 && { call (_x select 3) } ) then {

            _dest_name = (_x select 0);
            if(life_taxiLocation != _dest_name) then {
                _pos1 = getMarkerPos life_taxiLocation;
                _pos2 = getMarkerPos _dest_name;
                _distance = _pos1 distance _pos2;
                _price = round(_distance / 0.8);
                _time = round(_distance / 1000 * 6);
                _locations lbAdd format[ "%1 - Linienbus (Dauer: %2): %3€ - Reisebus (Dauer: %4): %5€", _x select 1,  [_time, "MM:SS"] call BIS_fnc_secondsToString, [_price] call life_fnc_numberText, [_time / 3, "MM:SS"] call BIS_fnc_secondsToString, [round(_price * 2)] call life_fnc_numberText ];
                _locations lbSetData [(lbSize _locations)-1,_dest_name];
                _locations lbSetValue [(lbSize _locations)-1,_price];
            };
        };
    };
} forEach life_taxiStations;