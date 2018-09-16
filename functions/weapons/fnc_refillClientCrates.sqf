/**
* ATC_fnc_refillClientCrates
*
* @author ^eNable [enc0ded] <enc0ded.enable@gmail.com>
*
*  Edited by Flipper after CBA 2.0 Update
*
*  Edited by NikLox to implement new inventory system
*/
private ["_magazines", "_weaponItems", "_allMagazines", "_allAttachment","_AllowedAttachments","_inventory"];

_arg_unit = _this;

_weapon = primaryWeapon _arg_unit;

_AllMagazines = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
_compatibleAttachments = [_weapon] call CBA_fnc_compatibleItems;

_attachments = _compatibleAttachments arrayIntersect ATC_ClassAttachments;

_magazines = _allmagazines + ATC_ClassAllowedAmmo; 
ATC_ClassWeapons = ATC_ClassWeapons - ["ATC_TITAN_AA_starter"];

[ATC_weaponsCrate, ATC_ClassWeapons] call ATC_fnc_fillCrate;
[ATC_ammoCrate, _magazines] call ATC_fnc_fillCrate;
[ATC_weaponItemsCrate, _attachments] call ATC_fnc_fillCrate;
[ATC_itemsCrate, ATC_ClassAllowedItems] call ATC_fnc_fillCrate;

//[ATC_VACrate, ATC_sideAllowedWeapons - ATC_limitedGears,_magazines, _weaponItems, ATC_sideAllowedItems] call ATC_fnc_fillCrateVA;

true
