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
_shopName = "Lakeside Bank";


if !(alive _robber) exitWith {};

_alarm = false;
_rip = true;

_kassa = 20000 + round(random 60000);
[_shop,_robber,_action,-1] remoteExec ["TON_fnc_shopState",2];

hint "Was? Ein Alarm? Die Cops werden sicherlich gleich hier sein!!";
[2,format["Lakeside-City Bank wird von Rebellen ausgeraubt!"]] remoteExec ["life_fnc_broadcast",-2];
[1,format["Lakeside-City Bank wird von Rebellen ausgeraubt!"]] remoteExec ["life_fnc_broadcast",west];

_shop spawn {
	for "_i" from 1 to 6 do {
		playSound3D ["sounds\bankalarm.ogg",_this,false,getPosASL _this,3,1,600];
		sleep 15.5;
	};
};

_alarm = true;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Ausrauben - Bleibe in der N�he(1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
    while{true} do
    {
        sleep  8.55;
        _cP = _cP + 0.01;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["Es wird ausgeraubt ,bleib 15 Minuten in Reichweite(3m)(%1%2)...",round(_cP * 100),"%"];
        if(_cP >= 1) exitWith {};
        if(_robber distance _shop > 3) exitWith { };
        if!(alive _robber) exitWith {};
		if(life_istazed) exitWith {};
		if(_alarm) then
		{
			_Pos = position player; // by ehno: get player pos
			_marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
			"Marker200" setMarkerColor "ColorRed";
			"Marker200" setMarkerText "!ACHTUNG! Bankraub Zivile Personen entfernen !ACHTUNG!";
			"Marker200" setMarkerType "mil_warning";
		};        
    }; 
    if!(alive _robber) exitWith {		
		deleteMarker "Marker200";
		[1,"LakesideCity Bank: Der T�ter ist verstorben!"] remoteExec ["life_fnc_broadcast",west];
		_rip = false;
		5 cutText ["","PLAIN"];
	};
	if(life_istazed) exitwith {
		hint "Der Raub ist fehlgeschlagen du wurdest getazert!";
		5 cutText ["","PLAIN"];
		[1,"LakesideCity Bank: Der T�ter wurde erfolgreich gestellt!"] remoteExec ["life_fnc_broadcast",west];
		deleteMarker "Marker200"; // by ehno delete maker
		_rip = false;
	};	
    if(_robber distance _shop > 3) exitWith { 
		hint "Du bist weggerannt, fl�chte nun komplett bevor die Cops da sind!";
		5 cutText ["","PLAIN"];
		[1,"LakesideCity Bank: Der T�ter ist ohne Geld gefl�chtet!"] remoteExec ["life_fnc_broadcast",west];
		_rip = false;
		deleteMarker "Marker200";
	};
	if(vehicle player != _robber) exitWith {hint "Raus aus dem Fahrzeug, du Pussy!!"; };
    5 cutText ["","PLAIN"];
	deleteMarker "Marker200";
    titleText[format["Du hast %1 geklaut, sch�ttel die Cops ab!",[_kassa] call life_fnc_numberText],"PLAIN"];
    life_cash = life_cash + _kassa; 
    _rip = false;
    life_use_atm = false;
    life_use_atm = true; // Robber can not use the ATM at this point.
	
    if!(alive _robber) exitWith {};
	[1,format["NEWS - Lakeside City: %1 wurde gerade ausgeraubt. Bankinhalt: $%2", _shopName, [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",-2];
};
[_shop,_robber,_action,0] remoteExec ["TON_fnc_shopState",2];