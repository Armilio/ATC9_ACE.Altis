class AllowedCachesGear
{
		class CommonB
		{
            weapons[] = {
				         "hgun_Pistol_heavy_01_F","hgun_P07_F", //Pistols
			             "SMG_01_F","SMG_05_F", //SMG
						 "arifle_SPAR_01_blk_F", //AR
						 "ATC_TITAN_AA_starter" //Launcher
						 };
						 
			optics[] = {
				        "optic_aco","optic_ACO_grn","RH_cmore","RH_reflex", //Reflex
			            "RH_eotech553","RH_eotech553_tan","RH_eotexps3","RH_eotexps3_tan", //Eotech
						"RH_compM2l","RH_compM2l_tan","RH_compm4s" //Aimpoint
						};
						
			pointers[] = {
                          "RH_SFM952V","RH_SFM952V_Tan",  //Flashlight
						  "RH_peq15","RH_peq15b","RH_peq15_top","RH_peq15b_top" //IR
						  };
						  
			allowedAmmo[] = {"HandGrenade","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShell","SmokeShellYellow","O_IR_Grenade","Chemlight_blue","Chemlight_green","Chemlight_red","Chemlight_yellow","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSBoundingMine_Range_Mag","APERSTripMine_Wire_Mag","APERSMine_Range_Mag","ClaymoreDirectionalMine_Remote_Mag"};
			
			allowedItems[] = {
				              "H_HelmetSpecB", "H_Booniehat_oli", //Headgear
							  "Uniform_ATACS", //Uniform
							  "V_TacVest_oli", "V_TacChestrig_oli_F", //Vest
							  "ACE_Flashlight_MX991","ACE_MapTools","ACE_wirecutter","ACE_EarPlugs","ACE_Flashlight","ACE_IR_Strobe_Item","ItemMap","ItemCompass","ItemWatch","tf_fadak","FirstAidKit","ACE_NVG_Gen4","Binocular"
							  };
		};
		
		class CommonR
		{
			weapons[] = {
				         "hgun_ACPC2_F","hgun_Rook40_F", //Pistols
			             "SMG_01_F","SMG_05_F", //SMG
						 "arifle_CTAR_Hex_F", //AR
						 "ATC_TITAN_AA_starter" //Launcher
						 };
						 
			optics[] = {
				        "optic_aco","optic_ACO_grn","RH_cmore","RH_reflex", //Reflex
			            "RH_eotech553","RH_eotech553_tan","RH_eotexps3","RH_eotexps3_tan", //Eotech
						"RH_compM2l","RH_compM2l_tan","RH_compm4s" //Aimpoint
						};
						
			pointers[] = {
                          "RH_SFM952V","RH_SFM952V_Tan",  //Flashlight
						  "RH_peq15","RH_peq15b","RH_peq15_top","RH_peq15b_top" //IR
						  };
						  
			allowedAmmo[] = {"HandGrenade","SmokeShellBlue","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","SmokeShellRed","SmokeShell","SmokeShellYellow","O_IR_Grenade","Chemlight_blue","Chemlight_green","Chemlight_red","Chemlight_yellow","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSBoundingMine_Range_Mag","APERSTripMine_Wire_Mag","APERSMine_Range_Mag","ClaymoreDirectionalMine_Remote_Mag"};
			
			allowedItems[] = {
				              "Helmet_CSAT", "H_Booniehat_khk_hs", //Headgear
							  "Uniform_CSAT", //Uniform
							  "V_TacVest_khk", "V_TacChestrig_cbr_F", //Vest
							  "ACE_Flashlight_MX991","ACE_MapTools","ACE_wirecutter","ACE_EarPlugs","ACE_Flashlight","ACE_IR_Strobe_Item","ItemMap","ItemCompass","ItemWatch","tf_fadak","FirstAidKit","ACE_NVG_Gen4","Binocular"
							  };
		};
		
		////////////////////////////////////////////////////////////RIFLEMAN
		
		class RiflemanB3 {		
		optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
		weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ATC_417","ATC_EBR"};
		muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};	
		};
		
		class RiflemanB2 {		
		weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ATC_417","ATC_EBR"};
		muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};
		};
		
		class RiflemanB1 {
	    weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
		};
		
		class RiflemanR3 {		
		optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan", "RH_m145"};
		weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ATC_AK12","ATC_SIG"};
		muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};		
		};
		
		class RiflemanR2 {		
		weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ATC_AK12","ATC_SIG"};	
        muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};			
		};
		
		class RiflemanR1 {
		weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
		};
		
		////////////////////////////////////////////////////////////TEAMLEADER
		
		class TeamLeaderB3
		{
			weapons[] = {"arifle_MX_GL_Black_F", "arifle_SPAR_01_GL_blk_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector"};
		};
		
		class TeamLeaderB2
		{
		weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};	
		allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class TeamLeaderB1
		{
		weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};	
        allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
				
		class TeamLeaderR3
		{
			weapons[] = {"arifle_Katiba_GL_F", "arifle_CTAR_GL_hex_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector"};
		};
		
		class TeamLeaderR2
		{
		weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
		allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class TeamLeaderR1
		{
		weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
        allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		////////////////////////////////////////////////////////////GRENADIER
		
		class GrenadierB3
		{
			weapons[] = {"arifle_MX_GL_Black_F", "arifle_SPAR_01_GL_blk_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		};
		
		class GrenadierB2
		{
			weapons[] = {"arifle_MX_GL_Black_F", "arifle_SPAR_01_GL_blk_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};		
		};
		
		class GrenadierB1
		{
			weapons[] = {"arifle_MX_GL_Black_F", "arifle_SPAR_01_GL_blk_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};		
		};
		
		class GrenadierR3
		{
			weapons[] = {"arifle_Katiba_GL_F", "arifle_CTAR_GL_hex_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		};
		
		class GrenadierR2
		{
			weapons[] = {"arifle_Katiba_GL_F", "arifle_CTAR_GL_hex_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		};
		
		class GrenadierR1
		{
			weapons[] = {"arifle_Katiba_GL_F", "arifle_CTAR_GL_hex_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		};
		
		////////////////////////////////////////////////////////////AUTORIFLEMAN
		
		class AutoriflemanB3
		{
			weapons[] = {"LMG_Mk200_F","arifle_SPAR_02_blk_F","LMG_03_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class AutoriflemanB2
		{
			weapons[] = {"LMG_Mk200_F","arifle_SPAR_02_blk_F","LMG_03_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class AutoriflemanB1
		{
			weapons[] = {"LMG_Mk200_F","arifle_SPAR_02_blk_F","LMG_03_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class AutoriflemanR3
		{
			weapons[] = {"LMG_Zafir_F","arifle_CTARS_hex_F","LMG_03_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class AutoriflemanR2
		{
			weapons[] = {"LMG_Zafir_F","arifle_CTARS_hex_F","LMG_03_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class AutoriflemanR1
		{
			weapons[] = {"LMG_Zafir_F","arifle_CTARS_hex_F","LMG_03_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		////////////////////////////////////////////////////////////MACHINEGUNNER
				
		class MachinegunnerB3
		{
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1", "RH_m145"};
			weapons[] = {"MMG_02_black_F","LMG_Mk200_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class MachinegunnerB2
		{
			weapons[] = {"MMG_02_black_F","LMG_Mk200_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class MachinegunnerB1
		{
			weapons[] = {"MMG_02_black_F","LMG_Mk200_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class MachinegunnerR3
		{
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan", "RH_m145"};
			weapons[] = {"MMG_01_tan_F","LMG_Zafir_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class MachinegunnerR2
		{
			weapons[] = {"MMG_01_tan_F","LMG_Zafir_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		class MachinegunnerR1
		{
			weapons[] = {"MMG_01_tan_F","LMG_Zafir_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
		};
		
		////////////////////////////////////////////////////////////MARKSMAN
		
		class MarksmanB3
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd","RH_ta648"};
			weapons[] = {"arifle_MXM_Black_F", "arifle_SPAR_03_blk_F", "srifle_EBR_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope"};
		};
				
		class MarksmanB2
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd","RH_ta648"};
			weapons[] = {"arifle_MXM_Black_F", "arifle_SPAR_03_blk_F", "srifle_EBR_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope"};
		};
		
		class MarksmanB1
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd","RH_ta648"};
			weapons[] = {"arifle_MXM_Black_F", "arifle_SPAR_03_blk_F", "srifle_EBR_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope"};
		};
		
		class MarksmanR3
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_AMS", "optic_AMS_snd","RH_ta648"};
			weapons[] = {"srifle_DMR_07_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_01_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope"};
		};
				
		class MarksmanR2
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_AMS", "optic_AMS_snd","RH_ta648"};
			weapons[] = {"srifle_DMR_07_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_01_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope"};
		};
		
		class MarksmanR1
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_KHS_hex", "optic_AMS", "optic_AMS_snd","RH_ta648"};
			weapons[] = {"srifle_DMR_07_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_01_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope"};
		};
		
		////////////////////////////////////////////////////////////RIFLEMAN_AT
		class RiflemanATB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","launch_MRAWS_olive_rail_F"};
		};
				
		class RiflemanATB2
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","launch_MRAWS_olive_rail_F"};
		};
		
		class RiflemanATB1
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","launch_MRAWS_olive_rail_F"};
		};
		
		class RiflemanATR3
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","launch_MRAWS_sand_rail_F"};
		};
				
		class RiflemanATR2
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","launch_MRAWS_sand_rail_F"};
		};
		
		class RiflemanATR1
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","launch_MRAWS_sand_rail_F"};
		};
		
		////////////////////////////////////////////////////////////SPEC_AT
		
		class SpecATB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","launch_MRAWS_olive_rail_F","launch_O_Vorona_green_F","ATC_TITAN_AT_B"};
		};
				
		class SpecATB2
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","launch_MRAWS_olive_rail_F","launch_O_Vorona_green_F","ATC_TITAN_AT_B"};
		};
		
		class SpecATB1
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","launch_MRAWS_olive_rail_F"};
		};
		
		class SpecATR3
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","launch_MRAWS_sand_rail_F","launch_O_Vorona_brown_F","ATC_TITAN_AT_O"};
		};
				
		class SpecATR2
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","launch_MRAWS_sand_rail_F","launch_O_Vorona_brown_F","ATC_TITAN_AT_O"};
		};
		
		class SpecATR1
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","launch_MRAWS_sand_rail_F"};
		};
		
		////////////////////////////////////////////////////////////SPEC_AA
		class SpecAAB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ATC_TITAN_AA_B"};
		};
				
		class SpecAAB2
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ATC_TITAN_AA_B"};
		};
		
		class SpecAAB1
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ATC_TITAN_AA_B"};
		};
		
		class SpecAAR3
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ATC_TITAN_AA_O"};
		};
				
		class SpecAAR2
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ATC_TITAN_AA_O"};
		};
		
		class SpecAAR1
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ATC_TITAN_AA_O"};
		};
		
		////////////////////////////////////////////////////////////SPEC_EXP
		class SpecExpB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ACE_VMH3"};
			allowedAmmo[] = {"ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
		    allowedItems[] = {"ACE_Clacker","ACE_DefusalKit"};
			muzzle[] = {"muzzle_snds_M","muzzle_snds_acp","muzzle_snds_L"};
		};
				
		class SpecExpB2
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ACE_VMH3"};
			allowedAmmo[] = {"ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
		    allowedItems[] = {"ACE_Clacker","ACE_DefusalKit"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};
		};
		
		class SpecExpB1
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ACE_VMH3"};
			allowedAmmo[] = {"ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
		    allowedItems[] = {"ACE_Clacker","ACE_DefusalKit"};
			muzzle[] = {"muzzle_snds_L"};
		};
		
		class SpecExpR3
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ACE_VMH3"};
			allowedAmmo[] = {"ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
		    allowedItems[] = {"ACE_Clacker","ACE_DefusalKit"};
			muzzle[] = {"muzzle_snds_58_blk_F","muzzle_snds_acp","muzzle_snds_L"};
		};
				
		class SpecExpR2
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ACE_VMH3"};
			allowedAmmo[] = {"ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
		    allowedItems[] = {"ACE_Clacker","ACE_DefusalKit"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};
		};
		
		class SpecExpR1
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ACE_VMH3"};
			allowedAmmo[] = {"ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
		    allowedItems[] = {"ACE_Clacker","ACE_DefusalKit"};
			muzzle[] = {"muzzle_snds_L"};
		};
		
		////////////////////////////////////////////////////////////SPEC_ASS
		class SpecAssB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector"};
		};
				
		class SpecAssB2
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class SpecAssB1
		{
	        weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class SpecAssR3
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector"};
		};
				
		class SpecAssR2
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class SpecAssR1
		{
	        weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		////////////////////////////////////////////////////////////SNIPER
		
		class SniperB3
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd","optic_LRPS","optic_LRPS_tna_F"};
			weapons[] = {"arifle_MXM_Black_F", "arifle_SPAR_03_blk_F", "srifle_EBR_F","srifle_LRR_F","srifle_DMR_02_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_338_black","muzzle_snds_B","muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F"};
		};
				
		class SniperB2
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd","optic_LRPS","optic_LRPS_tna_F"};
			weapons[] = {"arifle_MXM_Black_F", "arifle_SPAR_03_blk_F", "srifle_EBR_F","srifle_LRR_F","srifle_DMR_02_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_338_black","muzzle_snds_B","muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F"};
		};
		
		class SniperB1
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd"};
			weapons[] = {"arifle_MXM_Black_F", "arifle_SPAR_03_blk_F", "srifle_EBR_F","arifle_MX_Black_F","arifle_MXC_Black_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des","muzzle_snds_acp","muzzle_snds_L","muzzle_snds_H"};
			muzzle[] = {"muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F"};
		};
		
		class SniperR3
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd","optic_LRPS","optic_LRPS_tna_F"};
			weapons[] = {"srifle_DMR_07_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_01_F","srifle_GM6_F","srifle_DMR_05_tan_f","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_93mmg_tan","muzzle_snds_B","muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_O_FullGhillie_ard","U_O_FullGhillie_lhs","U_O_FullGhillie_sard","U_O_T_FullGhillie_tna_F"};
		};
				
		class SniperR2
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd","optic_LRPS","optic_LRPS_tna_F"};
			weapons[] = {"srifle_DMR_07_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_01_F","srifle_GM6_F","srifle_DMR_05_tan_f","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_93mmg_tan","muzzle_snds_B","muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_O_FullGhillie_ard","U_O_FullGhillie_lhs","U_O_FullGhillie_sard","U_O_T_FullGhillie_tna_F"};
		};
		
		class SniperR1
		{
			optics[] = {"RH_anpvs10", "optic_NVS", "optic_DMS", "optic_KHS_blk", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd"};
			weapons[] = {"srifle_DMR_07_hex_F", "srifle_DMR_03_tan_F", "srifle_DMR_01_F","arifle_Katiba_F","arifle_Katiba_C_F"};
			pointers[] = {"RH_HBLM","RH_HBLM_des","muzzle_snds_acp","muzzle_snds_L"};
			muzzle[] = {"muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_O_FullGhillie_ard","U_O_FullGhillie_lhs","U_O_FullGhillie_sard","U_O_T_FullGhillie_tna_F"};
		};
		
		////////////////////////////////////////////////////////////SPOTTER
		
		class SpotterB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan","optic_NVS","optic_DMS","RH_ta648"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L","muzzle_snds_M"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F","ACE_DAGR","ACE_Vector","ACE_Kestrel4500","ACE_ATragMX","ATC_Laserdesignator_B"};
		    allowedAmmo[] = {"Laserbatteries"};
		};
		
		class SpotterB2
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan", "optic_NVS", "optic_DMS","RH_ta648"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L","muzzle_snds_M"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F","ACE_DAGR","ACE_Vector","ACE_Kestrel4500","ACE_ATragMX","ATC_Laserdesignator_B"};
		    allowedAmmo[] = {"Laserbatteries"};
		};
		
		class SpotterB1
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F","ACE_DAGR","ACE_Vector","ACE_Kestrel4500","ACE_ATragMX","ATC_Laserdesignator_B"};
		allowedAmmo[] = {"Laserbatteries"};
		};
				
		class SpotterR3
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan","optic_NVS","optic_DMS","RH_ta648"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L","muzzle_snds_58_blk_F"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F","ACE_DAGR","ACE_Vector","ACE_Kestrel4500","ACE_ATragMX","ATC_Laserdesignator_O"};
			allowedAmmo[] = {"Laserbatteries"};
		};
		
		class SpotterR2
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan","optic_NVS","optic_DMS","RH_ta648"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_H","muzzle_snds_acp","muzzle_snds_L","muzzle_snds_58_blk_F"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F","ACE_DAGR","ACE_Vector","ACE_Kestrel4500","ACE_ATragMX","ATC_Laserdesignator_O"};
			allowedAmmo[] = {"Laserbatteries"};
		};
		
		class SpotterR1
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan"};
			pointers[] = {"RH_HBLM","RH_HBLM_des"};
			muzzle[] = {"muzzle_snds_L"};
			allowedItems[] = {"ACE_RangeCard","ACE_SpottingScopeObject","ACE_SpottingScope","U_I_FullGhillie_ard","U_I_FullGhillie_lhs","U_I_FullGhillie_sard","U_B_T_FullGhillie_tna_F","ACE_DAGR","ACE_Vector","ACE_Kestrel4500","ACE_ATragMX","ATC_Laserdesignator_O"};
			allowedAmmo[] = {"Laserbatteries"};
		};
		
		
		////////////////////////////////////////////////////////////PARA'RIFLEMAN
		
		class ParaRiflemanB3 {		
		optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
		muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};
		allowedItems[] = {"ACE_Altimeter"};
		backpacks[] = {"B_Parachute"};		
		};
		
		class ParaRiflemanB2 {		
		muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};
		allowedItems[] = {"ACE_Altimeter"};
		backpacks[] = {"B_Parachute"};
		};
		
		class ParaRiflemanB1 {
		allowedItems[] = {"ACE_Altimeter"};
		backpacks[] = {"B_Parachute"};	
		};
		
		class ParaRiflemanR3 {		
		optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
		muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};
		allowedItems[] = {"ACE_Altimeter"};
		backpacks[] = {"B_Parachute"};		
		};
		
		class ParaRiflemanR2 {		
		muzzle[] = {"muzzle_snds_acp","muzzle_snds_L"};
		allowedItems[] = {"ACE_Altimeter"};
		backpacks[] = {"B_Parachute"};
		};
		
		class ParaRiflemanR1 {
		allowedItems[] = {"ACE_Altimeter"};
		backpacks[] = {"B_Parachute"};	
		};
		
		////////////////////////////////////////////////////////////PARA'TEAMLEADER
		
		class ParaTeamLeaderB3
		{
			weapons[] = {"arifle_SPAR_01_GL_blk_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector", "ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaTeamLeaderB2
		{
			allowedItems[] = {"ACE_DAGR", "ACE_Vector", "ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaTeamLeaderB1
		{
			allowedItems[] = {"ACE_DAGR", "ACE_Vector", "ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
				
		class ParaTeamLeaderR3
		{
			weapons[] = {"arifle_CTAR_GL_hex_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector", "ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaTeamLeaderR2
		{
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector", "ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaTeamLeaderR1
		{
			allowedItems[] = {"ACE_DAGR", "ACE_Vector", "ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		////////////////////////////////////////////////////////////PARA'GRENADIER
		
		class ParaGrenadierB3
		{
			weapons[] = {"arifle_SPAR_01_GL_blk_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaGrenadierB2
		{
			weapons[] = {"arifle_SPAR_01_GL_blk_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaGrenadierB1
		{
			weapons[] = {"arifle_SPAR_01_GL_blk_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};		
		};
		
		class ParaGrenadierR3
		{
			weapons[] = {"arifle_CTAR_GL_hex_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};			
		};
		
		class ParaGrenadierR2
		{
			weapons[] = {"arifle_CTAR_GL_hex_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaGrenadierR1
		{
			weapons[] = {"arifle_CTAR_GL_hex_F"};
			allowedAmmo[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		////////////////////////////////////////////////////////////PARA'AUTORIFLEMAN
		
		class ParaAutoriflemanB3
		{
			weapons[] = {"arifle_SPAR_02_blk_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaAutoriflemanB2
		{
			weapons[] = {"arifle_SPAR_02_blk_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaAutoriflemanB1
		{
			weapons[] = {"arifle_SPAR_02_blk_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaAutoriflemanR3
		{
			weapons[] = {"arifle_CTARS_hex_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaAutoriflemanR2
		{
			weapons[] = {"arifle_CTARS_hex_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
		class ParaAutoriflemanR1
		{
			weapons[] = {"arifle_CTARS_hex_F"};
			pointers[] = {"RH_TD_ACB_b","RH_TD_ACB"};
			allowedItems[] = {"ACE_Altimeter"};
		    backpacks[] = {"B_Parachute"};	
		};
		
				
		////////////////////////////////////////////////////////////COMMANDER
		
		class CommanderB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};	
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
			allowedItems[] = {"ACE_microDAGR", "ACE_Vector"};
		};
		
		class CommanderB2
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};	
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag", "RH_eothhs1"};
			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class CommanderB1
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};	
			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class CommanderR3
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan"};
			allowedItems[] = {"ACE_microDAGR", "ACE_DAGR", "ACE_Vector"};
		};
		
		class CommanderR2
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan"};
 			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		class CommanderR1
		{
            weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};
			allowedItems[] = {"ACE_DAGR", "ACE_Vector"};
		};
		
		////////////////////////////////////////////////////////////MEDIC
		
		class MedicB1
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedItems[] = {"Medikit"};
		};
		
		class MedicB2
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedItems[] = {"Medikit"};
		};
		
		class MedicB3
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F"};
			allowedItems[] = {"Medikit"};
		};
		
		class MedicR3
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};	
            allowedItems[] = {"Medikit"};
		};
		
		class MedicR2
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};	
            allowedItems[] = {"Medikit"};
		};
		
		class MedicR1
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F"};	
            allowedItems[] = {"Medikit"};
		};
		
		////////////////////////////////////////////////////////////ENGINEER
		
		class EngineerB3
		{	
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ACE_VMH3"};
			allowedItems[] = {"Medikit","ToolKit"};			
		};
	
		class EngineerB2
		{
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ACE_VMH3"};
			allowedItems[] = {"Medikit","ToolKit"};	
		};
	
		class EngineerB1
		{		
			weapons[] = {"arifle_MX_Black_F","arifle_MXC_Black_F","ACE_VMH3"};
			allowedItems[] = {"Medikit","ToolKit"};					
		};
	
		class EngineerR3
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ACE_VMH3"};
			allowedItems[] = {"Medikit","ToolKit"};				
		};
	
		class EngineerR2
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ACE_VMH3"};
			allowedItems[] = {"Medikit","ToolKit"};				
		};
		
		class EngineerR1
		{
			weapons[] = {"arifle_Katiba_F","arifle_Katiba_C_F","ACE_VMH3"};
			allowedItems[] = {"Medikit","ToolKit"};				
		};
		
		////////////////////////////////////////////////////////////SPECIAL FORCE	
		
		class SFB3
		{
			weapons[] = {
				          "arifle_MX_GL_Black_F", "arifle_SPAR_01_GL_blk_F", //GL
						  "LMG_Mk200_F","arifle_SPAR_02_blk_F","LMG_03_F","MMG_02_black_F", //MG
						  "arifle_SPAR_03_blk_F", "srifle_EBR_F", //SNIPER
						  "launch_MRAWS_olive_rail_F"//LAUNCHER
			            };  
						  
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan", "RH_m145", "optic_NVS", "optic_DMS","RH_ta648"};
			pointers[] = {"RH_HBLM","RH_HBLM_des","RH_TD_ACB_b","RH_TD_ACB"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L","muzzle_snds_H","muzzle_snds_M","muzzle_snds_B","muzzle_snds_H_MG_blk_F"};
			allowedAmmo[] = {"Laserbatteries","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Laserbatteries", "ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
			allowedItems[] = {"ACE_Clacker","ACE_SpottingScopeObject","ACE_SpottingScope","ACE_Altimeter","ACE_DAGR","ACE_Vector","ATC_Laserdesignator_B","ACE_RangeCard","ACE_HuntIR_monitor","ATC_Laserdesignator_B"};
			backpacks[] = {"B_Parachute"};
		};
		
		class SFB2
		{
			weapons[] = {
				          "arifle_MX_GL_Black_F", "arifle_SPAR_01_GL_blk_F", //GL
						  "LMG_Mk200_F","arifle_SPAR_02_blk_F","LMG_03_F", //MG
						  "launch_MRAWS_olive_rail_F"//LAUNCHER
			            };  
						  
			pointers[] = {"RH_HBLM","RH_HBLM_des","RH_TD_ACB_b","RH_TD_ACB"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L","muzzle_snds_M"};
			allowedAmmo[] = {"Laserbatteries","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Laserbatteries", "ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
			allowedItems[] = {"ACE_Clacker","ACE_SpottingScopeObject","ACE_SpottingScope","ACE_Altimeter","ACE_DAGR","ACE_Vector","ATC_Laserdesignator_B","ACE_RangeCard","ACE_HuntIR_monitor","ATC_Laserdesignator_B"};
		};
		
		class SFB1
		{
			weapons[] = {
				          "arifle_MX_GL_Black_F", "arifle_SPAR_01_GL_blk_F", //GL
						  "LMG_Mk200_F","arifle_SPAR_02_blk_F","LMG_03_F", //MG
						  "launch_MRAWS_olive_rail_F"//LAUNCHER
			            };  
						  
			pointers[] = {"RH_HBLM","RH_HBLM_des","RH_TD_ACB_b","RH_TD_ACB"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L","muzzle_snds_M"};
			allowedAmmo[] = {"Laserbatteries","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Laserbatteries", "ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
			allowedItems[] = {"ACE_Clacker","ACE_SpottingScopeObject","ACE_SpottingScope","ACE_Altimeter","ACE_DAGR","ACE_Vector","ATC_Laserdesignator_B","ACE_RangeCard","ACE_HuntIR_monitor","ATC_Laserdesignator_B"};
		};
		
		class SFR3
		{
			weapons[] = {
				          "arifle_Katiba_GL_F", "arifle_CTAR_GL_hex_F", //GL
						  "LMG_Zafir_F","arifle_CTARS_hex_F","LMG_03_F","MMG_01_tan_F", //MG
						  "srifle_DMR_07_hex_F", "srifle_DMR_03_tan_F", //SNIPER
						  "launch_MRAWS_sand_rail_F"//LAUNCHER
			            };  
						  
			optics[] = {"ACE_optic_Arco_PIP", "ACE_optic_Arco_2D", "ACE_optic_Hamr_2D", "ACE_optic_Hamr_PIP", "RH_ta01nsn_2D", "RH_ta31rco_2D", "RH_eotech553mag_tan", "RH_eothhs1_tan", "RH_m145", "optic_NVS", "optic_DMS"};
			pointers[] = {"RH_HBLM","RH_HBLM_des","RH_TD_ACB_b","RH_TD_ACB"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L","muzzle_snds_H","muzzle_snds_58_blk_F","muzzle_snds_B","muzzle_snds_H_MG_blk_F"};
			allowedAmmo[] = {"Laserbatteries","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Laserbatteries", "ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
			allowedItems[] = {"ACE_Clacker","ACE_SpottingScopeObject","ACE_SpottingScope","ACE_Altimeter","ACE_DAGR","ACE_Vector","ATC_Laserdesignator_B","ACE_RangeCard","ACE_HuntIR_monitor","ATC_Laserdesignator_O"};
			backpacks[] = {"B_Parachute"};
		};
		
		class SFR2
		{
			weapons[] = {
				          "arifle_Katiba_GL_F", "arifle_CTAR_GL_hex_F", //GL
						  "LMG_Zafir_F","arifle_CTARS_hex_F","LMG_03_F", //MG
						  "launch_MRAWS_sand_rail_F"//LAUNCHER
			            };  
						  
			pointers[] = {"RH_HBLM","RH_HBLM_des","RH_TD_ACB_b","RH_TD_ACB"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L","muzzle_snds_58_blk_F"};
			allowedAmmo[] = {"Laserbatteries","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Laserbatteries", "ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
			allowedItems[] = {"ACE_Clacker","ACE_SpottingScopeObject","ACE_SpottingScope","ACE_Altimeter","ACE_DAGR","ACE_Vector","ATC_Laserdesignator_B","ACE_RangeCard","ACE_HuntIR_monitor","ATC_Laserdesignator_O"};
		};
		
		class SFR1
		{
			weapons[] = {
				          "arifle_Katiba_GL_F", "arifle_CTAR_GL_hex_F", //GL
						  "LMG_Zafir_F","arifle_CTARS_hex_F","LMG_03_F", //MG
						  "launch_MRAWS_sand_rail_F"//LAUNCHER
			            }; 
						  
			pointers[] = {"RH_HBLM","RH_HBLM_des","RH_TD_ACB_b","RH_TD_ACB"};
			muzzle[] = {"muzzle_snds_acp","muzzle_snds_L","muzzle_snds_58_blk_F"};
			allowedAmmo[] = {"Laserbatteries","ACE_HuntIR_M203","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","Laserbatteries", "ClaymoreDirectionalMine_Remote_Mag","DemoCharge_Remote_Mag","ATMine_Range_Mag","APERSMine_Range_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag"};
			allowedItems[] = {"ACE_Clacker","ACE_SpottingScopeObject","ACE_SpottingScope","ACE_Altimeter","ACE_DAGR","ACE_Vector","ATC_Laserdesignator_B","ACE_RangeCard","ACE_HuntIR_monitor","ATC_Laserdesignator_O"};
		};
		
		////////////////////////////////////////////////////////////CREWMAN	
		class CrewmanB3
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_HelmetCrew_I"};
		};
		
		class CrewmanB2
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_HelmetCrew_I"};
		};
		
		class CrewmanB1
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_HelmetCrew_I"};
		};
				
		class CrewmanR3
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_Tank_black_F"};
		};
		
		class CrewmanR2
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_Tank_black_F"};
		};
		
		class CrewmanR1
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_Tank_black_F"};
		};
		
		////////////////////////////////////////////////////////////PILOT
		class PilotB3
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_PilotHelmetHeli_B","U_B_HeliPilotCoveralls"};
		};
		
		class PilotB2
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_PilotHelmetHeli_B","U_B_HeliPilotCoveralls"};
		};
		
		class PilotB1
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_PilotHelmetHeli_B","U_B_HeliPilotCoveralls"};
		};
				
		class PilotR3
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_PilotHelmetHeli_B","U_O_PilotCoveralls"};
		};
		
		class PilotR2
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_PilotHelmetHeli_B","U_O_PilotCoveralls"};
		};
		
		class PilotR1
		{
			allowedItems[] = {"ACE_microDAGR","ACE_DAGR","H_PilotHelmetHeli_B","U_O_PilotCoveralls"};
		};
							
};
