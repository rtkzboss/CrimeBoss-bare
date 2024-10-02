using UnrealBuildTool;

public class Common_Data : ModuleRules {
    public Common_Data(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_Pool",
            "BinkMediaPlayer",
            "Core",
            "CoreUObject",
            "CustomizableObject",
            "CustomizableObjectPopulation",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "Niagara",
            "PaybackDefinitions",
            "SlateCore",
        });
    }
}
