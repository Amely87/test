#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master client initialization file
*/

private ["_handle","_timeStamp","_extDB_notLoaded"];
life_firstSpawn = true;
life_session_completed = false;
0 cutText[localize "STR_Init_ClientSetup","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
_extDB_notLoaded = "";
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------ Version 5.0.0 -------------------------------------------";
diag_log "----------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
enableSentences false;

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil "TON_fnc_clientGangLeader")};

[] spawn {
if (!isServer) then {

	_admin = false;
	while {true} do {
		_admin = false;
		if (!(isNil "life_adminlevel")) then {
				_admin = life_adminlevel call BIS_fnc_parseNumber;
			if (_admin > 0) then {
				_admin = true;
			};
		};
		
		if (_admin) exitwith {};
		
		if (cameraOn == player && cameraView == "External") then
			{
				player switchCamera "Internal";
			};
		sleep 0.1;
		};
	};
};

_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;

if (isNil "TFAR_fnc_isTeamSpeakPluginEnabled") exitwith {
	999999 cutText ["Task-Force-Radio ist nicht auf deinem Computer installiert.","BLACK FADED"];
	999999 cutFadeOut 99999999;
};

if (!(_TFenabled)) then {
	while {!([] call TFAR_fnc_isTeamSpeakPluginEnabled)} do {
		titleText ["Bitte aktiviere das TeamSpeak3 Plugin 'Task Force Arma3 Radio'  |  Einstellungen > Plugins - dort das Plugin aktivieren.", "BLACK"];
		sleep 2;
	};
};

A3L_TFEnabled = true;
A3L_onTsServer = "[GER] Social Lakeside | Ohne Whitelistung | Community Spielplatz" == (call TFAR_fnc_getTeamSpeakServerName);
A3L_onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
titleText ["= TFAR Erfolgreich Geladen ==","BLACK IN"];

[] spawn {

	while {true} do {
	
		_isadmin = false;
		if (!(isNil "life_adminlevel")) then {
			_adminlvl = life_adminlevel call BIS_fnc_parseNumber;
			
			if (_adminlvl > 0) then {
				_isadmin = true;
			};
		};
		
		if (!(_isadmin)) then {
			_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;
			if ((!(_TFenabled)) && (A3L_TFEnabled)) then {
				titleText ["Bitte aktiviere das TeamSpeak3 Plugin 'Task Force Arma3 Radio'  ||  Einstellungen > Plugins - dort das Plugin aktivieren.", "BLACK"];
				A3L_TFEnabled = false;
			};
			
			_onTsServer = "[GER] Social Lakeside | Ohne Whitelistung | Community Spielplatz" == (call TFAR_fnc_getTeamSpeakServerName);
			if (!(_onTsServer)) then {
				titleText ["Bitte verbinde dich auf unseren TeamSpeak3 Server: ts3.social-lakeside.de", "BLACK"];
				A3L_onTsServer = false;
			} else {
				if (!(A3L_onTsServer)) then {
					titleText ["Ts3 Server Checked. Willkommen!","BLACK IN"];
					A3L_onTsServer = true;
				};
			};
			
			_onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
			if (!(_onChannel)) then {
				titleText ["Bitte lade das TeamSpeak3 Plugin 'Task Force Arma3 Radio' neu!  ||  Einstellungen -> Plugins -> Reload All", "BLACK"];
				A3L_onChannel = false;
			} else {
				if (!(A3L_onChannel)) then {
					titleText ["Ts3 Channel Checked. Willkommen!","BLACK IN"];
					A3L_onChannel = true;
				};
			};
			
			if ((_TFenabled) && (!(A3L_TFEnabled))) then {
				titleText ["Plugin aktiviert, Willkommen!","BLACK IN"];
				A3L_TFEnabled = true;
			};
		};	
		sleep 7;	
	};
};

diag_log "::Life Client:: Received server functions.";
0 cutText [localize "STR_Init_ServerReady","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil {!isNil "life_server_isReady"};
waitUntil {!isNil "life_HC_isActive" && {!isNil "life_server_extDB_notLoaded"}};

if (life_server_extDB_notLoaded) exitWith {
    999999 cutText [localize "STR_Init_ExtdbFail","BLACK FADED"];
    999999 cutFadeOut 99999999;
};

waitUntil {life_server_isReady};
[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText[localize "STR_Init_ClientFinish","BLACK FADED"];
0 cutFadeOut 9999999;

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

//Set bank amount for new players
switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
    };
    case east: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_lac");
    };
};

switch (playerSide) do {
    case west: {
        _handle = [] spawn life_fnc_initCop;
        waitUntil {scriptDone _handle};
    };
    case civilian: {
        //Initialize Civilian Settings
        _handle = [] spawn life_fnc_initCiv;
        waitUntil {scriptDone _handle};
    };
    case independent: {
        //Initialize Medics and blah
        _handle = [] spawn life_fnc_initMedic;
        waitUntil {scriptDone _handle};
    };
    case east: {
        //Initialize LAC and blah
        _handle = [] spawn life_fnc_initLac;
        waitUntil {scriptDone _handle};
    };
};

player setVariable ["ace_captives_isHandcuffed",false,true];
player setVariable ["Escorting",false,true];
player setVariable ["transporting",false,true];
player setVariable ["playerSurrender",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;

[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player setVariable ["steam64ID",getPlayerUID player];
player setVariable ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
    life_disable_getIn = false;
    player moveInCargo (_this select 0);
    life_disable_getOut = true;
";

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; //Variable OwnerID for HeadlessClient

[] spawn life_fnc_survival;

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

CONSTVAR(life_paycheck); //Make the paycheck static.
if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};

if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_setupStationService.sqf";
};

/*
    https://feedback.bistudio.com/T117205 - disableChannels settings cease to work when leaving/rejoining mission
    Universal workaround for usage in a preInit function. - AgentRev
    Remove if Bohemia actually fixes the issue.
*/
{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

if (life_HC_isActive) then {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["HC_fnc_wantedProfUpdate",HC_Life];
} else {
    [getPlayerUID player,player getVariable ["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];
};

life_hideoutBuildings = [];
{
    private _building = nearestBuilding getMarkerPos _x;
    life_hideoutBuildings pushBack _building;
    false
} count ["gang_area_1","gang_area_2","gang_area_3"];

//DynMarket
DYNAMICMARKET_boughtItems = [];
[player] remoteExec ["TON_fnc_playerLogged",RSERV];

[] execVM "derleon\vis\Setup.sqf";
diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "----------------------------------------------------------------------------------------------------";
