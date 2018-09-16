if (!isDedicated) then
{
	waitUntil {!isNil{player getVariable "inventory"} && !isNil {player getVariable "level"}};
	
	_level = player getVariable ["level",1];
    _class = (player getVariable ["inventory",[]]) select 0;
    _class = [_class,_level] joinString "";
    
    _oppositeclass = (player getVariable ["inventory",[]]) select 2;
    _oppositeclass = [_oppositeclass,_level] joinString "";
    
    _inventory = [_class,(player getVariable ["inventory",[]]) select 1,_oppositeclass,(player getVariable ["inventory",[]]) select 3];
    player setVariable ["inventory2",_inventory];
	
    _loadout = [player,missionConfigFile >> "CfgRespawnInventory" >> _class] call BIS_fnc_loadinventory;
	
	waitUntil {_loadout};
	
    ATC_allowedGearsForTake = player call ATC_fnc_getInvData;
	
	waitUntil {!isNil "ATC_allowedGearsForTake"};
	
    _fullCrates = player call ATC_fnc_refillClientCrates;
	
	waitUntil {_fullcrates};
	
	hint format ["Inventory ready for %1", player];
};
