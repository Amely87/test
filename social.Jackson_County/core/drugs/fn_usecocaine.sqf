#include "..\..\script_macros.hpp"
/*
	File: fn_useCocaine.sqf
	@Deo

	Description:
	Cocaine Effect
*/

player setVariable["intoxicated",true,true];
[0,format["%1 snifft Kokain.",name player]] remoteExec ["life_fnc_broadcast",(position player) nearEntities [["Man"], 10]];
for "_i" from 0 to 400 do
{
	"dynamicBlur" ppEffectEnable true;
	"dynamicBlur" ppEffectAdjust [round ((1+(life_intox-.1))^10)];
	"dynamicBlur" ppEffectCommit 1;
	sleep 0.02;
};
"dynamicBlur" ppEffectEnable false;
if(life_intox <= 0.08) then {player setVariable["intoxicated",false,true];};
{player setDamage (damage player) + .30;};