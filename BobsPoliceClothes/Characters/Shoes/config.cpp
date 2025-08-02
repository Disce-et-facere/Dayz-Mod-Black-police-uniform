class CfgPatches
{
	class BobsPoliceClothesShoes
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Shoes"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class MilitaryBoots_ColorBase;
	class KD_XX_LivoniaPD_Boots: MilitaryBoots_ColorBase
	{
		scope=2;
		displayName="Bobs PoliceForce Boots";
		descriptionShort="Bob's not to much RP Clothing ;)";
		hiddenSelectionsTextures[]=
		{
			"\BobsPoliceClothes\Characters\Shoes\data\BobsPoliceBoots_co.paa",
			"\BobsPoliceClothes\Characters\Shoes\data\BobsPoliceBoots_co.paa",
			"\BobsPoliceClothes\Characters\Shoes\data\BobsPoliceBoots_co.paa"
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
