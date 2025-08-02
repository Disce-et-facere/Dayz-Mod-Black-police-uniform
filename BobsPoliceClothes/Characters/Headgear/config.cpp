class CfgPatches
{
	class BobsPoliceClothesHeadgear
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Headgear"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class PoliceCap;
	class KD_XX_LivoniaPD_Cap: PoliceCap
	{
		scope=2;
		displayName="Bob's PoliceForce Cap";
		descriptionShort="Bob's not to much RP Clothing ;)";
		hiddenSelectionsTextures[]=
		{
			"\BobsPoliceClothes\Characters\Headgear\data\BobsPoliceCap_co.paa",
			"\BobsPoliceClothes\Characters\Headgear\data\BobsPoliceCap_co.paa",
			"\BobsPoliceClothes\Characters\Headgear\data\BobsPoliceCap_co.paa"
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
