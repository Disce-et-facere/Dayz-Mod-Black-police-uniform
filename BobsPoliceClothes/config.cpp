/*
*
* Woho Bob's first dayz "mod" xD
*
*/
class CfgPatches
{
	class BobsPoliceClothes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Characters_Pants","DZ_Characters_Shoes","DZ_Characters_Belts","DZ_Characters_Backpacks"};
	};
};
class CfgMods
{
	class BobsPoliceClothes
	{
		type = "mod";
		author = "Bob";
		name = "BobsPoliceClothes";
		dir = "BobsPoliceClothes";
	};
};