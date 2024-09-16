using UnrealBuildTool;

public class BF_RideableVehicles : ModuleRules {
    public BF_RideableVehicles(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "PhysXVehicles",
            "PhysicsCore",
            "SlateCore",
            "UMG",
            "Water",
        });
    }
}
