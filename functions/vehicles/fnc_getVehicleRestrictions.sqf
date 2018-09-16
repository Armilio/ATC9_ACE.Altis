/**
* ATC_fnc_getVehicleRestrictions
* @author ^eNable [enc0ded] <enc0ded.enable@gmail.com>
*/
private ["_unitClasses","_arg_vehicleRestrictions","_vehicles","_restrictions"];

_unitClasses = (_this select 0) getVariable ["atc_vehicleRestrictionsClasses", []];

_arg_vehicleRestrictions = _this select 1;

_vehicles = [];
_restrictions = [];

if (!(_unitClasses isEqualTo []) && {count _arg_vehicleRestrictions > 0}) then {
    {
        if ((_x select 0) in _unitClasses) then {
            {
                _itemIndex = _vehicles find (_x select 0);
                
                if (_itemIndex == -1) then {
                    _vehicles pushBack (_x select 0);                    
                    _restrictions pushBack (_x select 1);
                } else {
                    _restrictions set [_itemIndex, (_x select 1)]
                };
            } forEach (_x select 1);
        };
    } forEach _arg_vehicleRestrictions;
};

[_vehicles, _restrictions] 
