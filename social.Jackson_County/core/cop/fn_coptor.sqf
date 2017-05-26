if(playerSide != west) exitWith {};
if(vehicle player == player) exitWith {};

{
	if((getMarkerPos "copgexit") distance player < 9) exitWith {
		if(_x animationPhase "animategate1" < 0.5) then {
			_x animate ["animategate1", 1]; 
		} else {
			_x animate ["animategate1", 0];
		};
	};
	
	if((getMarkerPos "copgentry") distance player < 9) exitWith {
		if(_x animationPhase "animategate2" < 0.5) then {
			_x animate ["animategate2", 1]; 
		} else {
			_x animate ["animategate2", 0];
		};
	};
	
	if((getMarkerPos "copgexit_1") distance player < 9) exitWith {
		if(_x animationPhase "animategate1" < 0.5) then {
			_x animate ["animategate1", 1]; 
		} else {
			_x animate ["animategate1", 0];
		};
	};
	
	if((getMarkerPos "copgentry_1") distance player < 9) exitWith {
		if(_x animationPhase "animategate2" < 0.5) then {
			_x animate ["animategate2", 1]; 
		} else {
			_x animate ["animategate2", 0];
		};
	};
} forEach nearestObjects [player, ["cl3_policehq"], 85];