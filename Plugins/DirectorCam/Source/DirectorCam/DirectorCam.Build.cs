using UnrealBuildTool;

public class DirectorCam : ModuleRules
{
    public DirectorCam(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PublicDependencyModuleNames.AddRange(new string[] {
            "CameraStack",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
        });
    }
}
