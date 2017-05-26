#include "..\..\script_macros.hpp"
/*
    File: fn_copSearch.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Returns information on the search.
*/
life_action_inUse = false;
private ["_license","_guns","_gun"];
params [
    ["_civ",objNull,[objNull]],
    ["_invs",[],[[]]]
];
_money = _this select 2;
if (isNull _civ) exitWith {};

_illegal = 0;
_inv = "";
if (count _invs > 0) then {
    {
        _displayName = M_CONFIG(getText,"VirtualItems",(_x select 0),"displayName");
        _inv = _inv + format ["%1 %2<br/>",(_x select 1),(localize _displayName)];
        _price = M_CONFIG(getNumber,"VirtualItems",(_x select 0),"sellPrice");
        if (!isNull (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "processedItem")) then {
            _processed = M_CONFIG(getText,"VirtualItems",(_x select 0),"processedItem");
            _price = M_CONFIG(getNumber,"VirtualItems",_processed,"sellPrice");
        };

        if (!(_price isEqualTo -1)) then {
            _illegal = _illegal + ((_x select 1) * _price);
        };
    } forEach _invs;
    if (_illegal > 6000) then {

        if (life_HC_isActive) then {
            [getPlayerUID _civ,_civ getVariable ["realname",name _civ],"482"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
        } else {
            [getPlayerUID _civ,_civ getVariable ["realname",name _civ],"482"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
        };

    };

    if (life_HC_isActive) then {
        [getPlayerUID _civ,_civ getVariable ["realname",name _civ],"481"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
    } else {
        [getPlayerUID _civ,_civ getVariable ["realname",name _civ],"481"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
    };

    [0,"STR_Cop_Contraband",true,[(_civ getVariable ["realname",name _civ]),[_illegal] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
} else {
    _inv = localize "STR_Cop_NoIllegal";
};

if(!alive _civ || player distance _civ > 5) exitWith {hint format[localize "STR_Cop_CouldntSearch",_civ getVariable["realname",name _civ]]};

hint parseText format["<t color='#FF0000'><t size='1.6'>Durchsuchung</t></t><br/><br/><br/><t size='1.3' align='left' color='#00A2FF'>Name:</t><br/><t align='left' size='0.95'>%1<br/><br/><t size='1.3' align='left' color='#00CD00'>Bargeld (in $):</t><br/><t size='1.1' align='left'>%3</t><br/><br/><br/><t color='#FFD700'><t size='1.5' align='left'><br/>" +(localize "STR_Cop_IllegalItems")+ "</t></t><br/>%2<br/><br/>"
,(_civ getVariable["realname",name _civ]),_inv,[_money] call life_fnc_numberText];