private ["_wheel"];

if(isNull player OR !alive player) exitWith {};
if(playerSide != east) exitWith {hint localize "STR_NOTF_NotACop"};
if(life_istazed OR life_knockOut) exitWith {}; 
if(player getVariable "ace_captives_isHandcuffed") exitWith {hint localize "STR_Global_Restrained"};

_wheel = "ACE_Wheel" createVehicle (position player);
[player, _wheel] call ace_dragging_fnc_carryObject;
[false,"wheel",1] call life_fnc_handleInv;

