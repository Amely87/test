/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "scripts\fn_teargas.sqf";
[] execVM "scripts\zlt_fastrope.sqf";
if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "scripts\autoMessages.sqf";
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\monitor.sqf";

if(isDedicated && isNil("life_ATMhacked")) then
{
 life_ATMhacked = 0;
 publicVariable "life_ATMhacked";
 diag_log format["life_ATMhacked: %1",life_ATMhacked];
};

if(isDedicated && isNil("life_BankLock")) then
{
 life_BankLock = 0;
 publicVariable "life_BankLock";
 diag_log format["life_BankLock: %1",life_BankLock];
};
StartProgress = true;

MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;
    _object switchMove _anim;
};

emergLight_vehicles = [];
{
        emergLight_vehicles pushBack (configName _x);
} forEach ("true" configClasses (missionConfigFile >> "emergLightVehicles"));