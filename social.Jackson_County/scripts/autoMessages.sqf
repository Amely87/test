/* 
 File: fn_autoMessages.sqf 
 Author: BenjaminSansNom 
 Edited by: blackfisch for Native-Network.net
 Description: 
 Auto messages in game every X minutes 
*/ 
0 spawn { 
 // Add a line in this array to add a message 
 _messages = [ 
 "Besucht uns im Forum unter:<br/> <t color='#e32828' size='1.5'>social-lakeside.de</t>", 
 "Meldet Bugs bitte im Ticketsystem im Forum<br/><t color='#e32828' size='1.5'>social-lakeside.de</t>",
 "Server startet alle 6 Stunden neu (0Uhr, 6Uhr, 12Uhr, 18Uhr)<br/><t color='#e32828' size='1.5'>social-lakeside.de</t>"
 ]; 
 _refreshTime = 25; // Time between each message (in minutes) 
 _i = 0;
 for "_u" from 0 to 1 step 0 do { 
 _count = count _messages; 
 _message = _messages select _i; 
 hint parseText format["<t color='#ffffff' size='2'>Social</t><t color='#c45454' size='2'>Lakeside</t><br/><br/><img shadown='false' size='6' image='textures\logos.paa'/><br/><br/>%1", _message]; 
 uisleep (_refreshTime*60); 
 if (_i == (_count - 1)) then { 
 _i = 0; 
 } else { 
 _i = _i + 1; 
 }; 
 }; 
}; 