#include "..\..\script_macros.hpp"
/*
	HACK THE BANK!
	Autor: stolzerrabe
	
	You are allowed to:
	Use, Share and modify
	You are not allowed to:
	Remove Author or say this script is yours in anyway!
	
*/

disableSerialization;
private["_lappi","_uip","_progress","_pgText","_cP","_upp","_chancetobreakfirewall","_chancetohackATM","_chanceWantedAdd","_RANDHACKMONEY","_xx"];
params [
    ["_robber",objNull,[objNull]]
];
if(life_BankLock == 1) exitWith {hint "Die Zentralbank Server ist nicht erreichbar! Es zur Zeit kein Hackangriff möglich";};
 _cops = (west countSide playableUnits);
if(isNil "HackOnceTimerBank") then {HackOnceTimerBank = 0;};
if(isNil "HackBankCam")	then {HackBankCam = 0;};
_lappi = nearestObjects[getPos player,["Land_Laptop_unfolded_F"],5] select 0;

// Restriktionen
if(_cops <= 2) exitWith{hint format["Es müssen min. 3 Polizisten Online sein!"]; };

if(!(_lappi isKindOf "Land_Laptop_unfolded_F")) exitWith {};
if(playerside != civilian) exitWith { hint "Du bist kein Zivilist"; };
if(life_action_inUse) exitWith {};
//if(HackOnceTimerBank == 1) exitWith { hint "Du kannst den Rechner nur einmal hacken"; };
if(life_ATMhacked == 1) exitWith { hint "Die Zentralbank wurde bereits gehackt! Es zur Zeit kein Hackangriff möglich"; };



// Zufallsverhalten
_chancetobreakfirewall = round(random 100);  // Chance die Firewall zu durchbrechen
_chancetohackATM = round(random 100);  // Chance die Wantedliste zu finden
_chanceWantedAdd = round(random 100); // Chance dass das Hacking zurückverfolgt wurde
_RANDHACKMONEY = [3500,30000] call life_fnc_randomRound; // GELD was erhackt wurde


//
//	Starte den Hackangriff
// 
HackOnceTimerBank = 1;


//// PROZESSBAR START /////////////////

	_upp = "Hacke Zentralbank...";
	5 cutRsc ["life_progress","PLAIN"];
	_uip = uiNameSpace getVariable "life_progress";
	_progress = _uip displayCtrl 38201;
	_pgText = _uip displayCtrl 38202;
	_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
	_progress progressSetPosition 0.01;
	_cP = 0.01;
	
	life_action_inUse = true;
	while{true} do
	{
		sleep 0.7;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
		if(_cP >= 1) exitWith {}; 
		if(player distance _lappi > 2) exitWith {};
        if!(alive _robber) exitWith {};
		if(life_istazed) exitWith {};
		if(vehicle player != _robber) exitWith {};
	};
	
	life_action_inUse = false;
	5 cutText ["","PLAIN"];
	if(player distance _lappi > 2) exitWith { HackOnceTimerBank = 0; hint "Du hast dich zu weit entfernt!"; };  
	if(!alive player) exitWith { HackOnceTimerBank = 0;};
	if(life_istazed) exitwith {HackOnceTimerBank = 0;hint "Der Raub ist fehlgeschlagen du wurdest getazert!";};
	if(vehicle player != _robber) exitWith {HackOnceTimerBank = 0;hint "Raus aus dem Fahrzeug, du Pussy!!";};
//// PROZESSBAR ENDE /////////////////

//
// Firewall durchbrechen
//
// Die Chance die Firewall zu durchbrechen liegt bei 50%
// Um die Chance geringer zu machen, bei "_chancetobreakfirewall > " zb 70 eintragen, um eine 30%tige Chance zu bekommen
//
		if(_chancetobreakfirewall > 50) then 
		{
			hint "Du hast die Firewall ausgeschaltet! Super! Du hast nun Zugriff auf das Computersystem der Zentralbank";
			HackBankCam = 1;
			sleep 3;
				
			//// PROZESSBAR START /////////////////
			_upp = "Installiere Banking Exploid...";
			5 cutRsc ["life_progress","PLAIN"];
			_uip = uiNameSpace getVariable "life_progress";
			_progress = _uip displayCtrl 38201;
			_pgText = _uip displayCtrl 38202;
			_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
			_progress progressSetPosition 0.01;
			_cP = 0.01;	
			
			life_action_inUse = true;
			while{true} do
			{
				sleep 0.7;
				_cP = _cP + 0.01;
				_progress progressSetPosition _cP;
				_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
				if(_cP >= 1) exitWith {}; 
				if(player distance _lappi > 2) exitWith {};
				if!(alive _robber) exitWith {};
				if(life_istazed) exitWith {};
				if(vehicle player != _robber) exitWith {};
			};
	
			life_action_inUse = false;
			5 cutText ["","PLAIN"];
			if(player distance _lappi > 2) exitWith { HackOnceTimerBank = 0; hint "Du hast dich zu weit entfernt!"; };  
			if(!alive player) exitWith { HackOnceTimerBank = 0;};
			if(life_istazed) exitwith {HackOnceTimerBank = 0;hint "Der Raub ist fehlgeschlagen du wurdest getazert!";};
			if(vehicle player != _robber) exitWith {HackOnceTimerBank = 0;hint "Raus aus dem Fahrzeug, du Pussy!!";};
	
			//// PROZESSBAR ENDE /////////////////
		
		
//
// SOBALD DIE FIREWALL ERFOLGREICH DURCHBROCHEN WURDE, IST EIN ERNEUTES HACKEN NICHT MEHR MÖGLICH FÜR DIESEN SPIELER!
//
// Exploiting erfolgreich
//
// Die Chance, das exploit zu installieren liegt bei 35%!
// Um die Chance geringer zu machen, bei "_chancetohackATM > " zb 80 eintragen, um eine 20%tige Chance zu bekommen
//
			life_action_inUse = true;
			if(_chancetohackATM > 65) then 
			{
				hint "Exploiting erfolgreich!";
				sleep 3;
				_xx = 20;
				for "_i" from 1 to 20 do
				{
					_xx = _xx - 1;
					hint format["Geld transfer gestartet ... %1 sek verbleibend",_xx];
					sleep 1;
					if(player distance _lappi > 2) exitWith { hint "Du hast dich zu weit entfernt! Das wars für heute!"; life_action_inUse = false; }; 
				};

				life_atmbank = life_atmbank + _RANDHACKMONEY;
				
				hint format["Du konntest dir %1 Euro auf dein Konto überweisen!",_RANDHACKMONEY];
				sleep 3;
				life_ATMhacked = 1;
				life_BankLock = 1;
				publicVariable "life_ATMhacked";
				publicVariable "life_BankLock";
				life_action_inUse = false;
				
				sleep 1;
				//
				//	COPS WERDEN ÜBER DAS HACKING BENACHRICHTIGT!
				//
				[0,format["Die Zentralbank wurde gehackt!!"]] remoteExec ["life_fnc_broadcast",west];
				sleep 1;
				// 35%tige Chance, erwischt zu werden!
				if(_chanceWantedAdd < 65) then {
				
					// ADDE den Hacker auf die Wantedliste
					// Benachrichtige die COPS, wer es war!
					// ID 1002 = Hacking (in die Wantedliste einbauen!!!!)
					if (life_HC_isActive) then {
						[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"1002"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
					} else {
						[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"1002"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
					};
					[0,format["Der Hacker hat Spuren hinterlassen! %1 hat in den Computer der Zentralbank eingegriffen!!",name player]] remoteExec ["life_fnc_broadcast",west];
				} else {
					// Der Hacker hat keine Spuren hinterlassen, und kommt nicht auf die Wantedliste! 
					// Glück gehabt! 
					[0,format["Der Hacker hat keine Spuren hinterlassen!"]] remoteExec ["life_fnc_broadcast",west];
				};
			}
				else
			{
			// Der Angreifende Computer, hat das Exploiting bemerkt, und unterbricht die Verbindung
			// Das wars für den Hacker!
						HackOnceTimerBank = 0;
						hint "Der angegriffene Computer hat die Verbindung abgebrochen!";
						sleep 2;
						if(_chanceWantedAdd < 65) then {
						// ADDE den Hacker auf die Wantedliste
						// Benachrichtige die COPS, wer es war!
						// ID 1003 = Versuchtes Hacking  (in die Wantedliste einbauen!!!!)
					if (life_HC_isActive) then {
						[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"1003"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
					} else {
						[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"1003"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
					};
						[0,format["%1 hat versucht den ZentralbankComputer zu hacken!",name player]] remoteExec ["life_fnc_broadcast",west];
						hint "Du hast zuviele Spuren hinterlassen! Das LVPD weiss wer du bist!";
						} else {
							// Der Hacker hat keine Spuren hinterlassen, und kommt nicht auf die Wantedliste! 
							// Glück gehabt! 						
							[0,format["Der Hacker hat keine Spuren hinterlassen!"]] remoteExec ["life_fnc_broadcast",west];
						};
				};
		}
			else
		{
		//
		// Firewall konnte nicht durchbrochen werden!
		//
			
			HackOnceTimerBank = 0;		
			hint "Du konntest die Firewall nicht durchbrechen";
					sleep 2;
					if(_chanceWantedAdd < 65) then {
					// ADDE den Hacker auf die Wantedliste
					// Benachrichtige die COPS, wer es war!
					// ID 1003 = Versuchtes Hacking  (in die Wantedliste einbauen!!!!)					
					if (life_HC_isActive) then {
						[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"1003"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
					} else {
						[getPlayerUID _robber,_robber getVariable ["realname",name _robber],"1003"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
					};
					[0,format["%1 hat versucht den ZentralbankComputer zu hacken!",name player]] remoteExec ["life_fnc_broadcast",west];
					hint "Du hast zuviele Spuren hinterlassen! Das LVPD weiss wer du bist!";
					} else {
						hint "Du hast keine Spuren hinterlassen!";
					};
		};
life_action_inUse = false;