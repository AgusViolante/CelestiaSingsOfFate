// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CelestiaSingsOfFate : ModuleRules
{
	public CelestiaSingsOfFate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CelestiaSingsOfFate",
			"CelestiaSingsOfFate/Variant_Platforming",
			"CelestiaSingsOfFate/Variant_Platforming/Animation",
			"CelestiaSingsOfFate/Variant_Combat",
			"CelestiaSingsOfFate/Variant_Combat/AI",
			"CelestiaSingsOfFate/Variant_Combat/Animation",
			"CelestiaSingsOfFate/Variant_Combat/Gameplay",
			"CelestiaSingsOfFate/Variant_Combat/Interfaces",
			"CelestiaSingsOfFate/Variant_Combat/UI",
			"CelestiaSingsOfFate/Variant_SideScrolling",
			"CelestiaSingsOfFate/Variant_SideScrolling/AI",
			"CelestiaSingsOfFate/Variant_SideScrolling/Gameplay",
			"CelestiaSingsOfFate/Variant_SideScrolling/Interfaces",
			"CelestiaSingsOfFate/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
