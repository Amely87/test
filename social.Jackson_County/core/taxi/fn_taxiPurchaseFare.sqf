#include "..\..\script_macros.hpp"
// Written by Kupferkarpfen
// License: CC BY-NC-SA 4.0

private _speedy = param[ 0, false, [false] ];

if( player getVariable ["ace_captives_isHandcuffed", false] || player getVariable ["escorting", false] || player getVariable ["transporting", true] || life_is_arrested || life_istazed) exitWith {
    hint "F�r dich ist leider kein Taxi verf�gbar";
};

private _index = lbCurSel 48402;
if( _index < 0 ) exitWith {};

private _loc = lbData[48402, _index];
if( count _loc == 0) exitWith {};

private _sp = getMarkerPos _loc;
if( count _sp == 0) exitWith {};

private _price = lbValue[48402, (lbCurSel 48402)];
if(_price < 0) exitWith {};

private _distance = player distance _sp;
private _duration = round( _distance / 1000 * ( if( _speedy ) then { 2 } else { 6 } ) );

closeDialog 0;

if( !([_price] call life_fnc_pay) ) exitWith {
    hint "Du hast nicht genug Geld!";
};

cutText["Reise zum Zielort", "BLACK FADED", 5];

// Play random music...
private _music = [];
private _cfg = configFile >> "CfgMusic";
for "_i" from 0 to count _cfg - 1 do {
	_class = _cfg select _i;
	if (isClass _class) then {
        _track = configName _class;
        if( !([ [_track] call KRON_StrLower , "radio"] call KRON_StrInStr) ) then {
            _music pushBack _track;
        };
	};
};

private _track = _music select (floor (random count _music));
playMusic _track;

sleep 5;
0 cutFadeOut 9999999;
player setPos getMarkerPos "respawn_civilian";

private _target = time + _duration;

while { time <= _target } do {
    sleep 5;
};

player setPos _sp;
cutText ["Wir haben das ziel erreicht", "BLACK IN", 5];

private _volume = musicVolume;
5 fadeMusic 0;
sleep 5;

playMusic "";
0 fadeMusic _volume;