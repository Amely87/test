/*
	File: welcome.sqf
	Author: ZedBuster
        Link: opendayz.net/threads/dayz-welcome-message-credits-style.13071/
	Description:
	Creates an intro on the bottom-right hand corner of the screen.
*/
_imag  = "<img image='textures\logos.paa' size='10' align='center'/>"; _text = format["<br/><t color='#C5B6B5' size='1.8' align='center'>Willkommen %1 auf Social-Lakeside!</t><br/><br/>",ProfileName];  
hint parseText (_imag + _text);

_onScreenTime = 3;

//if(life_firstSpawn) then {

playsound "civintro";
//}; 
sleep 2; //Wait in seconds before the credits start after player is in-game
_role1 = "Willkommen auf";
_role1names = ["social-lakeside"];       //Add your texts here!
_role2 = "Teamspeak";
_role2names = ["ts3.social-lakeside.de"];
_role3 = "Regeln";
_role3names = ["Befolge die Regeln im Forum"];
_role4 = "OORP!";
_role4names = ["Verlasse niemals deine Rolle! Wenn du ein Problem hast? Reporte es."];
_role5 = "~ Admins ~";
_role5names = ["Beobachten dich Immer :)"];
_role6 = "Erinnerung";
_role6names = ["das ist eine Alpha, es gibt Bugs."];
_role7 = "Erinnerung 2";
_role7names = ["Hab Spaß, entspann dich und befolge die Regeln"];
_role8 = "ACHTUNG";
_role8names = ["Denkt bitte daran zu Syncen!"];
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.60' color='#f2cb0b' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [

//The list below should have exactly the same amount of roles as the list above

[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names],
[_role7, _role7names],
[_role8, _role8names]
];
