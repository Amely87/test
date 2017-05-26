#include "..\..\script_macros.hpp"
/*
	File: fn_useCigarette.sqf
	@Deo
	Description:
	Use Cigarette
*/
private["_smoke"];

[0,format["%1 genießt eine schöne Rax Zigarette.",name player]] remoteExec ["life_fnc_broadcast",(position player) nearEntities [["Man"], 10]];
