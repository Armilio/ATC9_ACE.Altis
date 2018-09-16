/**
* NOT_USED
* ATC_fnc_fillCrateVA
* NOT_USED
* @author {BDR}Armilio
* @param object _this Crate object 
* @return void
*/
private "_arg_crate";
_arg_crate = _this select 0;


_limitedAmmo = ["DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag", "RPG32_HE_F", "ATC_RPG32_F", "tf47_m3maaws_HEAT", "tf47_m3maaws_HEDP", "Titan_AA", "ATC_MAG_Titan_AT", "ATC_MAG_Titan_AT_B", "Titan_AP"];
//

clearWeaponCargo _arg_crate;
clearMagazineCargo _arg_crate;
clearItemCargo _arg_crate;
clearBackpackCargo _arg_crate;


private ["_arg_weapons","_arg_mag","_arg_allItems"];	
_arg_weapons = _this select 1;	
_arg_mag = _this select 2;
_arg_weaponItems = _this select 3;
_arg_allItems = _this select 4;

//ATC_VACrate addaction ["Virtual Arsenal",{["Open",false] call BIS_fnc_arsenal}];
//["AmmoboxInit",_arg_crate, true] spawn BIS_fnc_arsenal;

[vabox,_arg_weapons,false,true] call BIS_fnc_addVirtualWeaponCargo;

{
	   
	if (!(_x in _limitedAmmo)) then { 
		[vabox,_x,false,true] call BIS_fnc_addVirtualMagazineCargo;
	};
} forEach _arg_mag;	

[vabox,_arg_weaponItems,false,true] call BIS_fnc_addVirtualItemCargo;

[vabox,_arg_allItems,false,true] call BIS_fnc_addVirtualItemCargo;


private ["_uni","_vest","_helm","_bkpk"];

_uni=ATC_basicLoadout select 1 select 0 select 0; //uniform
_helm=ATC_basicLoadout select 1 select 3; //helmet
_vest=ATC_basicLoadout select 1 select 1 select 0; //vest
_bkpk=ATC_basicLoadout select 1 select 2 select 0; //backpack

[vabox,[_uni,_helm,_vest],false,true] call BIS_fnc_addVirtualItemCargo;
[vabox,[_bkpk],false,true] call BIS_fnc_removeVirtualBackpackCargo;
	
