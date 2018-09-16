//Respawn tickets management script, made for ATC7 by {BDR}*Armilio* ©

if (!IsServer) exitwith{};
waituntil {time > 0}; //da controllare se necessario
{//Settare vite a init server/partita
	[_x,99,false] call BIS_fnc_respawnTickets; 
}foreach allUnits;

//criticità: 
//
