using UnrealBuildTool;

public class Payback : ModuleRules {
    public Payback(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AdvancedSessions",
            "AkAudio",
            "AnimationBudgetAllocator",
            "BF_AI",
            "BF_Debug",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "BF_Network",
            "BF_Voiceover",
            "BinkMediaPlayer",
            "CinematicCamera",
            "CommonUI",
            "Common_Data",
            "Common_Save",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "CrimeBossUGC",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "IGS_UIFramework",
            "InputCore",
            "LevelSequence",
            "OnlineSubsystemUtils",
            "PaybackDefinitions",
            "PhysicsCore",
            "SlateCore",
            "UMG",
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "OnlineSubsystem",
        });
    }
}
