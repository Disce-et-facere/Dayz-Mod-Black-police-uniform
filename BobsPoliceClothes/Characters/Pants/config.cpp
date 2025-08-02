class CfgPatches
{
	class BobsPoliceClothesPants
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Pants"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class PolicePants;
	class KD_XX_LivoniaPD_Pants: PolicePants
	{
		scope=2;
		displayName="Bob's PoliceForce Pants";
		descriptionShort="Bob's not to much RP Clothing ;)";
		itemsCargoSize[]={10,10};
		hiddenSelectionsTextures[]=
		{
			"\BobsPoliceClothes\Characters\Pants\data\BobsPolicePants_co.paa",
			"\BobsPoliceClothes\Characters\Pants\data\BobsPolicePants_co.paa",
			"\BobsPoliceClothes\Characters\Pants\data\BobsPolicePants_co.paa"
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
