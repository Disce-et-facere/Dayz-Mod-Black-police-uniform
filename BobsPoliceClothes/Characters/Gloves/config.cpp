class CfgPatches
{
	class BobsPoliceClothesGloves
	{
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Gloves"};
		units[] = {};
	};
};
class CfgVehicles
{	
	class SurgicalGloves_ColorBase;
	class KD_XX_LivoniaPD_Gloves: SurgicalGloves_ColorBase
	{
		scope=2;
		displayName="Bob's PoliceForce Gloves";
		descriptionShort="Bob's not to much RP Clothing ;)";
		hiddenSelectionsTextures[]=
		{
			"\BobsPoliceClothes\Characters\Gloves\data\BobsPoliceGloves_co.paa",
			"\BobsPoliceClothes\Characters\Gloves\data\BobsPoliceGloves_co.paa",
			"\BobsPoliceClothes\Characters\Gloves\data\BobsPoliceGloves_co.paa"
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
