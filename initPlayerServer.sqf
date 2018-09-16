//tickets on JIP — script by {BDR}*Armilio*© for ATC7

//Attributi:[Player, DIDJip];


_JIPlayerThis = _this select 0; //Giocatore che ha JIPpato
_isJIP = _this select 1; // è JIPpato o no?



_level = 0;
 
if (_isJIP) then 
{

	JIPCtrl = 1;
	JIPFlag = 1; // variabili flag/debug
	
	_JIPUID = getPlayerUID _JIPlayerThis;
	_Sel1 = UIDArray find _JIPUID;
		
	if (_sel1 == -1) then 
	{ 
		//se giocatore nuovo (find ritorna -1 se non trova)
		//[_JIPlayerThis,99,false] call BIS_fnc_respawnTickets;
		
		UIDArray pushBackUnique _JIPUID; 
		
		switch (true) do 
		{ //Se uno entra dopo 1 ora non gli dò mica 3 vite
			
			case (time > 2700): 
			{
				UIDTicketsArray pushbackUnique [_JIPUID, 2];
				[_JIPlayerThis,98,false] call BIS_fnc_respawnTickets;
				_level = 2;
			};
			
			case (time > 4500): 
			{
				UIDTicketsArray pushbackUnique [_JIPUID, 1];
				[_JIPlayerThis,97,false] call BIS_fnc_respawnTickets;
				_level = 1;
			};
			
			default 
			{
				UIDTicketsArray pushbackUnique [_JIPUID, 3];
				[_JIPlayerThis,99,false] call BIS_fnc_respawnTickets;
				_level = 3;
			};
		};
		
		publicVariable "UIDArray";
		publicVariable "UIDTicketsArray";
	};
	if (_sel1 >= 0) then 
	{ 
	// se giocatore non nuovo ma ritornato
		_UIDSelected2 = UIDTicketsArray select _sel1;
		_JIPUIDtickets = _UIDSelected2 select 1;
		
		if (_JIPUIDtickets > 0) then 
		{
			
			_JIPUIDtickets = _JIPUIDtickets - 1;
			_Array24 = UIDTicketsArray select _sel1; //aggiornamento array
			_Array24 set [0, _JIPUID];
			_Array24 set [1, _JIPUIDtickets];
			UIDTicketsArray set [_sel1, _Array24];
			_level = _JIPUIDtickets;
			
			publicVariable "UIDTicketsArray";
		} 
		else 
		{//avviare spectator
			
			_JIPUIDtickets = _JIPUIDtickets - 1;
			_Array24 = UIDTicketsArray select _sel1; //aggiornamento array
			_Array24 set [0, _JIPUID];
			_Array24 set [1, _JIPUIDtickets];
			UIDTicketsArray set [_sel1, _Array24];
			_level = _JIPUIDtickets;
			
			publicVariable "UIDTicketsArray";
			
			//["Initialize", [_JIPlayerThis, [side _JIPlayerThis], true, false, false, true, true, true, true, false]] call BIS_fnc_EGSpectator;
		}; 
		
		//[_JIPlayerThis,_JIPUIDtickets,false] call BIS_fnc_respawnTickets;
		//if (time > 6900) then { //se ultimi 20 minuti
		//	[_JIPlayerThis,2,false] call BIS_fnc_respawnTickets;
		//};
		
		JIPCtrl = 2;
	};
	
	JIPFlag = 0;
	
	if (_level > 0) then
	{
		[_JIPlayerThis,["level",3,false]] remoteExec ["setVariable",_JIPlayerThis,false];
	};
}
else
{
	[_JIPlayerThis,["level",3,false]] remoteExec ["setVariable",_JIPlayerThis,false];
};



//criticità: 
//-
