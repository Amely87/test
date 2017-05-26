#include "..\..\script_macros.hpp"
// Written by Kupferkarpfen
// License: CC BY-NC-SA 4.0
//
// [ amount, type, simulate ]
//
// - amount: amount to pay
// - type: 0 = cash or atm (default) / 1 = cash / 2 = atm
// - simulate: false = pay (default) / true = check only if paying possible

private _amount = param[ 0, -1, [0] ];
private _type = param[ 1, 0, [0] ];
private _simulate = param[ 2, false, [false] ];

if( _amount < 0 ) exitWith {
    format [ "<CERROR> %1 (%2) called fn_pay incorrectly: %3", profileName, getPlayerUID player, _this ];
};

if( _amount isEqualTo 0 ) exitWith { true };

private _fncPay = switch ( true ) do {
    case( _type <= 1 && { life_cash >= _amount }): { { life_cash = life_cash - _this; } };
    case( (_type isEqualTo 0 || _type isEqualTo 2) && { life_atmbank >= _amount } ): { { life_atmbank = life_atmbank - _this; } };
    case( _type isEqualTo 0 && { life_cash + life_atmbank >= _amount } ): { { life_atmbank = life_atmbank + life_cash; life_cash = 0; life_atmbank = life_atmbank - _this; } };
    default { nil };
};

if( isNil "_fncPay" ) exitWith { false };

if( !(_simulate) ) then {
    _amount call _fncPay;
    [0] call SOCK_fnc_updatePartial;
};

true;