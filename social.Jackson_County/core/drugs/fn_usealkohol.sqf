#include "..\..\script_macros.hpp"
/*
    File: fn_AlkoholEffekt.sqf
    Author: Kuchiha
	Edit by: Distrikt41 - Dscha
    Description:
    Alkohol Effekt.
*/
//Inventar schlie?en
closeDialog 0;

player setVariable["intoxicated",true,true];
sleep 1;

"dynamicBlur" ppEffectEnable true;
"chromAberration" ppEffectEnable true;
enableCamShake true;

EffektStart = round(random 5);

//Dauer
if (life_intox >= 0.30) then
	{
		if (EffektStart <= 2) exitWith {};
		for "_i" from 0 to 44 do
			{
				"dynamicBlur" ppEffectAdjust  [random 8];
				"dynamicBlur" ppEffectCommit 1;
				addcamShake[random 15, 1, random 25];
				sleep 1;
			};
		"dynamicBlur" ppEffectAdjust [0];
		"dynamicBlur" ppEffectCommit 5;
		sleep 6;
	};

if (life_intox >= 1.2 && life_intox <= 2.3) then
	{
		if (EffektStart <= 2) exitWith {};
		for "_i" from 0 to 29 do
			{
				"dynamicBlur" ppEffectAdjust  [random 5];
				"dynamicBlur" ppEffectCommit 1;
				addcamShake[random 10, 1, random 15];
				sleep 1;
			};
		"dynamicBlur" ppEffectAdjust [0];
		"dynamicBlur" ppEffectCommit 5;
		sleep 6;
	};


"colorInversion" ppEffectEnable false;
"chromAberration" ppEffectEnable false;
resetCamShake;
player setVariable["intoxicated",false,true];