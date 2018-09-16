setTerrainGrid (paramsArray select 1);
setViewDistance (paramsArray select 2);
setObjectViewDistance (paramsArray select 3);

ATC_sideA = west;
ATC_sideB = east;

ATC_sideNameA = "BlueFor";
ATC_sideNameB = "RedFor";

ATC_sideMrkColorA = "ColorWEST";
ATC_sideMrkColorB = "ColorEAST";
ATC_sideMrkColorC = "ColorBlack";

ATC_areaMrkName = "mrk_area_";
ATC_sectorMrkName = "mrk_sector_%1_";

/**
* Set game time limit (in seconds)
*/
ATC_gameTimeLimit = (paramsArray select 0) * 60;

ATC_sectorCheckerDelay = 4;

/**
* ATC_sectorDifficultyParams
    [
        string Condition,
        number Level,
        number Defenders,
        number Attackers
    ]
*/
ATC_sectorDifficultyParams = [
    ["_timeKept <= 60*60", 0, 4, 6],
    ["_timeKept > 60*60", 1, 4, 8]
];
ATC_SectorCountdown=60*4; //added by Armilio atc9

/**
* Body cleaner params
*/
ATC_corpseRemovalTime = 2 * 60;

/**
* Vehicle params
*/

ATC_vehicleRestrictionsA = call compile preprocessFileLineNumbers "config\vehicleRestrictionsA.sqf";
ATC_vehicleRestrictionsB = call compile preprocessFileLineNumbers "config\vehicleRestrictionsB.sqf";

/**
* Loadout params
*/

ATC_limitedWeaponCrateParamsA = [
    [["ATC_TITAN_AT_B",10], ["ATC_TITAN_AA_B",10],["ToolKit",40],["ATC_TITAN_AA_starter",0]],
    [["ATC_NLAW_F", 4],["ATC_NLAW_F", 6],["Titan_AP",2],["Titan_AT", 6],["Titan_AA", 13],["MRAWS_HEAT_F", 35],["MRAWS_HE_F", 8], ["SLAMDirectionalMine_Wire_Mag", 10],["ATMine_Range_Mag", 20],["APERSMine_Range_Mag", 10],["APERSTripMine_Wire_Mag", 15],["APERSBoundingMine_Range_Mag",0],["APERSMine_Range_Mag", 10],["APERSTripMine_Wire_Mag", 15],["DemoCharge_Remote_Mag", 30],["SatchelCharge_Remote_Mag",10],["ClaymoreDirectionalMine_Remote_Mag", 15],["ACE_1Rnd_82mm_Mo_HE",0],["ACE_1Rnd_82mm_Mo_Smoke",0],["ACE_1Rnd_82mm_Mo_Illum",0]],
	[["tf_rt1523g_big",25],["ACE_TacticalLadder_Pack",10],["B_Parachute", 15],["B_AssaultPack_rgr", 20], ["B_TacticalPack_oli", 20], ["B_Carryall_oli", 20]]
];
ATC_limitedWeaponCrateParamsB = [
    [["ATC_TITAN_AT_O",10], ["ATC_TITAN_AA_O",10],["ToolKit",40],["ATC_TITAN_AA_starter",0]],
    [["Vorona_HE", 4],["Vorona_HEAT", 6],["Titan_AP",2],["Titan_AT", 6],["Titan_AA", 10],["RPG32_HE_F",8],["ATC_RPG32_F", 35],["SLAMDirectionalMine_Wire_Mag", 10],["ATMine_Range_Mag", 20],["APERSMine_Range_Mag", 10],["APERSTripMine_Wire_Mag", 15],["APERSBoundingMine_Range_Mag",0],["DemoCharge_Remote_Mag", 30],["SatchelCharge_Remote_Mag",10],["ClaymoreDirectionalMine_Remote_Mag", 15],["ACE_1Rnd_82mm_Mo_HE",0],["ACE_1Rnd_82mm_Mo_Smoke",0],["ACE_1Rnd_82mm_Mo_Illum",0]],
	[["tf_mr3000",25],["ACE_TacticalLadder_Pack",10],["B_Parachute", 15], ["B_FieldPack_ocamo", 20], ["B_TacticalPack_ocamo", 20], ["B_Carryall_cbr", 20]]
];

//ATC_basicLoadoutsA = call compile preprocessFileLineNumbers "config\basicLoadoutsA.sqf";
//ATC_basicLoadoutsB = call compile preprocessFileLineNumbers "config\basicLoadoutsB.sqf";

ATC_loadoutParamsA = call compile preprocessFileLineNumbers "config\loadoutParamsA.sqf";
ATC_loadoutParamsB = call compile preprocessFileLineNumbers "config\loadoutParamsB.sqf";

// todo: get vars from db
ATC_DB_gameNumber = 1;

ATC_DB_isGameStarted = false;
ATC_DB_isGameDone = false;

ATC_DB_date = date;

ATC_DB_time = 0; 

if (ATC_DB_gameNumber == 1 && ATC_DB_time == 0) then {
    /**
    * ATC_DB_gameProgress  
    *
        [
            string Area marker name,
            string Area marker color,
            [
                [
                    string Sector marker name,
                    string Sector marker color,
                    number Sector level
                ] 
            ]
        ]
    */
    ATC_DB_gameProgress = call ATC_fnc_getAreasList;
};

ATC_DB_attSide = ATC_sideA;
ATC_DB_defSide = ATC_sideB;

//Added by Armilio for ATC9
Mixed_sectors = false;
Mixed_A = false;
Mixed_B = false;
Mixed_C = false;

ATC_activeArea = "";
