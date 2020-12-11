// Copyright Epic Games, Inc. All Rights Reserved.

#include "Volumetrics_4_25_4.h"
#include "Modules/ModuleManager.h"

//#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"


void FVolumetricsTestModule::StartupModule()
{
#if (ENGINE_MINOR_VERSION >= 21)    
	//FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	//AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);

	FString VolumetricsShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/Shaders", VolumetricsShaderDirectory);
#endif
}

void FVolumetricsTestModule::ShutdownModule()
{
}

IMPLEMENT_PRIMARY_GAME_MODULE(FVolumetricsTestModule, Volumetrics_4_25_4, "Volumetrics_4_25_4" );
