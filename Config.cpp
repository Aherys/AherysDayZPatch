class CfgPatches
{
	class AherysDayZPatch
	{
		units[] = {};																		// OSEF - pour les characters
		weapons[] = {};																		// OSEF
		requiredVersion = 0.1;																// Version du jeu - OSEF - meme BI OSEF
		requiredAddons[] = {"DZ_Data"};  									// Addon requis pour faire fonctionner l'item. Si classe externe utilisée, obligatoire sinon kaboom
	};
};

class CfgMods
{
	class AherysDayZPatch
	{
		type = "mod";
  
		class defs
		{
		   class worldScriptModule
		   {
				value = "";
				files[] = {"AherysDayZPatch/WorldScripts"};
		   };
		   class gameScriptModule
		   {
				value = "";
				files[] = {"AherysDayZPatch/GameScripts"};
		   };
		   class missionScriptModule
		   {
				value = "";
				files[] = {"AherysDayZPatch/MissionScripts"};
		   };
		};
	};
};