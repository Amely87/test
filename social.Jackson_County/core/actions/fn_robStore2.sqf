/*         
            file: fn_robShops.sqf
            Author: MrKraken
            Made from MrKrakens bare-bones shop robbing tutorial on www.altisliferpg.com forums
            Description:
            Executes the rob shob action!
            Idea developed by PEpwnzya v2.0
            
*/ 
private["_kassa","_ui","_progress","_pgText","_cP","_rip","_alarm","_shopName"];
params[
	["_shop",ObjNull,[ObjNull]],
	["_robber",ObjNull,[ObjNull]],
	"_action"
];

if !(alive _robber) exitWith {};

_alarm = false;
_rip = true;
_kassa = 500 + round(random 550);

[_shop,_robber,_action,-1] remoteExec ["TON_fnc_robState",2];

hint "Der Kassierer hat heimlich die Polizei informiert!";
[1,format[localize "STR_Item_ueberfall", _shop]] remoteExec ["life_fnc_broadcast",west];
	
_alarm = true;


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Kassierer holt das Geld - (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then {
	_exit = 0;
    while{true} do
    {
        _shop switchMove "AmovPercMstpSsurWnonDnon";
		sleep  (0.75 + (random(3)));
        _cP = _cP + 0.009;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["Kassierer holt das Geld - (%1%2)...",round(_cP * 100),"%"];
        if(_cP >= 1) exitWith {};
        if(_robber distance _shop > 15) exitWith {_exit = 1};
        if!(alive _robber) exitWith {_exit = 2};
		if(life_istazed) exitwith {_exit = 3};
		if(player getVariable "ace_captives_isSurrendering") exitWith {_exit = 4};
		if(player getVariable "ace_captives_isHandcuffed") exitWith {_exit = 5};
		if(vehicle player != _robber) exitWith {_exit = 6};
		if(_alarm) then
		{
			_Pos = position player; // by ehno: get player pos
			_marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
			"Marker200" setMarkerColor "ColorRed";
			"Marker200" setMarkerText "!ACHTUNG! Raub im Gang !ACHTUNG!";
			"Marker200" setMarkerType "mil_warning";
		};
    }; 
	_rip = false;
	5 cutText ["","PLAIN"];
	deleteMarker "Marker200";
	
	//Exit codes : 1 = Distance, 2 = Dead, 3 = Tazed, 4 = Surrender, 5 = Restrained, 6 = In Kfz
	//If exitWith is faster than switch do ? rofl.
	if(_exit == 1) exitWith {
		hint "Du bist zu weit weg! Der Kassierer hat das Geld in Sicherheit gebracht.";
		[1,format["Tankstelle %1: Der Täter ist geflohen!", _shop]] remoteExec ["life_fnc_broadcast",west];
	};
		
	if(_exit == 2) exitWith {
		[1,format["Tankstelle %1: Der Täter ist gestorben!", _shop]] remoteExec ["life_fnc_broadcast",west];
	};
		
	if(_exit == 3) exitWith {
		hint "Der Raub ist fehlgeschlagen du wurdest getazert!"; 
		[1,format["Tankstelle %1: Der Täter wurde erfolgreich gestellt!", _shop]] remoteExec ["life_fnc_broadcast",west];
	};
		
	if(_exit == 4) exitWith {
		hint "Der Raub ist fehlgeschlagen. Du hast dich ergeben, der Kassierer verlor die Angst vor dir und brachte das Geld in Sicherheit."; 
	};
		
	if(_exit == 5) exitWith {
		hint "Der Raub ist fehlgeschlagen. Du wurdest festgenommen, der Kassierer verlor die Angst vor dir und brachte das Geld in Sicherheit."; 		
	};
		
	if(_exit == 6) exitWith {
		hint "Der Raub ist fehlgeschlagen da du dich im Fahrzeug befindest. Der Kassierer brachte das Geld in Sicherheit.";
		};
		

    titleText[format["Du hast %1 geklaut, nichts wie weg hier, die Cops sind auf dem Weg!",[_kassa] call life_fnc_numberText],"PLAIN"];
    life_cash = life_cash + _kassa; 
    life_use_atm = false;
	sleep (30 + random(60));
    life_use_atm = true; // Robber can not use the ATM at this point.	
    if!(alive _robber) exitWith {};
};
[_shop,_robber,_action,0] remoteExec ["TON_fnc_robState",2];