/*
    Sending robbery-request to server 
*/
params[
	["_shop",ObjNull,[ObjNull]],
	["_robber",ObjNull,[ObjNull]],
	"_action"
];

if(isNull _shop OR isNull _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hint "HaHa, du machst mir keine Angst , ab raus hier du Lappen !!" };
if(playersNumber west < 8) exitWith { hint "Das Zeitschloss des Tresors ist derzeit noch aktiv!"};
if(side _robber != civilian) exitWith { hint "Korruptes Schwein verschwinde!" };
if (vehicle player != _robber) exitWith { hint "Ich sehe ein Auto aber kein Loch in der Wand hmmm...Eh NEIN!" };
if(_robber distance _shop > 3) exitWith { hint "Wie lange Arme hast du denn? Du bist zu weit weg!" };
if(!([false,"geldkoffer",1] call life_fnc_handleInv)) exitWith {hint "Wie bekommst du das geld nun weg? Kauf dir einen Geldkoffer!"};
[_shop,_robber,_action] remoteExec ["TON_fnc_LosDShops",2];