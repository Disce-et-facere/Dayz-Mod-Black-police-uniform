class CfgPatches
{
	class BobsPoliceClothesTops
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Tops"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class PoliceJacket;
	class KD_XX_LivoniaPD_Jacket: PoliceJacket
	{
		scope=2;
		displayName="Bob's PoliceForce Jacket";
		descriptionShort="Bob's not to much RP Clothing ;)";
		itemsCargoSize[]={10,12};
		hiddenSelectionsTextures[]=
		{
			"\BobsPoliceClothes\Characters\Tops\data\BobsPoliceJacket_co.paa",
			"\BobsPoliceClothes\Characters\Tops\data\BobsPoliceJacket_co.paa",
			"\BobsPoliceClothes\Characters\Tops\data\BobsPoliceJacket_co.paa"
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
