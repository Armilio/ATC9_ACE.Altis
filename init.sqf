/*
ATC - Arma Tactical Combat - Arma III edition
2014-2015 BDR Clan  - www.bdrclan.com
Scripter   ==> enc0ded.enable <==
*/

isJipPlayer = !isServer && isNull player;

ATC_gameStarted = false;
ATC_gameStoped = false;

//ADDED BY FLIPPER
//0 fadeRadio 0;
enableRadio false;
enableSentences false;
player disableConversation false;
player setVariable ["BIS_noCoreConversations", true];
player enableAttack false;

If (!isServer) then {player addRating 30000};   
//

call compile preprocessFileLineNumbers "config.sqf";

call compile preprocessFileLineNumbers "functions\init_server.sqf";

ATC_defSectorsList = ATC_DB_defSide call ATC_fnc_getAreasList;

waitUntil {time > 0};

ATC_gameStarted = true;

call compile preprocessFileLineNumbers "functions\init_client.sqf";
call compile preprocessFileLineNumbers "functions\init_clientInventory.sqf";

tf_no_auto_long_range_radio = true;
tf_west_radio_code = "_bluefor";
tf_east_radio_code = "_opfor"; 
tf_guer_radio_code = "_opfor";
