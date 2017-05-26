#include "..\..\script_macros.hpp"
/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
    case (_item in ["waterBottle","coffee","redgull","heisseschokolade","gluehwein","recksbier","herrmanhexe","keiserbrilsener","raltbier","jaegerkleister","vodka","whiskey","cola"]): {
        if ([false,_item,1] call life_fnc_handleInv) then {
			playsound "trinken";
            life_thirst = 100;
			if (_item isEqualTo "gluehwein") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
			if (_item isEqualTo "recksbier") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
			if (_item isEqualTo "herrmanhexe") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
			if (_item isEqualTo "keiserbrilsener") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
			if (_item isEqualTo "raltbier") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
			if (_item isEqualTo "jaegerkleister") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
			if (_item isEqualTo "vodka") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
			if (_item isEqualTo "whiskey") then {
				life_intox = life_intox + 0.30;
				[] spawn life_fnc_usealkohol;
			};
            if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 0;};
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1}) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    case (_item isEqualTo "boltcutter"): {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };
	
	case (_item isEqualTo "heroin_processed"):
	{
		if([false,_item,1] call life_fnc_handleInv) then
		{
			titleText["Du injiziert dir Heroin.","PLAIN"];
			life_intox = life_intox + 0.10;
			[] spawn life_fnc_useHeroin;
		};
	};
	
	case (_item == "gpstracker"): 
	{
		[cursorTarget] spawn life_fnc_gpsTracker;
	};	
	case (_item isEqualTo "lappi"):
	{
		_wlanZone = "";
		_wlanZones = ["wlan_1","wlan_2","wlan_3"];
	{
		if(player distance (getMarkerPos _x) < 30) exitWith {_WlanZone = _x;};
	}foreach _wlanZones;
		if(_wlanZone == "") exitWith {hint "Du kannst hier keinen Laptop aufbauen, da du hier kein Wlan hast!";};
 
 
		_table = nearestObject[player, "OfficeTable_01_new_F"];
		_tablePos = getPos _table;
		if(player distance _tablePos > 5) exitWith {hint "Du musst den Laptop an einem Tisch aufbauen!";};
 
 
		if(!isNull life_theLappi) exitWith {hint "Du kannst nur einen Laptop aufbauen!";};
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
			[] spawn life_fnc_lappi;
		};
	};
	case (_item isEqualTo "cocaine_processed"):
	{
		if([false,_item,1] call life_fnc_handleInv) then
		{
			[] spawn
			{
				life_cocaine_effect = time;
				titleText["Du sniffst Kokain.","PLAIN"];
				player enableFatigue false;
				life_intox = life_intox + 0.10;
				[] spawn life_fnc_useCocaine;
				waitUntil {!alive player OR ((time - life_cocaine_effect) > (2 * 60))};
				player enableFatigue true;
			};
		};
	};
	
	case (_item isEqualTo "marijuana"):
	{
		if(([false,_item,1] call life_fnc_handleInv)) then
		{
			life_intox = life_intox + 0.10;
			[] spawn life_fnc_useMarijuana;
			player setFatigue 1;
		};
	};	

    case (_item isEqualTo "blastingcharge"): {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

    case (_item isEqualTo "defusekit"): {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"): {
        [false] call life_fnc_storageBox;
    };
	
    case (_item isEqualTo "storagebig"): {
        [true] call life_fnc_storageBox;
    };

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if (vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn life_fnc_jerryCanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"): {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };
	
	case (_item isEqualTo "rubbellos"): {        
		[] spawn life_fnc_rubbellos; 
		closeDialog 0;
	};
	
	case (_item isEqualTo "nothammer"):
	{
		if(playerSide in [west,independent,east]) then {
			[] spawn life_fnc_nothammer;
			closeDialog 0;
		} else {
			hint localize "STR_ISTR_NotUsable";
		};
	};

	case (_item isEqualTo "wheel"): {
		if(playerSide isEqualTo east) then {
			[_item] spawn life_fnc_reifen;
			closeDialog 0;
		};
	};
	
	case (_item isEqualTo "sos"): {
		if(playerSide isEqualTo west) then {
			[_item] spawn life_fnc_SOS;
			closeDialog 0;
		};
	};
	
 	case (_item isEqualTo "Supportcontainer"): {
		if(!isNull life_Supportcontainer) exitWith {hint localize "STR_ISTR_SupportcontainerDeployment"};	
		if ([false,_item,1] call life_fnc_handleInv) then {
			[] spawn life_fnc_Supportcontainer;
			closeDialog 0;
		};
	};

    case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach","lebkuchenherzen","spekulatius","schokoladentaler","marzipankartoffeln","weihnachtsmann","hamburger","cheeseburger","pommes","salzbraetzel","salzstangen","erdnuesse","chips","currywurst","schnitzel","bratwurst"]): {
        if (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then {
            if ([false,_item,1] call life_fnc_handleInv) then {
				playsound "essen";
                _val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
                _sum = life_hunger + _val;
                switch (true) do {
                    case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
                    case (_sum > 100): {life_hunger = 100;};
                    default {life_hunger = _sum;};
                };
            };
        };
    };

    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;