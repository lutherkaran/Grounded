// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Grounded : ModuleRules
{
	public Grounded(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
