#include "..\..\script_macros.hpp"
/*
    File: fn_tazed.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the tazed animation and broadcasts out what it needs to.
*/
private ["_curWep","_curMags","_attach"];
params [
    ["_unit",objNull,[objNull]],
    ["_shooter",objNull,[objNull]]
];

if (isNull _unit || isNull _shooter) exitWith {player allowDamage true; life_istazed = false;};

if (_shooter isKindOf "Man" && alive player) then {
    if (!life_istazed) then {
        life_istazed = true;
		player setVariable ["tf_unable_to_use_radio", true];
        _curWep = currentWeapon player;
        _curMags = magazines player;
        _attach = if (!(primaryWeapon player isEqualTo "")) then {primaryWeaponItems player} else {[]};

        {player removeMagazine _x} forEach _curMags;
        player removeWeapon _curWep;
        player addWeapon _curWep;
        if (!(count _attach isEqualTo 0) && !(primaryWeapon player isEqualTo "")) then {
            {
                _unit addPrimaryWeaponItem _x;
            } forEach _attach;
        };

        if (!(count _curMags isEqualTo 0)) then {
            {player addMagazine _x;} forEach _curMags;
        };

        [_unit] remoteExecCall ["life_fnc_tazeSound",RCLIENT];
	/* New Animation (Ragdoll Effect) */
	
		enableCamshake true;
		addCamShake [50,5,30];
		
		disableUserInput true;
		player allowDamage false;
		if (vehicle player == player) then {
			private ["_rag"];
			player allowDamage false;
			_rag = "Land_Can_V3_F" createVehicleLocal [0,0,0];
			_rag setMass 1e10;
			_rag attachTo [player, [0,0,0], "Spine3"];
			_rag setVelocity [0,0,6];
			player allowDamage false;
			detach _rag;
			0 = _rag spawn {
				deleteVehicle _this;
				player allowDamage true;
			};
		};		
		sleep 0.5;
		player allowDamage true;	//Double-Check
		sleep 4;		
        _obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
        _obj setPosATL ASLTOATL(visiblePositionASL player);
		
		[player,"static_dead"] remoteExec ["life_fnc_animSync",-2];
		
		_unit attachTo [_obj,[0,0,0]];
		sleep 12;
        [player,"amovppnemstpsraswrfldnon"] remoteExec ["life_fnc_animSync",-2];

        if (!(player getVariable ["Escorting",false])) then {
            detach player;
        };
		player setVariable ["tf_unable_to_use_radio", false];
        life_istazed = false;
        player allowDamage true;
        disableUserInput false;
    };
} else {
    _unit allowDamage true;
    life_iztazed = false;
};

player setVariable ["tf_unable_to_use_radio", false];
