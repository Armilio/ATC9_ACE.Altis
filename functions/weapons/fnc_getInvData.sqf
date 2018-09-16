/**
* ATC_fnc_getInvData
*/
private ["_unit","_invData","_PossInvData","_items"];

_unit = _this;
_invData = _unit getVariable "inventory2";
_PossInvData = ["allowedItems","weapons","optics","pointers","allowedAmmo","muzzle","canTake"];
_items = [];
ATC_ClassWeapons = [];
ATC_ClassAttachments = [];
ATC_ClassallowedAmmo = [];
ATC_AllMagazines = [];
ATC_ClassAllowedItems = [];

{
	_class = _x;
	
	if (_ForEachIndex >= 2) then
	{
		{
			_data = [missionConfigFile >> "AllowedCachesGear" >> _class >> _x] call BIS_fnc_getCfgDataArray;
			
			switch (_x) do
			{
						
				case "weapons":
				{
					{
						_AllMagazines = getArray (configFile >> "CfgWeapons" >> _x >> "magazines");
						
						{_items pushbackUnique _x} forEach _AllMagazines;
				
						_items pushBackUnique _x;
						
					} forEach _data;
				};
				
				case "optics":
				{
					{_items pushBackUnique _x} forEach _data;
				};
				
				case "pointers":
				{
					{_items pushBackUnique _x} forEach _data;
				};
				
				case "muzzle":
				{
					{_items pushBackUnique _x} forEach _data;
				};
				
				case "allowedAmmo":
				{
					{_items pushBackUnique _x} forEach _data;
				};

				case "allowedItems":
				{
					{_items pushBackUnique _x} forEach _data;
				};
				
				case "canTake":
				{
					{_items pushBackUnique _x} forEach _data;
				};
			};
		
		} forEach _PossInvData;
	}
	else
	{
		{
			_data = [missionConfigFile >> "AllowedCachesGear" >> _class >> _x] call BIS_fnc_getCfgDataArray;
			
			switch (_x) do
			{
						
				case "weapons":
				{
					{
						_AllMagazines = getArray (configFile >> "CfgWeapons" >> _x >> "magazines");
						
						{ATC_AllMagazines pushbackUnique _x} forEach _AllMagazines;
					
					} forEach _data;
					
					ATC_ClassWeapons = ATC_ClassWeapons + _data;
				};
				
				case "optics":
				{
					ATC_ClassAttachments = ATC_ClassAttachments + _data;
				};
				
				case "pointers":
				{
					ATC_ClassAttachments = ATC_ClassAttachments + _data;
				};
				
				case "muzzle":
				{
					ATC_ClassAttachments = ATC_ClassAttachments + _data;
				};
				
				case "allowedAmmo":
				{
					ATC_ClassallowedAmmo = ATC_ClassallowedAmmo + _data;
				};

				case "allowedItems":
				{
					ATC_ClassAllowedItems = ATC_ClassAllowedItems + _data;
				};
			};
			
		} forEach _PossInvData;
	};
} forEach _invData;

_items = _items + ATC_AllMagazines + ATC_ClassWeapons + ATC_ClassAllowedItems + ATC_ClassAttachments;
	
_items
