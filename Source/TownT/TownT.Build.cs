// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TownT : ModuleRules
{
	public TownT(ReadOnlyTargetRules Target) : base(Target)
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
			"TownT",
			"TownT/Variant_Platforming",
			"TownT/Variant_Platforming/Animation",
			"TownT/Variant_Combat",
			"TownT/Variant_Combat/AI",
			"TownT/Variant_Combat/Animation",
			"TownT/Variant_Combat/Gameplay",
			"TownT/Variant_Combat/Interfaces",
			"TownT/Variant_Combat/UI",
			"TownT/Variant_SideScrolling",
			"TownT/Variant_SideScrolling/AI",
			"TownT/Variant_SideScrolling/Gameplay",
			"TownT/Variant_SideScrolling/Interfaces",
			"TownT/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
