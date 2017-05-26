/*
	File: fn_blindoff.sqf
	Author: Xcalade
	Description:
		Yeah now he can see YOU!
*/

params [
	["_target",ObjNull,[ObjNull]]
];

if(isNull _target) exitWith {};
if(!alive _target) exitWith {};
if(!(_target getVariable["isblinded",false])) exitWith { };

[player,"CL3_anim_drill_short"] remoteExec ["life_fnc_animSync",0];
[true,"augenbinde",1] call life_fnc_handleInv;
_target setVariable["isblinded",false,true];

[1,format["Jemand entfernt gerade deine Augenbinde..."]] remoteExec ["life_fnc_broadcast",_target];