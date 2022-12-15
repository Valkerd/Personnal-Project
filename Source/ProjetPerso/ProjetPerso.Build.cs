// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjetPerso : ModuleRules
{
	public ProjetPerso(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
