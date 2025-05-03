// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Program_Exercicio3 : ModuleRules
{
	public Program_Exercicio3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
