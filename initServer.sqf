UIDArray = [];
UIDTicketsArray = [];
_AllP = call BIS_fnc_listPlayers;

{//Riempire gli array con in memoria giocatori e vite.
	PUID = getPlayerUID _x;
	UIDArray pushBackUnique PUID; 
	UIDTicketsArray pushbackUnique [PUID, 3];
	_x setVariable ["level",3,true];
}foreach _AllP;

publicVariable "UIDArray";
publicVariable "UIDTicketsArray";
