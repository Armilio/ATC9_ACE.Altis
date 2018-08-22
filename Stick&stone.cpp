class CfgPatches
{
	class SticksAndStones_ATC
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.02;
		requiredAddons[]=
		{
			"A3_armor_f_beta_APC_Tracked_02",
			"A3_Armor_F_APC_Wheeled_03",
			"A3_Armor_F_Panther",
			"A3_Armor_F_Marid",
			"A3_Static_F_AA_01",
			"A3_Characters_F",
			"A3_Weapons_F",
			"A3_Ui_F",
			"A3_Drones_F_Soft_F_Gamma_UGV_01",
			"A3_Drones_F_Air_F_Gamma_UAV_01",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F_EPC_MBT_01",
			"A3_Drones_F_Air_F_Gamma_UAV_02",
			"A3_Air_F_Exp_VTOL_01",
			"A3_Air_F_Exp_UAV_04",
			"A3_Weapons_F_Launchers_RPG32",
			"A3_Weapons_F_Tank_Launchers_MRAWS",
			"A3_Weapons_F_Tank_Launchers_Vorona",
			"A3_Weapons_F_Launchers_NLAW"
		};
	};
};
class cfgAddOns
{
	class preloadAddOns
	{
		class SandS
		{
			list[]=
			{
				"SticksAndStones_ATC"
			};
		};
	};
};
class CfgVehicleClasses
{
	class ATC
	{
		displayName="ATC";
	};
};
class CfgInGameUI
{
	class Cursor
	{
		size="0";
		activeWidth=0;
		activeHeight=0;
		activeMinimum=1.1;
		activeMaximum=1.1;
		textOffsetDefault=-0.044;
		textOffsetFormation=-0.050000001;
		textOffsetCustom=-0.050000001;
		textOffsetWaypoint=-0.050000001;
		class Targeting
		{
			class MarkedTarget
			{
				scale=0;
				texture="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
				textureLockable="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				colorLockable[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
				textureFriendly="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				colorFriendly[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
				shadow=0;
			};
			class MarkedTargetNoLos: MarkedTarget
			{
				texture="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
				textureLockable="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				colorLockable[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
				textureFriendly="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				colorFriendly[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
			};
			class Seeker
			{
				texture="\A3\ui_f\data\igui\cfg\targeting\seeker_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
				};
				scale=1;
				shadow=0;
			};
			class SeekerLocked: Seeker
			{
				texture="\A3\ui_f\data\igui\cfg\targeting\seekerLocked_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
				};
			};
			class ImpactPoint: Seeker
			{
				scale=0;
				texture="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
			};
			class ImpactPointNoLOS: ImpactPoint
			{
				texture="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
			};
			class HitPrediction: Seeker
			{
				scale=0;
				texture="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
			};
			class HitConfirm: Seeker
			{
				texture="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				color[]={0.70899999,0.972,0.384,1};
			};
			class KnownTarget: Seeker
			{
				texture="\A3\ui_f\data\igui\cfg\targeting\empty_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0])"
				};
			};
			class LaserTarget: KnownTarget
			{
				scale=1;
				texture="\A3\ui_f\data\igui\cfg\targeting\KnownTarget_ca.paa";
				color[]=
				{
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
					"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
				};
			};
		};
	};
};
class RCWSOptics;
class Optics_Armored;
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;

class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
	};
	class Tank: LandVehicle
	{
		class CommanderOptics;
		weapons[]={};
		magazines[]={};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
				};
			};
		};
		class ViewOptics: ViewOptics
		{
		};
	};
	class Car: LandVehicle
	{
		weapons[]={};
		magazines[]={};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
				};
			};
		};
		class ViewOptics: ViewOptics
		{
		};
	};
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class ViewGunner;
			commanderCanSee="2+4+8+16";
			gunnerCanSee="2+4+8+16";
			driverCanSee="2+4+8+16";
			turretCanSee="2+4+8+16";
		};
		class HitPoints;
		commanderCanSee="2+4+8+16";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		turretCanSee="2+4+8+16";
	};
	class Helicopter_Base_F: Helicopter
	{
		commanderCanSee="2+4+8+16";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		turretCanSee="2+4+8+16";
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
		};
		class Turrets: Turrets
		{
			commanderCanSee="2+4+8+16";
			gunnerCanSee="2+4+8+16";
			driverCanSee="2+4+8+16";
			turretCanSee="2+4+8+16";
			class MainTurret;
			class CopilotTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class Components;
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
	};
	class I_Heli_light_03_F: Heli_light_03_base_F
	{
	};
	class ATC_HELI_LIGHT_B: I_Heli_light_03_F
	{
		side=1;
		faction="BLU_F";
		vehicleClass="ATC";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		weapons[]=
		{
			"M134_minigun",
			"ATC_HYDRA",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"5000Rnd_762x51_Yellow_Belt",
			"ATC_10Rnd_HYDRA70",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
		};
		textureList[]=
		{
			"green",
			1
		};
	};
	class Heli_light_03_unarmed_base_F: Heli_light_03_base_F
	{
	};
	class I_Heli_light_03_unarmed_F: Heli_light_03_unarmed_base_F
	{
	};
	class ATC_HELI_LIGHT_2_B: I_Heli_light_03_unarmed_F
	{
		side=1;
		faction="BLU_F";
		vehicleClass="ATC";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
	};
	class Heli_Attack_02_base_F: Helicopter_Base_F
	{
	};
	class O_Heli_Attack_02_F: Heli_Attack_02_base_F
	{
	};
	class ATC_HELI_ATTACK_O: O_Heli_Attack_02_F
	{
		scope = public;
		//weapons[]=
		//{
		//	"ATC_HYDRA"//"rockets_Skyfire"
		//};
		//magazines[]=
		//{
		//	"ATC_38Rnd_HYDRA70"//"38Rnd_80mm_rockets"
		//};
		vehicleClass="ATC";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		enableManualFire=1;
		ace_hellfire_addLaserDesignator = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=1;
				startEngine=0;
				minElev=-30;
				maxElev=20;
				initElev=15;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=10;
						minAngleX=-45;
						maxAngleX=25;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=10;
						minAngleX=-45;
						maxAngleX=25;
						initAngleY=0;
						minAngleY=-90;
						maxAngleY=90;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				memoryPointGun="machinegun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerAction="Heli_Attack_02_Gunner_SettleIn";
				gunnerInAction="Heli_Attack_02_Gunner_SettleIn";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_02_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex=5;
				showHMD=0;
				weapons[]=
				{
					"gatling_20mm",
					"ace_hellfire_launcher",
					"ATC_HYDRA"
					//"rockets_Skyfire"
				};
				magazines[]=
				{
					"1000Rnd_20mm_shells",
					"PylonRack_1Rnd_ACE_Hellfire_AGM114K",
					"PylonMissile_1Rnd_ACE_Hellfire_AGM114K",//"ATC_2Rnd_SCALPEL"
					"ATC_38Rnd_HYDRA70"
					//"38Rnd_80mm_rockets"
				};
				canEject=0;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.5;
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun";
						passThrough=0.30000001;
						radius=0.34999999;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun";
						passThrough=0.30000001;
						radius=0.34999999;
					};
				};
				class AnimationSources: AnimationSources
				{
					class Muzzle_flash
					{
						source="ammorandom";
						weapon="gatling_20mm";
					};
					class Gatling
					{
						source="revolving";
						weapon="gatling_20mm";
					};
				};	
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
		};		
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
	};
	class B_Heli_Attack_01_F: Heli_Attack_01_base_F
	{
	};
	class ATC_HELI_ATTACK_B: B_Heli_Attack_01_F
	{
		scope = public;
		vehicleClass="ATC";
		enableManualFire=1;
		ace_hellfire_addLaserDesignator = 1;
		weapons[]=
		{
			"ATC_HYDRA",//"rockets_Skyfire"
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"ATC_38Rnd_HYDRA70",//"38Rnd_80mm_rockets"
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot=1;
				CanEject=0;
				startEngine=0;
				minElev=-51;
				maxElev=9;
				initElev=6;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				weapons[]=
				{
					"gatling_20mm",
					"ace_hellfire_launcher", //"ATC_HELLFIRE"
					"ATC_HYDRA"
				};
				magazines[]=
				{
					"1000Rnd_20mm_shells",
					"ATC_38Rnd_HYDRA70",
					"PylonRack_1Rnd_ACE_Hellfire_AGM114K",
					"PylonMissile_1Rnd_ACE_Hellfire_AGM114K"
					//"ATC_2Rnd_AGM114"
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
		};		
	};
	class UAV_01_base_F: Helicopter_Base_F
	{	
		displayName= "UAV (ATC)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
				};
				magazines[]=
				{
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					delete ManSensorComponent;
					delete IRSensorComponent;
				};
			};
		};	
	};	
	class Plane;
	class Plane_Base_F: Plane
	{
		class MarkerLights;
		class Turrets;
		class HitPoints;
	};
	class VTOL_Base_F: Plane_Base_F
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class CargoTurret;
		class MarkerLights: MarkerLights
		{
			class PositionWhite;
		};
		class NewTurret;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class Components;
	};
	class VTOL_01_base_F: VTOL_Base_F
	{
		armor=400;
		//maxOmega=1400;
		maxSpeed=450;
		//draconicForceXCoef=7;
		//draconicForceYCoef=0.2;
		//draconicForceZCoef=0.7;
		weapons[]=
		{
			"CMFlareLauncher_Singles"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=3;
				explosionShielding=4;
				name="HitHull";
				passThrough=0.4;
				visual="Hit_Hull";
				radius=0.40000001;
				minimalHit=0.02;
				depends="Total";
				material=-1;
			};
			class HitEngine: HitHull
			{
				armor=1;
				explosionShielding=8;
				name="HitEngine";
				passThrough=0.15;
				visual="Hit_Engine";
				radius=0.30000001;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitEngine2: HitEngine
			{
				armor=1;
				explosionShielding=8;
				name="HitEngine2";
				passThrough=0.15;
				visual="Hit_Engine2";
				radius=0.30000001;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitFuel: HitHull
			{
				armor=3;
				explosionShielding=9;
				name="HitFuel";
				passThrough=0.15;
				visual="Hit_Fuel";
				radius=0.30000001;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitAvionics: HitHull
			{
				armor=3;
				explosionShielding=2;
				name="HitAvionics";
				passThrough=0.1;
				visual="";
				radius=0.30000001;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitLCRudder: HitHull
			{
				armor=1.5;
				explosionShielding=4;
				name="HitLCRudder";
				passThrough=0.1;
				visual="Hit_RudderL";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitRRudder: HitHull
			{
				armor=1.5;
				explosionShielding=4;
				name="HitRRudder";
				passThrough=0.1;
				visual="Hit_RudderR";
				radius=0.2;
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=6;
				name="HitLRotor";
				passThrough=0.1;
				visual="Hit_RotorL";
				radius=0.25;
				minimalHit=0.0099999998;
				depends="HitEngine2";
			};
			class HitRAileron: HitHull
			{
				armor=1.5;
				explosionShielding=6;
				name="HitRRotor";
				passThrough=0.1;
				visual="Hit_RotorR";
				radius=0.25;
				minimalHit=0.0099999998;
				depends="HitEngine";
			};
			class HitLCElevator: HitLAileron
			{
			};
			class HitRElevator: HitRAileron
			{
			};
			class HitGlass1: HitHull
			{
				armor=0.5;
				explosionShielding=3;
				name="glass1";
				passThrough=0;
				visual="Glass_1";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitGlass2: HitHull
			{
				armor=0.5;
				explosionShielding=3;
				name="glass2";
				passThrough=0;
				visual="Glass_2";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitGlass3: HitHull
			{
				armor=0.5;
				explosionShielding=3;
				name="glass3";
				passThrough=0;
				visual="Glass_3";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitGlass4: HitHull
			{
				armor=0.5;
				explosionShielding=4;
				name="glass4";
				passThrough=0;
				visual="Glass_4";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitGlass5: HitHull
			{
				armor=0.5;
				explosionShielding=4;
				name="glass5";
				passThrough=0;
				visual="Glass_5";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitGlass6: HitHull
			{
				armor=0.5;
				explosionShielding=5;
				name="glass6";
				passThrough=0;
				visual="Glass_6";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitGlass7: HitHull
			{
				armor=0.5;
				explosionShielding=5;
				name="glass7";
				passThrough=0;
				visual="Glass_7";
				radius=0.15000001;
				minimalHit=0.1;
				depends="0";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					delete IRSensorComponent;
					delete VisualSensorComponent;
					delete ActiveRadarSensorComponent;
					delete NVSensorComponent;
					delete LaserSensorComponent;
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
		};	
	};
	class UAV: Plane
	{
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
		class AnimationSources;
		class Components;
	};
	class UAV_02_base_F: UAV
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};	
	};
	class UAV_02_dynamicLoadout_base_F: UAV_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};		
	};
	class B_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F
	{
	};	
	class ATC_UAV_02_dynamicLoadout_F: B_UAV_02_dynamicLoadout_F
	{
		displayName= "UAV Greyhawk (ATC)";
		weapons[]=
		{
			"Laserdesignator_mounted"
		};
		magazines[]=
		{
			"Laserbatteries"
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
				};
			};
		};	
	};	
	class UAV_04_base_F: UAV
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
				};
			};
		};	
		class Turrets
		{
			class MainTurret: NewTurret
			{
				isCopilot=0;
				minElev=-90;
				maxElev=5;
				initElev=-45;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=-1;
				body="mainturret";
				gun="maingun";
				animationSourceBody="mainturret";
				animationSourceGun="maingun";
				memoryPointGun="pos_pip1";
				memoryPointGunnerOptics="pos_pip1_dir";
				gunBeg="pos_pip1_dir";
				gunEnd="pos_pip1";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics=1;
				turretInfoType="RscOptics_UAV_gunner";
				stabilizedInAxes=3;
				enableManualFire=0;
				showAllTargets=4;
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				GunnerCompartments="Compartment1";
				gunnerInAction="Disabled";
				gunnerAction="Disabled";
				startEngine=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",
					0.099999994,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",
					0.099999994,
					1,
					10
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-35;
						maxAngleX=85;
						initAngleY=0;
						minAngleY=-130;
						maxAngleY=130;
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
						directionStabilized=1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="M";
						initFov=0.1;
						minFov=0.1;
						maxFov=0.1;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName="N";
						initFov=0.0286;
						minFov=0.0286;
						maxFov=0.0286;
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};
	};	
	class Helicopter_Base_H: Helicopter_Base_F
	{
		commanderCanSee="2+4+8+16";
		turretCanSee="2+4+8+16";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		class Turrets: Turrets
		{
			commanderCanSee="2+4+8+16";
			turretCanSee="2+4+8+16";
			gunnerCanSee="2+4+8+16";
			driverCanSee="2+4+8+16";
			class MainTurret;
			class CopilotTurret: MainTurret
			{
				turretCanSee="2+4+8+16";
			};
		};
	};
	class Heli_Light_02_base_F: Helicopter_Base_H
	{
	};
	class O_Heli_Light_02_F: Heli_Light_02_base_F
	{
	};
	class ATC_HELI_LIGHT_O: O_Heli_Light_02_F
	{
		vehicleClass="ATC";
		turretCanSee="2+4+8+16";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="copilot_Heli_Light_02";
				gunnerInAction="copilot_Heli_Light_02";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				memoryPointsGetInCargo="pos copilot";
				memoryPointsGetInCargoDir="pos copilot dir";
				canEject=0;
				selectionFireAnim="";
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				turretCanSee="2+4+8+16";
			};
		};
		weapons[]=
		{
			"LMG_Minigun_heli",
			"ATC_SKYFIRE60",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"2000Rnd_65x39_Belt_Tracer_Green_Splash",
			"ATC_12Rnd_SKYFIRE60",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class Heli_Light_02_unarmed_base_F: Heli_Light_02_base_F
	{
	};
	class O_Heli_Light_02_unarmed_F: Heli_Light_02_unarmed_base_F
	{
	};
	class ATC_HELI_LIGHT_2_O: O_Heli_Light_02_unarmed_F
	{
		vehicleClass="ATC";
		turretCanSee="2+4+8+16";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="copilot_Heli_Light_02";
				gunnerInAction="copilot_Heli_Light_02";
				precisegetinout=1;
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				memoryPointsGetInCargo="pos copilot";
				memoryPointsGetInCargoDir="pos copilot dir";
				canEject=0;
				selectionFireAnim="";
				minElev=-50;
				maxElev=30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				turretCanSee="2+4+8+16";
			};
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO"
		};
		textureList[]=
		{
			"opfor",
			1
		};
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
		commanderCanSee="2+4+8+16";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				turretCanSee="2+4+8+16";
			};
		};
	};
	class Heli_Transport_04_base_F: Helicopter_Base_H
	{
		commanderCanSee="2+4+8+16";
		gunnerCanSee="2+4+8+16";
		driverCanSee="2+4+8+16";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				turretCanSee="2+4+8+16";
			};
		};
	};
	class MRAP_01_base_F: Car
	{
	};
	class MRAP_01_gmg_base_F: MRAP_01_base_F
	{
	};
	class B_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
	};
	class ATC_MRAP_GMG: B_MRAP_01_gmg_F
	{
		vehicleClass="ATC";
		class RenderTargets
		{
			class Gunner_display
			{
				rendertarget="rendertarget0";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP0_dir";
					pointposition="PIP0_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
			class Driver_display
			{
				rendertarget="rendertarget1";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP1_dir";
					pointposition="PIP1_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
		};
	};
	class MRAP_01_hmg_base_F: MRAP_01_gmg_base_F
	{
	};
	class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
	};
	class ATC_MRAP_HMG: B_MRAP_01_hmg_F
	{
		vehicleClass="ATC";
		class RenderTargets
		{
			class Gunner_display
			{
				rendertarget="rendertarget0";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP0_dir";
					pointposition="PIP0_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
			class Driver_display
			{
				rendertarget="rendertarget1";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP1_dir";
					pointposition="PIP1_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
	};
	class AA_01_base_F: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.083329998;
					minFov=0.041669998;
					maxFov=0.083329998;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
			};
		};
	};
	class B_static_AA_F: AA_01_base_F
	{
	};
	class HMG_01_base_F: StaticMGWeapon
	{
	};
	class B_HMG_01_F: HMG_01_base_F
	{
	};
	class ATC_STATIC_MG_B1: B_HMG_01_F
	{
		vehicleClass="ATC";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-20;
				maxElev=35;
				weapons[]=
				{
					"HMG_static"
				};
				magazines[]=
				{
					"500Rnd_127x99_mag_Tracer_Red",
					"500Rnd_127x99_mag_Tracer_Red"
				};
				gunnerAction="gunner_static_low01";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";
			};
		};
	};
	class O_HMG_01_F: HMG_01_base_F
	{
	};
	class ATC_STATIC_MG_R1: O_HMG_01_F
	{
		vehicleClass="ATC";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-20;
				maxElev=35;
				weapons[]=
				{
					"HMG_static"
				};
				magazines[]=
				{
					"500Rnd_127x99_mag_Tracer_Green",
					"500Rnd_127x99_mag_Tracer_Green"
				};
				gunnerAction="gunner_static_low01";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";
			};
		};
	};
	class HMG_01_high_base_F: HMG_01_base_F
	{
	};
	class B_HMG_01_high_F: HMG_01_high_base_F
	{
	};
	class ATC_STATIC_MG_B2: B_HMG_01_high_F
	{
		vehicleClass="ATC";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-20;
				maxElev=35;
				weapons[]=
				{
					"HMG_static"
				};
				magazines[]=
				{
					"500Rnd_127x99_mag_Tracer_Red",
					"500Rnd_127x99_mag_Tracer_Red"
				};
				gunnerAction="gunner_static_low01";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";
			};
		};
	};
	class O_HMG_01_high_F: HMG_01_high_base_F
	{
	};
	class ATC_STATIC_MG_R2: O_HMG_01_high_F
	{
		vehicleClass="ATC";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-20;
				maxElev=35;
				weapons[]=
				{
					"HMG_static"
				};
				magazines[]=
				{
					"500Rnd_127x99_mag_Tracer_Green",
					"500Rnd_127x99_mag_Tracer_Green"
				};
				gunnerAction="gunner_static_low01";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
				};
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";
			};
		};
	};
	class MRAP_02_base_F: Car
	{
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F
	{
	};
	class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F
	{
	};
	class ATC_IFRIT_HMG: O_MRAP_02_hmg_F
	{
		vehicleClass="ATC";
		class RenderTargets
		{
			class Gunner_display
			{
				rendertarget="rendertarget2";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP0_dir";
					pointposition="PIP0_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
			class Driver_display
			{
				rendertarget="rendertarget1";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP1_dir";
					pointposition="PIP1_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
		};
	};
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F
	{
	};
	class O_MRAP_02_gmg_F: MRAP_02_gmg_base_F
	{
	};
	class ATC_IFRIT_GMG: O_MRAP_02_gmg_F
	{
		vehicleClass="ATC";
		class RenderTargets
		{
			class Gunner_display
			{
				rendertarget="rendertarget2";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP0_dir";
					pointposition="PIP0_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
			class Driver_display
			{
				rendertarget="rendertarget1";
				class CameraView1
				{
					fov=0.69999999;
					pointdirection="PIP1_dir";
					pointposition="PIP1_pos";
					renderquality=2;
					rendervisionmode=0;
				};
			};
		};
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class HitPoints;
	};
	class MBT_01_base_F: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F
	{
	};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
	{
		class AnimationSources;
	};
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
	{
	};
	class ATC_B_MBT_01_TUSK_F: B_MBT_01_TUSK_F
	{
		displayName="Merkava TUSK I (ATC)";
		//armor = 900;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};	
				weapons[]=
				{
					"cannon_105mm",
					"LMG_M200_body"
				};
				magazines[]=
				{
					"16Rnd_105mm_APFSDS_ATC_Red",
					"4Rnd_105mm_HEAT_MP_ATC_Red",
					"6Rnd_105mm_HE_ATC",
					"2000Rnd_65x39_belt",
					"2000Rnd_65x39_belt"
				};
			};
		};	
	};	
	class MBT_02_base_F : Tank_F {
	};
	class O_MBT_02_base_F : MBT_02_base_F {};
	class O_MBT_02_cannon_F : O_MBT_02_base_F {};
	class APC_Tracked_02_base_F: Tank_F
	{
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		class Components;
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"autocannon_30mm_CTWS",
					"LMG_M200",
					"missiles_titan"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Green",
					"60Rnd_30mm_APFSDS_shells_Tracer_Green",
					"1000Rnd_65x39_Belt_Green",
					"2Rnd_GAT_missiles_O"
				};
			};
		};
	};
	class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					//class VisualSensorComponent: SensorTemplateVisual 
					//{	
					//	animDirection = "mainTurret";
					//};
					 class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=4500;
							maxRange=4500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget{
							minRange=3000;
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						groundNoiseDistanceCoef = 0.1;
						maxGroundNoiseDistance 	= 50; 
						typeRecognitionDistance=3000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						minSpeedThreshold=30;
						maxSpeedThreshold=90;
					};
				};
			};
		};
	    class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{	
				weapons[]=
				{
					"autocannon_35mm",
					"missiles_titan"
				};
				magazines[]=
				{
					"680Rnd_35mm_AA_shells_Tracer_Green",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles"
				};
				class OpticsIn: Optics_Gunner_AAA_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			};		
		};
	};
	class Car_F: Car
	{
	};
	class UGV_01_base_F: Car_F
	{
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		displayName= "UGV RCWS (ATC)";
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[]=
				{	
					"HMG_127_UGV",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{	
					"500Rnd_127x99_mag_Tracer_Red",
					"Laserbatteries"
				};	
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					initFov=0.46669999;
					maxFov=0.46669999;
					minFov=0.035;
					directionStabilized=1;
				};
			};
		};		
	};	
	class Wheeled_APC_F: Car_F
	{
		class CommanderOptics;
	};
	class APC_Wheeled_03_base_F: Wheeled_APC_F
	{
	};
	class I_APC_Wheeled_03_base_F: APC_Wheeled_03_base_F
	{
	};
	class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F
	{
		side=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"autocannon_30mm_CTWS",
					"LMG_coax_ext",
					"missiles_titan"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"2Rnd_GAT_missiles"
				};
			};
		};
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
	};
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F
	{
	};
	class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"nvg"
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal",
						"nvg"
					};
					thermalMode[]={4,5};
				};
			};
		};
	};
	class APC_Tracked_01_base_F: Tank_F
	{
		class HitPoints
		 {
		class HitHull{
			};	
			class HitEngine{
			};
		};	
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"nvg"
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
	{
		class components;
	};
	class B_APC_Tracked_01_rcws_F: B_APC_Tracked_01_base_F
	{
		//armor = 350;
		class Turrets:Turrets { 
			class MainTurret : MainTurret {
					weapons[] = {"HMG_127_APC"};
					magazines[] = {"500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Red"};
			};
		};	
	};
	class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F
	{
		//armor = 350;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					//class VisualSensorComponent: SensorTemplateVisual 
					//{	
					//	animDirection = "mainTurret";
					//};
					 class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=4500;
							maxRange=4500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget{
							minRange=3000;
							maxRange=3000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						groundNoiseDistanceCoef = 0.1;
						maxGroundNoiseDistance 	= 50; 
						typeRecognitionDistance=3000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						minSpeedThreshold=30;
						maxSpeedThreshold=90;
					};
				};
			};
		};
	    class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{	
				weapons[]=
				{
					"autocannon_35mm",
					"missiles_titan"
				};
				magazines[]=
				{
					"680Rnd_35mm_AA_shells_Tracer_Red",
					"4Rnd_Titan_long_missiles",
					"4Rnd_Titan_long_missiles"
				};
			};		
		};
	};
	class strategic;
	class ReammoBox: Strategic
	{};
	class WeaponHolder: ReammoBox
	{};	
	class Launcher_Base_F: WeaponHolder
	{};	
	class Weapon_launch_RPG32_F: Launcher_Base_F
	{};	
	class ATC_Weapon_launch_RPG32_F: Weapon_launch_RPG32_F
	{
		scope=2;
		scopeCurator=2;
		displayName="RPG32 (ATC)";
		author="ATC";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Launchers";
		vehicleClass="WeaponsSecondary";
		class TransportWeapons
		{
			class ATC_launch_RPG32_F
			{
				weapon="ATC_launch_RPG32_F";
				count=1;
			};
		};
		class TransportMagazines
		{
			class ATC_RPG32_F
			{
				magazine="ATC_RPG32_F";
				count=1;
			};
		};
	};	
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
	};
	class CA_LauncherMagazine: CA_Magazine
	{
	};
	class VehicleMagazine: CA_Magazine
	{
	};
	class 8Rnd_LG_scalpel: VehicleMagazine
	{
	};
	class 24Rnd_PG_missiles: VehicleMagazine
	{
	};
	class ATC_38Rnd_HYDRA70: 24Rnd_PG_missiles
	{
		ammo="ATC_R_70mm";
		count=38;
		weight=400;
		displayName="Rocket 70mm";
		displayNameShort="Rocket 70mm";
	};
	class ATC_10Rnd_HYDRA70: ATC_38Rnd_HYDRA70
	{
		count=10;
		weight=200;
	};
	class 2Rnd_AAA_missiles: VehicleMagazine
	{
	};
	class ATC_2Rnd_AGM114: 2Rnd_AAA_missiles
	{
		ammo="ATC_AGM114_M";
		displayName="AT Missile";
		displayNameShort="AT Missile";
	};
	class 12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
	};
	class ATC_12Rnd_SKYFIRE60: 12Rnd_PG_missiles
	{
		ammo="ATC_R_60mm";
		displayName="Rocket 60mm";
		displayNameShort="Rocket 60mm";
	};
	class 4Rnd_GAA_missiles: VehicleMagazine
	{
	};
	class 4Rnd_Titan_long_missiles: 4Rnd_GAA_missiles
	{
		count=2;
	};
	class Titan_AA: CA_LauncherMagazine
	{
	};
	class Titan_AP: Titan_AA
	{
	};
	class Titan_AT: Titan_AA
	{
	};
	class ATC_MAG_Titan_AT: Titan_AT
	{
		displayName="Titan AT missile (ATC)";
		displayNameShort="Titan AT (ATC)";
		ammo="ATC_M_Titan_AT";
		mass=130;
	};
	class ATC_MAG_Titan_AT_B: Titan_AT
	{
		displayName="Titan AT missile (ATC)";
		displayNameShort="Titan AT (ATC)";
		ammo="ATC_M_Titan_AT_B";
		mass=130;
	};
	class 5Rnd_GAT_missiles: VehicleMagazine
	{
	};
	class 2Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		reloadTime=10;
		magazineReloadTime=15;
	};
	class ATC_2Rnd_GAT_missiles: 2Rnd_GAT_missiles
	{
		reloadTime=15;
		magazineReloadTime=15;
	};
	class ATC_1Rnd_GAT_missiles: 2Rnd_GAT_missiles
	{
		count=1;
		ammo="ATC_titan_veh";
	};
	class ATC_2Rnd_TAG_missiles: ATC_2Rnd_GAT_missiles
	{
		reloadTime=15;
		magazineReloadTime=15;
		ammo="ATC_titan_veh_B";
	};
	class ATC_1Rnd_TAG_missiles: ATC_2Rnd_GAT_missiles
	{
		count=1;
		ammo="ATC_titan_veh_B";
	};
	class 30Rnd_120mm_HE_shells : VehicleMagazine{};
	class 30Rnd_120mm_APFSDS_shells : 30Rnd_120mm_HE_shells{};
	class 32Rnd_120mm_APFSDS_shells  : 30Rnd_120mm_APFSDS_shells{};
	class 24Rnd_125mm_APFSDS  : 32Rnd_120mm_APFSDS_shells{};
	class 40Rnd_105mm_APFSDS : 24Rnd_125mm_APFSDS{};
	class 40Rnd_105mm_APFSDS_T_Red : 40Rnd_105mm_APFSDS {};
	class 16Rnd_105mm_APFSDS_ATC_Red : 40Rnd_105mm_APFSDS_T_Red
	{
		count = 16;
	};

	class 16Rnd_120mm_HE_shells : 30Rnd_120mm_HE_shells{};
	class 12Rnd_125mm_HE : 16Rnd_120mm_HE_shells{};
	class 12Rnd_125mm_HEAT : 12Rnd_125mm_HE{};
	class 20Rnd_105mm_HEAT_MP : 12Rnd_125mm_HEAT{};
	class 20Rnd_105mm_HEAT_MP_T_Red : 20Rnd_105mm_HEAT_MP{}; 
	class 4Rnd_105mm_HEAT_MP_ATC_Red : 20Rnd_105mm_HEAT_MP_T_Red 
	{
		count = 4;
	};
	class 6Rnd_105mm_HE_ATC : 4Rnd_105mm_HEAT_MP_ATC_Red 
	{
		displayName = "105mm HE";
		displayNameShort = "HE";
		ammo = "ATC_105mm_HE";
		count = 6;
	};
	class RPG32_F: CA_LauncherMagazine
	{};
	class MRAWS_HEAT_F: CA_LauncherMagazine
	{};
	class MRAWS_HE_F: MRAWS_HEAT_F
	{};
	class ATC_RPG32_F: MRAWS_HEAT_F
	{
		author="ATC";
		displayName="RPG32(ATC)";
		descriptionShort="$STR_A3_CfgMagazines_LAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		
	};	
	class ATC_RPG32_HE_F: MRAWS_HE_F
	{
		author="ATC";
		displayName="RPG32-HE(ATC)";
		displayNameShort="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_LAW2";
		model="\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
	};
	class Vorona_HEAT: CA_LauncherMagazine
	{
	};
	class Vorona_HE: Vorona_HEAT
	{
	};
	class ATC_NLAW_F: Vorona_HEAT
	{
		author="ATC";
		scope=2;
		displayName="NLAW HEAT (ATC)";
		descriptionShort="$STR_A3_CfgMagazines_NLAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		picture="\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		modelSpecial="\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
		model="\A3\weapons_f\launchers\nlaw\nlaw_proxy";
	};
	class ATC_NLAW_HE_F: Vorona_HE
	{
		author="ATC";
		scope=2;
		displayName="NLAW HE (ATC)";
		descriptionShort="$STR_A3_CfgMagazines_NLAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		picture="\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		modelSpecial="\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
		model="\A3\weapons_f\launchers\nlaw\nlaw_proxy";
	};
};
	
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_MRAWS_base_F: Launcher_Base_F
	{
	};	
	class launch_MRAWS_olive_F: launch_MRAWS_base_F
	{
	};	
	class launch_MRAWS_olive_rail_F: launch_MRAWS_olive_F
	{};
	class ATC_launch_RPG32_F: launch_MRAWS_olive_rail_F
	{
		author="ATC";
		scope=2;
		displayName="RPG32 (ATC)";
		model="\A3\weapons_f\launchers\RPG32\rpg32_F.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_RPG32_X_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		magazines[]=
		{
			"ATC_RPG32_F",
			"ATC_RPG32_HE_F"
		};
	};
	class launch_Vorona_base_F: Launcher_Base_F
	{
		
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				thermalMode[]={4,5};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.0583333,0.0291667};
				discreteInitIndex=0;
			};
		};
	};	
	class ATC_launch_NLAW_F: launch_Vorona_base_F
	{
		author="ATC";
		_generalMacro="launch_NLAW_F";
		scope=2;
		displayName="NLAW (ATC)";
		reloadAction="ReloadRPG";
		//recoil="recoil_nlaw";
		//shotPos="muzzlePos2";
		//shotEnd="muzzleEnd2";
		model="\A3\weapons_F\launchers\nlaw\nlaw_F.p3d";
		picture="\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Launchers\NLAW\Data\Anim\NLAW.rtm"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",
			0.17782794,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",
			1,
			1,
			10
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_NLAW1";
		magazines[]=
		{
			"ATC_NLAW_F",
			"ATC_NLAW_HE_F"
		};
	};
	
	class Default;
	class Binocular: Default
	{
	};
	class Laserdesignator: Binocular
	{
	};
	class Laserdesignator_02: Laserdesignator
	{
	};
	class ATC_Laserdesignator_B: Laserdesignator
	{
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
	class ATC_Laserdesignator_R: Laserdesignator_02
	{
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
	class launch_Titan_base: Launcher_Base_F
	{
	};
	class launch_Titan_short_base: launch_Titan_base
	{
	};
	class ATC_TITAN_AA: launch_Titan_base
	{
		lockAcquire = 0;
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.083329998;
				opticsZoomMax=0.041669998;
				opticsZoomInit=0.083329998;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"Nvg"
				};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.083329998,0.041669998};
				discreteInitIndex=0;
			};
		};
	};
	class ATC_TITAN_AT: ATC_TITAN_AA
	{
		model="\A3\Weapons_F_Beta\Launchers\Titan\Titan_short.p3d";
		modelSpecial="\A3\Weapons_F_Beta\Launchers\Titan\Titan_short_loaded.p3d";
		picture="\A3\Weapons_F_Beta\Launchers\Titan\Data\UI\gear_titan_short_CA.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		displayName="$STR_CfgWeapons_launch_MPRL_short_F0";
		descriptionShort="$STR_CfgWeapons_launch_MPRL_short_F1";
		lockAcquire = 0;
		//canLock=0;
		class WeaponSlotsInfo
		{
			mass=140;
		};
		inertia=1.1;
		recoil="recoil_titan_short";
		magazines[]=
		{
			"Titan_AT"
		};
		class Library
		{
			libTextDesc="$STR_A3_cfgWeapons_launch_MPRL_short_Library0";
		};
	};
	class ATC_TITAN_AA_B: ATC_TITAN_AA
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="launch_B_Titan_F";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
			"A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_CO.paa"
		};
	};
	class ATC_TITAN_AA_O: ATC_TITAN_AA
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="launch_O_Titan_F";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_OPFOR_CO.paa",
			"A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_OPFOR_CO.paa"
		};
	};
	class ATC_TITAN_AA_starter: ATC_TITAN_AA
	{
		displayName="TITAN AA (ATC)(start)";
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="launch_O_Titan_F";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_INDP_CO.paa",
			"A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_INDP_CO.paa"
		};
	};
	class ATC_TITAN_AT_B: ATC_TITAN_AT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="Titan AT blufor (ATC)";
		_generalMacro="launch_B_Titan_short_F";
		scope=2;
		magazines[]=
		{
			"Titan_AT"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
			"A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_CO.paa"
		};
	};
	class ATC_TITAN_AT_O: ATC_TITAN_AT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="Titan AT opfor (ATC)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa",
			"A3\Weapons_F_Beta\Launchers\Titan\Data\TubeM_CO.paa"
		};
	};
	class LauncherCore;
	class RocketPods: LauncherCore
	{
	};
	class missiles_SCALPEL: RocketPods
	{
	};
	class MissileLauncher: LauncherCore
	{
	};
	class missiles_ASRAAM: MissileLauncher
	{
	};
	class ATC_HELLFIRE: missiles_ASRAAM
	{
		lockAcquire=1;
		displayName="HELLFIRE AGM114";
		displayNameShort="HELLFIRE AGM114";
		magazines[]=
		{
			"ATC_2Rnd_AGM114"
		};
	};
	class missiles_titan: MissileLauncher
	{
		reloadTime=5;
		magazineReloadTime=120;
	};	
	class missiles_DAGR: RocketPods
	{
	};
	class ATC_HYDRA: missiles_DAGR
	{
		canLock=0;
		weaponLockDelay=0;
		missileLockCone=0;
		WeaponLockSystem=0;
		displayName="CRV7 Rocket Pod";
		displayNameShort="CRV7 Rocket Pod";
		magazines[]=
		{
			"ATC_38Rnd_HYDRA70",
			"ATC_10Rnd_HYDRA70"
		};
		modes[]=
		{
			"Burst"
		};
		class Burst: RocketPods
		{
			burst=1;
			reloadTime=0.079999998;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\weapons\Rockets\missile_2",
					1.1220185,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundFly[]=
			{
				"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
				1,
				1.9,
				700
			};
			autoFire=1;
			soundContinuous=0;
			minRange=300;
			minRangeProbab=0.25;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=1300;
			maxRangeProbab=0.1;
			textureType="fullAuto";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
	};
	class ATC_SKYFIRE60: missiles_DAGR
	{
		canLock=0;
		weaponLockDelay=0;
		missileLockCone=0;
		WeaponLockSystem=0;
		displayName="Skyfire Rocket Pod";
		displayNameShort="Skyfire Rocket Pod";
		magazines[]=
		{
			"ATC_12Rnd_SKYFIRE60"
		};
	};
	class ATC_missiles_titan: missiles_titan
	{
		reloadTime=10;
		magazineReloadTime=10;
		magazines[]=
		{
			"ATC_2Rnd_GAT_missiles",
			"ATC_2Rnd_TAG_missiles",
			"ATC_1Rnd_GAT_missiles",
			"ATC_1Rnd_TAG_missiles"
		};
	};
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem: InventoryItem_Base_F
	{
	};
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo: VestItem
		{
		};
	};
	class V_TacVest_khk: Vest_Camo_Base
	{
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply100";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class V_TacVest_oli: V_TacVest_khk
	{
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply100";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=7;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=7;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=7;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class V_TacVest_camo: Vest_Camo_Base
	{
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply100";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=9;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=9;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=9;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
	class CannonCore;
	class cannon_105mm: CannonCore
	{
		magazines[]=
		{
			"40Rnd_105mm_APFSDS",
			"40Rnd_105mm_APFSDS_T_Red",
			"40Rnd_105mm_APFSDS_T_Green",
			"40Rnd_105mm_APFSDS_T_Yellow",
			"20Rnd_105mm_HEAT_MP",
			"20Rnd_105mm_HEAT_MP_T_Red",
			"20Rnd_105mm_HEAT_MP_T_Green",
			"20Rnd_105mm_HEAT_MP_T_Yellow",
			"16Rnd_105mm_APFSDS_ATC_Red", 
			"4Rnd_105mm_HEAT_MP_ATC_Red", 
			"6Rnd_105mm_HE_ATC" 
		};
	};
	class gatling_30mm: CannonCore
	{
		ballisticsComputer=2;
	};
	class gatling_20mm: CannonCore
	{
		ballisticsComputer=2;
	};
};
class CfgAmmo
{
	class ShellCore;
	class ShellBase : ShellCore {};
	class BulletCore;
	class BulletBase : BulletCore {};
	class MissileCore;
	class MissileBase: MissileCore
	{
	};
	class ammo_Penetrator_Base: ShellBase
	{
	};	
	class M_NLAW_AT_F: MissileBase
	{
		hit=300;
		explosive=0.5;
		submunitionAmmo="ammo_Penetrator_NLAW";
		submunitionDirectionType="SubmunitionTargetDirection";
		submunitionInitSpeed=1000;
	};
	class ammo_Penetrator_NLAW: ammo_Penetrator_Base
	{
		caliber=45.6667;
		warheadName="AP";
		typicalSpeed=1000;
		hit=500.35001;
	};	
	class ammo_Penetrator_Vorona: ammo_Penetrator_Base
	{
		//caliber=50;
		//warheadName="TandemHEAT";
		//hit=515.08002;
	};
	class ammo_Penetrator_MRAAWS: ammo_Penetrator_Base
	{
		caliber=33.333302;
		warheadName="HEAT";
		hit=435.92999;
	};
	class ammo_Penetrator_RPG32V: ammo_Penetrator_Base
	{
		caliber=43.333302;
		warheadName="TandemHEAT";
		hit=422.72;
	};
	class ammo_Penetrator_Titan_AT: ammo_Penetrator_Base
	{
	//	caliber=60;
	//	hit=515.19;
	};
	class ammo_Penetrator_Titan_AT_long: ammo_Penetrator_Base
	{
		caliber=60;
		warheadName="TandemHEAT";
		hit=550.91998;
	};
	class RocketCore;
	class RocketBase: RocketCore
	{
	};
	class R_PG32V_F: RocketBase
	{
		hit=150;
		indirectHit=28;
		indirectHitRange=2.5;
		warheadName="HEAT";
	};	
	class R_80mm_HE: RocketBase
	{
	};
	class ATC_R_70mm: R_80mm_HE
	{
		hit=100;
		indirectHit=45;
		indirectHitRange=8;
		maxSpeed=500;
		airFriction=0.1;
		timeToLive=50;
		maxControlRange=6000;
	};
	class M_Air_AA: MissileBase
	{
		class components;
	};
	class ATC_R_60mm: ATC_R_70mm
	{
		hit=80;
		indirectHit=30;
		indirectHitRange=8;
		cost=250;
		maxSpeed=490;
		thrustTime=1.1;
		thrust=620;
		airFriction=0.2;
		timeToLive=20;
	};
	class M_Titan_AT: MissileBase
	{
	};
	class Sh_120mm_HE : ShellBase {};
	class ATC_105mm_HE : Sh_120mm_HE 
	{
		hit = 180;
		indirectHit = 50;
		indirectHitRange = 5;
		dangerRadiusHit = 140;
	};
	class B_35mm_AA : BulletBase {};
	class B_35mm_AA_Tracer_Green : B_35mm_AA {
		hit = 60;
		indirectHit = 4;
		indirectHitRange = 2;
		explosive = 0.4;
	};
	
};
class cfgMods
{
	author="76561198046412505";
	timepacked="1442341859";
};
