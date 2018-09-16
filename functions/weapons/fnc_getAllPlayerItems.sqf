private ["_arg_unit"];

_arg_unit = _this;

_items = [];

{
	
	_items pushbackUnique _x;

} forEach weapons _arg_unit;

{
	
	_items pushbackUnique _x;
	
} forEach (primaryWeaponItems _arg_unit + secondaryWeaponItems _arg_unit + handgunItems _arg_unit);

{
	
	_items pushbackUnique _x;
	
} forEach (uniformItems _arg_unit + vestItems _arg_unit + backpackItems _arg_unit);

/*
_items pushBackUnique (backpack _arg_unit)
*/

/*{
	
	_items pushbackUnique _x;
	
} forEach assignedItems _arg_unit;*/

_items = _items - [""];

_items
