#include "..\..\script_macros.hpp"
#include "\z\ace\addons\medical\script_component.hpp"
cutText ["Ich hab da was am Bein.","PLAIN",2];
sleep 3;
cutText ["Die Binden sehen benutzt aus.","PLAIN",2];
	player setVariable [QGVAR(pain), 0, true];
	player setVariable [QGVAR(morphine), 0, true];
	player setVariable [QGVAR(bloodVolume), 100, true];
	player setVariable ["ACE_isUnconscious", false, true];
	player setvariable [QGVAR(tourniquets), [0,0,0,0,0,0], true];
	player setvariable [QGVAR(openWounds), [], true];
	player setvariable [QGVAR(bandagedWounds), [], true];
	player setVariable [QGVAR(internalWounds), [], true];
	player setvariable [QGVAR(lastUniqueWoundID), 1, true];
	player setVariable [QGVAR(heartRate), 80];
	player setvariable [QGVAR(heartRateAdjustments), []];
	player setvariable [QGVAR(bloodPressure), [80, 120]];
	player setVariable [QGVAR(peripheralResistance), 100];
	player setVariable [QGVAR(fractures), [], true];
	player setvariable [QGVAR(triageLevel), 0, true];
	player setvariable [QGVAR(triageCard), [], true];
	player setVariable [QGVAR(salineIVVolume), 0, true];
	player setVariable [QGVAR(plasmaIVVolume), 0, true];
	player setVariable [QGVAR(bloodIVVolume), 0, true];
	player setvariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0], true];
	player setvariable [QGVAR(airwayStatus), 100];
	player setVariable [QGVAR(airwayOccluded), false];
	player setvariable [QGVAR(airwayCollapsed), false];
	player setvariable [QGVAR(addedToUnitLoop), false, true];
	player setvariable [QGVAR(inCardiacArrest), false, true];
	player setvariable [QGVAR(hasLostBlood), 0, true];
	player setvariable [QGVAR(isBleeding), false, true];
	player setvariable [QGVAR(hasPain), false, true];
	player setvariable [QGVAR(painSuppress), 0, true];
    player setDamage 0;
sleep 3;
cutText ["F�r meine Fleischwunde wird es reichen!","PLAIN",2];
[] call life_fnc_hudUpdate;