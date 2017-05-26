/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "static_dead" && !(cursorObject getVariable ["robbed",false]) ']];
		  //Ausweis
		life_actions = life_actions + [player addAction["<t color='#FF00FF'>ID Card Zeigen</t>",life_fnc_Lizenzzeigen,"",1,false,true,"",'playerSide == civilian && !isNull cursorTarget && player distance cursorTarget < 2.5 && cursorTarget isKindOf "Man" && alive cursortarget ']];
		//Care Essen
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Essen</t>",life_fnc_Essen,"",1,false,true,"",' !isNull cursorTarget && (typeOf cursorTarget) == "Land_Pod_Heli_Transport_04_medevac_F" && (player distance cursorTarget) < 5 ']];
		//Care Trinken
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Trinken</t>",life_fnc_Trinken,"",1,false,true,"",' !isNull cursorTarget && (typeOf cursorTarget) == "Land_Pod_Heli_Transport_04_medevac_F" && (player distance cursorTarget) < 5 ']];
		//Care Heilung
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Heilen</t>",life_fnc_Heilung,"",1,false,true,"",' !isNull cursorTarget && (typeOf cursorTarget) == "Land_Pod_Heli_Transport_04_medevac_F" && (player distance cursorTarget) < 5 ']];
		//Care Kleiderkammer
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Kleiderkammer</t>",life_fnc_Kleiderkammer,"",1,false,true,"",' !isNull cursorTarget && (typeOf cursorTarget) == "Land_Pod_Heli_Transport_04_medevac_F" && (player distance cursorTarget) < 5 ']];
		//Hinsetzen
		life_actions = life_actions + [player addAction["Sitdown",life_fnc_sitDown,cursorTarget,10,false,false,"",' !isNull cursorTarget && (player distance cursorTarget) < 3 && (cursorTarget isKindOf "Land_CampingChair_V1_F" || cursorTarget isKindOf "Land_ChairWood_F" || cursorTarget isKindOf "Land_ChairPlastic_F")']];
		//Aufstehen
		life_actions = life_actions + [player addAction["Standup", life_fnc_sitDown,cursorTarget,10,false,false,"",'life_sitting']];		
	};
	
	case west:
	{
        //seize Objects
        life_actions = life_actions + [player addAction["Beschlagnahmen",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'count(nearestObjects [player,["weaponholder"],3])>0']];
		//Ausweis 
		life_actions = life_actions + [player addAction["<t color='#FF00FF'>Polizeimarke Zeigen</t>",life_fnc_Lizenzzeigen,"",1,false,true,"",' playerSide == west && !isNull cursorTarget && player distance cursorTarget < 2.5 && cursorTarget isKindOf "Man" && alive cursortarget ']];
		//Hinsetzen
		life_actions = life_actions + [player addAction["Sitdown",life_fnc_sitDown,cursorTarget,10,false,false,"",' !isNull cursorTarget && (player distance cursorTarget) < 3 && (cursorTarget isKindOf "Land_CampingChair_V1_F" || cursorTarget isKindOf "Land_ChairWood_F" || cursorTarget isKindOf "Land_ChairPlastic_F")']];
		//Aufstehen
		life_actions = life_actions + [player addAction["Standup", life_fnc_sitDown,cursorTarget,10,false,false,"",'life_sitting']];
	};
	
	case independent:
	{
        //Ausweis  
		life_actions = life_actions + [player addAction["<t color='#FF00FF'>Dienstausweis zeigen</t>",life_fnc_Lizenzzeigen,"",1,false,true,"",' playerSide == independent && !isNull cursorTarget && player distance cursorTarget < 2.5 && cursorTarget isKindOf "Man" && alive cursortarget ']];
		life_actions = life_actions + [player addAction[localize "STR_ISTR_Supportcontainer_Pack",life_fnc_packupSupportContainer,"",0,false,false,"",' _Supportcon = nearestObjects[getPos player,["Land_Pod_Heli_Transport_04_medevac_F"],8] select 0; !isNil "_Supportcon" && !isNil {(_Supportcon getVariable "item")}']];
		//Hinsetzen
		life_actions = life_actions + [player addAction["Sitdown",life_fnc_sitDown,cursorTarget,10,false,false,"",' !isNull cursorTarget && (player distance cursorTarget) < 3 && (cursorTarget isKindOf "Land_CampingChair_V1_F" || cursorTarget isKindOf "Land_ChairWood_F" || cursorTarget isKindOf "Land_ChairPlastic_F")']];
		//Aufstehen
		life_actions = life_actions + [player addAction["Standup", life_fnc_sitDown,cursorTarget,10,false,false,"",'life_sitting']];
	};
	
	case east:
	{
        //Ausweis  
		life_actions = life_actions + [player addAction["<t color='#FF00FF'>Dienstausweis zeigen</t>",life_fnc_Lizenzzeigen,"",1,false,true,"",' playerSide == east && !isNull cursorTarget && player distance cursorTarget < 2.5 && cursorTarget isKindOf "Man" && alive cursortarget ']];
		//Hinsetzen
		life_actions = life_actions + [player addAction["Sitdown",life_fnc_sitDown,cursorTarget,10,false,false,"",' !isNull cursorTarget && (player distance cursorTarget) < 3 && (cursorTarget isKindOf "Land_CampingChair_V1_F" || cursorTarget isKindOf "Land_ChairWood_F" || cursorTarget isKindOf "Land_ChairPlastic_F")']];
		//Aufstehen
		life_actions = life_actions + [player addAction["Standup", life_fnc_sitDown,cursorTarget,10,false,false,"",'life_sitting']];
	};
};
