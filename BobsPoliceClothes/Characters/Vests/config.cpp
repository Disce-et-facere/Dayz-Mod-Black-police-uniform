class CfgPatches
{
	class BobsPoliceClothesVests
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Vests"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class PressVest_ColorBase;
	class KD_XX_LivoniaPD_Vest: PressVest_ColorBase
	{
		scope=2;
		displayName="Bob's PoliceForce Vest";
		descriptionShort="Bob's not to much RP Clothing ;)";
		itemsCargoSize[]={10,6};
		hiddenSelectionsTextures[]=
		{
			"\BobsPoliceClothes\Characters\Vests\data\BobsPoliceVest_co.paa",
			"\BobsPoliceClothes\Characters\Vests\data\BobsPoliceVest_co.paa",
			"\BobsPoliceClothes\Characters\Vests\data\BobsPoliceVest_co.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
		};
	};
};
