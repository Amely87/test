#include "..\..\script_macros.hpp"
/*
    File: fn_knockedOut.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts and monitors the knocked out state.
*/
private "_obj";
params [
    ["_target",objNull,[objNull]],
    ["_who","",[""]]
];

if (isNull _target) exitWith {};
if (_target != player) exitWith {};
if (_who isEqualTo "") exitWith {};

life_isknocked = true;

titleText[format [localize "STR_Civ_KnockedOut",_who],"PLAIN"];
[player,"Cl3_anim_Knockout1In"] remoteExec ["life_fnc_animSync",0];
sleep 4;
[player,"static_dead"] remoteExec ["life_fnc_animSync",-2];
_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
_obj setPosATL ASLTOATL(visiblePositionASL player);
player attachTo [_obj,[0,0,0]];

sleep 14;

[player,"CL3_anim_Knockout1End"] remoteExec ["life_fnc_animSync",-2];

detach player;
deleteVehicle _obj;
player setVariable ["robbed",false,true];
life_isknocked = false;

