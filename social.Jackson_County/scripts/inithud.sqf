// command to open HUD:  "cutRsc ["nlhud", "PLAIN"];"
 
while {true} do {
sleep 0.01;
_playerhealth = getdammage player;
_playerstamina = getfatigue player;
_playerhunger = life_hunger;
_playerthirst = life_thirst;
 
_healthcolor = "#00FF4C";
_hungercolor = "#00FF4C";
_thirstcolor = "#00FF4C";
_staminacolor = "#00FF4C";
_magcolor = "#FFFFFF";
_ammocolor = "#FFFFFF";
_hungertext = parseText format[""];
_thirsttext = parseText format[""];
_healthtext = parseText format[""];
_zeroingtext = parseText format[""];
_staminatext = parseText format[""];
_ammotext = parseText format[""];
_amountmagtext = parseText format[""];
_weaponname = parseText format[""];
_hudinfo = weaponState player; // ["arifle_MX_ACO_pointer_F","arifle_MX_ACO_pointer_F","Single","30Rnd_65x39_caseless_mag",30]
_curweapon = _hudinfo select 0;
_curmagazine = _hudinfo select 4;
_className = _hudinfo select 3;
_gunmodeold = _hudinfo select 2;
_gunmode = "";
if ((_gunmodeold == "single") or (_gunmodeold == "FullAuto")) then {
_gunmode = _gunmodeold;
if (_gunmodeold == "single") then {_gunmode = "Single"};
if (_gunmodeold == "FullAuto") then {_gunmode = "Automatic"};
};
 
_magforpic = "";
if (_curweapon != "") then {
_magforpic = (getArray (configFile >> "CfgWeapons" >> _curweapon >> "magazines")) select 0;
};
_picture = "";
_picture = getText (configFile >> "CfgMagazines" >> _magforpic >> "picture");
_nameofPlayer = name player;
_noweaponsarray = ["","","","",0];
_nothing = _noweaponsarray select 0;
if (_nothing == _curweapon) then {
} else {
 
_zeroing = currentZeroing player;
 
_magazineClass = currentMagazine player;
_weaponname = getText (configFile >> "CfgWeapons" >> _curweapon >> "displayName");
_maxammo = getNumber(configFile >> "CfgMagazines" >> _magazineClass >> "count") ;
_prcentammo = 0;
if (_curmagazine == 0) then {
_prcentammo = 0;
} else {
_prcentammo = (_curmagazine / _maxammo) * 100;
};
 
_amountmag = {_x == (currentmagazine player)} count magazines player;
if (_amountmag == 0) then {
        _amountmagtext = parseText format["Keine Magazine mehr"];
                _magcolor = "#FFFFFF";
    } else {
    if (_amountmag == 1) then {
        _amountmagtext = parseText format["Ich habe noch %1 Magazine.", _amountmag];
                _magcolor = "#FFFFFF";
    } else {
    if (_amountmag > 1) then {
        _amountmagtext = parseText format["Ich habe noch %1 Magazine.", _amountmag];
                _magcolor = "#FFFFFF";
};};};
       
if (_prcentammo == 0) then {
        _ammotext = parseText format["Ich habe keine Muniton mehr."];
                _ammocolor = "#FFFFFF";
    } else {
    if (_prcentammo < 20) then {
        _ammotext = parseText format["Munition fast verbraucht."];
                _ammocolor = "#FFFFFF";
    } else {
    if (_prcentammo < 40) then {
        _ammotext = parseText format["Munitions Zahl prüfen."];
                _ammocolor = "#FFFFFF";
    } else {
    if (_prcentammo < 60) then {
        _ammotext = parseText format["Das Magazin ist halb leer."];
                _ammocolor = "#FFFFFF";
    } else {
    if (_prcentammo < 80) then {
        _ammotext = parseText format["Ich habe genug Munition."];
                _ammocolor = "#FFFFFF";
    } else {
    if (_prcentammo < 100) then {
        _ammotext = parseText format["Ich habe noch genug."];
                _ammocolor = "#FFFFFF";
    } else {
    if (_prcentammo == 100) then {
        _ammotext = parseText format["Magazin ist voll."];
                _ammocolor = "#FFFFFF";
};};};};};};};
 
if (_zeroing == 0) then {
                _zeroingtext = parseText format[""];
        } else {
                _zeroingtext = parseText format["Zeroing: %1M", _zeroing];
};
 
 
};
 
if (_playerhunger > 90) then {
                _hungercolor = "#00FF4C";
                _hungertext = parseText format["Ich bin nicht hungrig"];
        } else {
        if (_playerhunger > 80) then {
                _hungercolor = "#1AFF00";
                _hungertext = parseText format["Überhaupt nicht hungrig"];
        } else {
        if (_playerhunger > 70) then {
                _hungercolor = "#7BFF00";
                _hungertext = parseText format["Ein Snack wäre toll"];
        } else {
        if (_playerhunger > 60) then {
                _hungercolor = "#BFFF00";
                _hungertext = parseText format["Könnte langsam was Vertragen"];
        } else {
        if (_playerhunger > 50) then {
                _hungercolor = "#EAFF00";
                _hungertext = parseText format["Mein Bauch ist leer"];
        } else {
        if (_playerhunger > 40) then {
                _hungercolor = "#FFBF00";
                _hungertext = parseText format["Ich sollte bald essen"];
        } else {
        if (_playerhunger > 30) then {
                _hungercolor = "#FF8400";
                _hungertext = parseText format["Mein Magen Knurrt"];
        } else {
        if (_playerhunger > 20) then {
                _hungercolor = "#FF4000";
                _hungertext = parseText format["Ich muss jetzt Essen"];
        } else {
        if (_playerhunger > 10) then {
                _hungercolor = "#FF0000";
                _hungertext = parseText format["Mir ist flau"];
        } else {
        if (_playerhunger == 0) then {
                _hungercolor = "#590000";
                _hungertext = parseText format["Tot</t>"];
};};};};};};};};};};
 
if (_playerthirst > 80) then {
                _thirstcolor = "#1AFF00";
                _thirsttext = parseText format["Nicht Durstig"];
        } else {
        if (_playerthirst > 70) then {
                _thirstcolor = "#7BFF00";
                _thirsttext = parseText format["Ein Glas wasser wäre toll"];
        } else {
        if (_playerthirst > 60) then {
                _thirstcolor = "#BFFF00";
                _thirsttext = parseText format["Brauche bald was zu Trinken"];
        } else {
        if (_playerthirst > 50) then {
                _thirstcolor = "#EAFF00";
                _thirsttext = parseText format["Mein Hals ist ein wenig Trocken"];
        } else {
        if (_playerthirst > 40) then {
                _thirstcolor = "#FFBF00";
                _thirsttext = parseText format["Ich sollte bald trinken"];
        } else {
        if (_playerthirst > 30) then {
                _thirstcolor = "#FF8400";
                _thirsttext = parseText format["Mein Hals ist trocken"];
        } else {
        if (_playerthirst > 20) then {
                _thirstcolor = "#FF4000";
                _thirsttext = parseText format["Trink bitte was"];
        } else {
        if (_playerthirst > 10) then {
                _thirstcolor = "#FF0000";
                _thirsttext = parseText format["Ich sollte jetzt trinken"];
        } else {
        if (_playerthirst == 0) then {
                _thirstcolor = "#590000";
                _thirsttext = parseText format["Tot</t>"];
};};};};};};};};};
 
if (_playerstamina < 0.10) then {
                _staminacolor = "#00FF4C";
                _staminatext = parseText format["Voller Energie"];
        } else {
        if (_playerstamina < 0.20) then {
                _staminacolor = "#1AFF00";
                _staminatext = parseText format["Kann für immer Laufen"];
        } else {
        if (_playerstamina < 0.30) then {
                _staminacolor = "#BFFF00";
                _staminatext = parseText format["Werde langsam Müde"];
        } else {
        if (_playerstamina < 0.40) then {
                _staminacolor = "#EAFF00";
                _staminatext = parseText format["Ich brauche eine Pause"];
        } else {
        if (_playerstamina < 0.50) then {
                _staminacolor = "#FF8400";
                _staminatext = parseText format["Ich kann nun wirklich eine Pause brauchen"];
        } else {
        if (_playerstamina < 0.60) then {
                _staminacolor = "#FF4000";
                _staminatext = parseText format["Ich Kann nicht mehr"];
        } else {
        if (_playerstamina > 0.59) then {
                _staminacolor = "#590000";
                _staminatext = parseText format["ich bin Erschöpft"];
};};};};};};};
 
 
_playerstatustext = parseText format ["<t font='EtelkaNarrowMediumPro' size='1' align='right'><t color='%1'>%2</t> | <t color='%3'>%4</t> | <t color='%5'>%6</t> | <t color='%7'>%8</t></t>", _healthcolor, _healthtext, _staminacolor, _staminatext, _hungercolor, _hungertext, _thirstcolor, _thirsttext];
_playernametext = parseText format ["<t font='EtelkaNarrowMediumPro' color='#FFFFFF' size='1.3' align='right'>%1</t>", _nameofplayer];
// _zeroinghudtext = parseText format ["<t font='EtelkaNarrowMediumPro' color='#949494' size='1' align='left'>%1</t>", _zeroingtext];
_ammohudtext = parseText format ["<t font='EtelkaNarrowMediumPro' color='%1' size='0.9' align='left'>%2</t>",_ammocolor, _ammotext];
_maghudtext = parseText format ["<t font='EtelkaNarrowMediumPro' color='%1' size='1' align='left'>%2</t>", _magcolor, _amountmagtext];
_gunmodetext = parseText format ["<t font='EtelkaNarrowMediumPro' color='#FFFFFF' size='1' align='center'>%1</t>", _gunmode];
 
_weapontexthud = parseText format ["<t font='EtelkaNarrowMediumPro' color='#FFFFFF' size='1' align='left'>%1</t>", _weaponname];
((uiNamespace getVariable "nlhud") displayCtrl 41652) ctrlSetStructuredText _playerstatustext;
((uiNamespace getVariable "nlhud") displayCtrl 16418) ctrlSetText _picture;
((uiNamespace getVariable "nlhud") displayCtrl 62362) ctrlSetStructuredText _playernametext;
// ((uiNamespace getVariable "nlhud") displayCtrl 16423) ctrlSetStructuredText _zeroinghudtext;
((uiNamespace getVariable "nlhud") displayCtrl 16422) ctrlSetStructuredText _ammohudtext;
((uiNamespace getVariable "nlhud") displayCtrl 16419) ctrlSetStructuredText _gunmodetext;
((uiNamespace getVariable "nlhud") displayCtrl 16421) ctrlSetStructuredText _maghudtext;
((uiNamespace getVariable "nlhud") displayCtrl 16420) ctrlSetStructuredText _weapontexthud;
 
};