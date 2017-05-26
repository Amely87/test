if(isServer)exitWith{};
private ["_target", "_message","_rang","_rankA","_coplevel","_mediclevel","_id","_schutz","_anwalt","_richter","_head","_admin"];
if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) exitWith {};
if(!(_ziel isKindOf "Man")) exitWith {};
if(!(alive _ziel)) exitWith {};

	switch(playerSide)do{
		case west:{
			switch (call life_coplevel) do{
				case 1: { _rang = "<img image='el_cards\images\ausweiss\cop\1.jpg' size='8.5'/>";};
				case 2: { _rang = "<img image='el_cards\images\ausweiss\cop\2.jpg' size='8.5'/>";};
				case 3: { _rang = "<img image='el_cards\images\ausweiss\cop\3.jpg' size='8.5'/>";};
				case 4: { _rang = "<img image='el_cards\images\ausweiss\cop\4.jpg' size='8.5'/>";};
				case 5: { _rang = "<img image='el_cards\images\ausweiss\cop\5.jpg' size='8.5'/>";};
				case 6: { _rang = "<img image='el_cards\images\ausweiss\cop\6.jpg' size='8.5'/>";};
				case 7: { _rang = "<img image='el_cards\images\ausweiss\cop\7.jpg' size='8.5'/>";};
				case 8: { _rang = "<img image='el_cards\images\ausweiss\cop\8.jpg' size='8.5'/>";};
				case 9: { _rang = "<img image='el_cards\images\ausweiss\cop\9.jpg' size='8.5'/>";};
				case 10: { _rang = "<img image='el_cards\images\ausweiss\cop\10.jpg' size='8.5'/>";};
				case 11: { _rang = "<img image='el_cards\images\ausweiss\cop\11.jpg' size='8.5'/>";};
				case 12: { _rang = "<img image='el_cards\images\ausweiss\cop\12.jpg' size='8.5'/>";};
				case 13: { _rang = "<img image='el_cards\images\ausweiss\cop\13.jpg' size='8.5'/>";};	
				default { _rang =  "Error";};
			};
			
			_message = format["<t size='1.25'>%1</t><br/><br/>%2<br/>", name player, _rang];
			[_message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
		};

		case independent:{
			switch (call life_mediclevel) do{
				case 1: { _rang = "<img image='el_cards\images\ausweiss\med\1.jpg' size='8.5'/>";};
				case 2: { _rang = "<img image='el_cards\images\ausweiss\med\2.jpg' size='8.5'/>";};
				case 3: { _rang = "<img image='el_cards\images\ausweiss\med\3.jpg' size='8.5'/>";};
				case 4: { _rang = "<img image='el_cards\images\ausweiss\med\4.jpg' size='8.5'/>";};
				case 5: { _rang = "<img image='el_cards\images\ausweiss\med\5.jpg' size='8.5'/>";}; 
				case 6: { _rang = "<img image='el_cards\images\ausweiss\med\6.jpg' size='8.5'/>";};
				case 7: { _rang = "<img image='el_cards\images\ausweiss\med\7.jpg' size='8.5'/>";};
				case 8: { _rang = "<img image='el_cards\images\ausweiss\med\8.jpg' size='8.5'/>";};
				case 9: { _rang = "<img image='el_cards\images\ausweiss\med\9.jpg' size='8.5'/>";};
				default { _rang =  "Error";};
			};

			_message = format["<t size='1.25'>%1</t><br/><br/>%2<br/>", name player, _rang];
			[_message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
		};

		case east:{
			switch (playerSide == east)then{
				_head = face player;
				switch (_head) do{
					case "AfricanHead_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AfricanHead_01.paa' size='8'/>";};
					case "AfricanHead_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AfricanHead_02.paa' size='8'/>";};
					case "AfricanHead_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AfricanHead_03.paa' size='8'/>";};
					case "AsianHead_A3_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AsianHead_A3_01.paa' size='8'/>";};
					case "AsianHead_A3_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AsianHead_A3_02.paa' size='8'/>";};
					case "AsianHead_A3_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AsianHead_A3_03.paa' size='8'/>";};
					case "Cheung": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Cheung.paa' size='8'/>";};
					case "COREV_AsianHead_A3_04": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_04.paa' size='8'/>";};
					case "COREV_AsianHead_A3_05": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_05.paa' size='8'/>";};
					case "COREV_AsianHead_A3_06": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_06.paa' size='8'/>";};
					case "COREV_AsianHead_A3_07": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_07.paa' size='8'/>";};
					case "COREV_AsianHead_A3_08": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_08.paa' size='8'/>";};
					case "COREV_AsianHead_A3_09": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_09.paa' size='8'/>";};
					case "GreekHead_A3_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_01.paa' size='8'/>";};
					case "GreekHead_A3_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_02.paa' size='8'/>";};
					case "GreekHead_A3_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_03.paa' size='8'/>";};
					case "GreekHead_A3_04": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_04.paa' size='8'/>";};
					case "GreekHead_A3_05": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_05.paa' size='8'/>";};
					case "GreekHead_A3_06": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_06.paa' size='8'/>";};
					case "GreekHead_A3_07": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_07.paa' size='8'/>";};
					case "GreekHead_A3_08": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_08.paa' size='8'/>";};
					case "GreekHead_A3_09": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_09.paa' size='8'/>";};
					case "GreekHead_A3_10_a": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_10_a.paa' size='8'/>";};
					case "GreekHead_A3_10_l": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_10_l.paa' size='8'/>";};
					case "GreekHead_A3_10_sa": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_10_sa.paa' size='8'/>";};
					case "ice123_female_bare": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_ice123_female_bare.paa' size='8'/>";};
					case "ice123_female_hair": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_ice123_female_hair.paa' size='8'/>";};
					case "Mason": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason.paa' size='8'/>";};
					case "Mason_camo": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_camo.paa' size='8'/>";};
					case "Mason_Rigged": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_Rigged.paa' size='8'/>";};
					case "Mason_scars": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_scars.paa' size='8'/>";};
					case "Mason_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_v2.paa' size='8'/>";};
					case "Oakes": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Oakes.paa' size='8'/>";};
					case "Oakes_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Oakes_v2.paa' size='8'/>";};
					case "PersianHead_A3_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_01.paa' size='8'/>";};
					case "PersianHead_A3_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_02.paa' size='8'/>";};
					case "PersianHead_A3_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_03.paa' size='8'/>";};
					case "PersianHead_A3_04_a": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_04_a.paa' size='8'/>";};
					case "PersianHead_A3_04_l": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_04_l.paa' size='8'/>";};
					case "PersianHead_A3_04_sa": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_04_sa.paa' size='8'/>";};
					case "Quereshi": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Quereshi.paa' size='8'/>";};
					case "Quereshi_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Quereshi_v2.paa' size='8'/>";};
					case "Sean_Connery": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Sean_Connery.paa' size='8'/>";};
					case "Smith": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Smith.paa' size='8'/>";};
					case "Smith_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Smith_v2.paa' size='8'/>";};
					case "Tyler": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Tyler.paa' size='8'/>";};
					case "Tyler_scars": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Tyler_scars.paa' size='8'/>";};
					case "WhiteHead_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_01.paa' size='8'/>";};
					case "WhiteHead_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_02.paa' size='8'/>";};
					case "WhiteHead_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_03.paa' size='8'/>";};
					case "WhiteHead_04": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_04.paa' size='8'/>";};
					case "WhiteHead_05": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_05.paa' size='8'/>";};
					case "WhiteHead_06": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_06.paa' size='8'/>";};
					case "WhiteHead_07": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_07.paa' size='8'/>";};
					case "WhiteHead_08": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_08.paa' size='8'/>";};
					case "WhiteHead_09": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_09.paa' size='8'/>";};
					case "WhiteHead_10": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_10.paa' size='8'/>";};
					case "WhiteHead_11 ": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_11.paa' size='8'/>";};
					case "WhiteHead_12": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_12.paa' size='8'/>";};
					case "WhiteHead_13": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_13.paa' size='8'/>";};
					case "WhiteHead_14": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_14.paa' size='8'/>";};
					case "WhiteHead_15": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_15.paa' size='8'/>";};
					case "WhiteHead_16": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_16.paa' size='8'/>";};
					case "WhiteHead_17": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_17.paa' size='8'/>";};
					case "WhiteHead_18": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_18.paa' size='8'/>";};
					case "WhiteHead_19": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_19.paa' size='8'/>";};
					case "WhiteHead_20": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_20.paa' size='8'/>";};
					case "WhiteHead_21": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_21.paa' size='8'/>";};
					case "WhiteHead_22_a": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_a.paa' size='8'/>";};
					case "WhiteHead_22_l": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_l.paa' size='8'/>";};
					case "WhiteHead_22_sa": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_sa.paa' size='8'/>";};
					default {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_sa.paa' size='8'/>";};
				};

			_message = format["<t size='1.25'>%1</t><br/><br/>%2<br/>",name player,_id];
			[_message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
		};
	};
	
	case civilian:{
		if(playerSide == civilian)then{
				_head = face player;
				switch (_head) do{
					case "AfricanHead_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AfricanHead_01.paa' size='8'/>";};
					case "AfricanHead_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AfricanHead_02.paa' size='8'/>";};
					case "AfricanHead_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AfricanHead_03.paa' size='8'/>";};
					case "AsianHead_A3_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AsianHead_A3_01.paa' size='8'/>";};
					case "AsianHead_A3_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AsianHead_A3_02.paa' size='8'/>";};
					case "AsianHead_A3_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_AsianHead_A3_03.paa' size='8'/>";};
					case "Cheung": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Cheung.paa' size='8'/>";};
					case "COREV_AsianHead_A3_04": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_04.paa' size='8'/>";};
					case "COREV_AsianHead_A3_05": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_05.paa' size='8'/>";};
					case "COREV_AsianHead_A3_06": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_06.paa' size='8'/>";};
					case "COREV_AsianHead_A3_07": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_07.paa' size='8'/>";};
					case "COREV_AsianHead_A3_08": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_08.paa' size='8'/>";};
					case "COREV_AsianHead_A3_09": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_COREV_AsianHead_A3_09.paa' size='8'/>";};
					case "GreekHead_A3_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_01.paa' size='8'/>";};
					case "GreekHead_A3_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_02.paa' size='8'/>";};
					case "GreekHead_A3_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_03.paa' size='8'/>";};
					case "GreekHead_A3_04": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_04.paa' size='8'/>";};
					case "GreekHead_A3_05": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_05.paa' size='8'/>";};
					case "GreekHead_A3_06": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_06.paa' size='8'/>";};
					case "GreekHead_A3_07": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_07.paa' size='8'/>";};
					case "GreekHead_A3_08": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_08.paa' size='8'/>";};
					case "GreekHead_A3_09": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_09.paa' size='8'/>";};
					case "GreekHead_A3_10_a": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_10_a.paa' size='8'/>";};
					case "GreekHead_A3_10_l": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_10_l.paa' size='8'/>";};
					case "GreekHead_A3_10_sa": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_GreekHead_A3_10_sa.paa' size='8'/>";};
					case "ice123_female_bare": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_ice123_female_bare.paa' size='8'/>";};
					case "ice123_female_hair": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_ice123_female_hair.paa' size='8'/>";};
					case "Mason": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason.paa' size='8'/>";};
					case "Mason_camo": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_camo.paa' size='8'/>";};
					case "Mason_Rigged": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_Rigged.paa' size='8'/>";};
					case "Mason_scars": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_scars.paa' size='8'/>";};
					case "Mason_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Mason_v2.paa' size='8'/>";};
					case "Oakes": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Oakes.paa' size='8'/>";};
					case "Oakes_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Oakes_v2.paa' size='8'/>";};
					case "PersianHead_A3_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_01.paa' size='8'/>";};
					case "PersianHead_A3_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_02.paa' size='8'/>";};
					case "PersianHead_A3_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_03.paa' size='8'/>";};
					case "PersianHead_A3_04_a": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_04_a.paa' size='8'/>";};
					case "PersianHead_A3_04_l": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_04_l.paa' size='8'/>";};
					case "PersianHead_A3_04_sa": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_PersianHead_A3_04_sa.paa' size='8'/>";};
					case "Quereshi": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Quereshi.paa' size='8'/>";};
					case "Quereshi_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Quereshi_v2.paa' size='8'/>";};
					case "Sean_Connery": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Sean_Connery.paa' size='8'/>";};
					case "Smith": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Smith.paa' size='8'/>";};
					case "Smith_v2": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Smith_v2.paa' size='8'/>";};
					case "Tyler": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Tyler.paa' size='8'/>";};
					case "Tyler_scars": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_Tyler_scars.paa' size='8'/>";};
					case "WhiteHead_01": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_01.paa' size='8'/>";};
					case "WhiteHead_02": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_02.paa' size='8'/>";};
					case "WhiteHead_03": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_03.paa' size='8'/>";};
					case "WhiteHead_04": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_04.paa' size='8'/>";};
					case "WhiteHead_05": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_05.paa' size='8'/>";};
					case "WhiteHead_06": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_06.paa' size='8'/>";};
					case "WhiteHead_07": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_07.paa' size='8'/>";};
					case "WhiteHead_08": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_08.paa' size='8'/>";};
					case "WhiteHead_09": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_09.paa' size='8'/>";};
					case "WhiteHead_10": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_10.paa' size='8'/>";};
					case "WhiteHead_11 ": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_11.paa' size='8'/>";};
					case "WhiteHead_12": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_12.paa' size='8'/>";};
					case "WhiteHead_13": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_13.paa' size='8'/>";};
					case "WhiteHead_14": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_14.paa' size='8'/>";};
					case "WhiteHead_15": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_15.paa' size='8'/>";};
					case "WhiteHead_16": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_16.paa' size='8'/>";};
					case "WhiteHead_17": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_17.paa' size='8'/>";};
					case "WhiteHead_18": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_18.paa' size='8'/>";};
					case "WhiteHead_19": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_19.paa' size='8'/>";};
					case "WhiteHead_20": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_20.paa' size='8'/>";};
					case "WhiteHead_21": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_21.paa' size='8'/>";};
					case "WhiteHead_22_a": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_a.paa' size='8'/>";};
					case "WhiteHead_22_l": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_l.paa' size='8'/>";};
					case "WhiteHead_22_sa": {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_sa.paa' size='8'/>";};
					default {_id =  "<img image='el_cards\images\ausweiss\civ\askin\id_WhiteHead_22_sa.paa' size='8'/>";};
				};
				
			/*_schutz = if(license_justiz_schutz) then {"<img image='el_cards\images\ausweiss\civ\schutz.paa' size='8'/>";} else {"<br/>"};
			_anwalt = if(license_justiz_anwalt) then {"<img image='el_cards\images\ausweiss\civ\anwalt.paa' size='8'/>";} else {"<br/>"};
			_richter = if(license_justiz_richter) then {"<img image='el_cards\images\ausweiss\civ\richter.paa' size='8'/>";} else {"<br/>"};*/

			_message = format["<t size='1.25'>%1</t><br/><br/>%2<br/>",name player,_id];
			[_message] remoteExec ["life_fnc_Lizenzsehen",_ziel];
		};
	};
};