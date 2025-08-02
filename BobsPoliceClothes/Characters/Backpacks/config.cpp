class CfgPatches
{
	class BobsPoliceClothesBackpacks
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Backpacks"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class SlingBag_ColorBase;
	class KD_XX_LivoniaPD_Slingbag: SlingBag_ColorBase
	{
		scope=2;
		displayName="Bob's PoliceForce Slingbag";
		descriptionShort="Bob's Crappy made, not to much RP Clothing";
		itemsCargoSize[]={10,50};
		attachments[]=
		{
			"Shoulder",
			"WalkieTalkie",
			"Backpack_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\BobsPoliceClothes\Characters\Backpacks\data\BobsPoliceSlingbag_co.paa",
			"\BobsPoliceClothes\Characters\Backpacks\data\BobsPoliceSlingbag_co.paa",
			"\BobsPoliceClothes\Characters\Backpacks\data\BobsPoliceSlingbag_co.paa"
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
