#include "IGS_WeaponSkinTableRow.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"

FIGS_WeaponSkinTableRow::FIGS_WeaponSkinTableRow() {
    (*this).RootTagID = FGameplayTag();
    (*this).SkinName = FText::GetEmpty();
    (*this).SkinImage = FSoftObjectPath();
    (*this).ID = FSoftObjectPath();
    (*this).SkinQuality = EMETA_ItemQuality::None;
    (*this).UnlockProperties.IsUnlockable = false;
    (*this).UnlockProperties.RequiredTags = FGameplayTagContainer();
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = FSoftObjectPath();
    (*this).MaterialParameters.Albedo_Tint = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).MaterialParameters.Albedo_Brightness = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Contrast = 1.000000000e+00f;
    (*this).MaterialParameters.Albedo_Desaturate = 0.000000000e+00f;
    (*this).MaterialParameters.Albedo_HueShift = 0.000000000e+00f;
    (*this).MaterialParameters.Albedo_Texture = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/TileSkins/T_CamoBrush_4_Skin.T_CamoBrush_4_Skin"), TEXT(""));
    (*this).MaterialParameters.Emissive_Albedo_Desaturate = 0.000000000e+00f;
    (*this).MaterialParameters.Emissive_Albedo_Mult = 1.000000000e+00f;
    (*this).MaterialParameters.Emissive_GlobalIntensity = 0.000000000e+00f;
    (*this).MaterialParameters.Emissive_MaskCustom_Use = 1.000000000e+00f;
    (*this).MaterialParameters.Emissive_MaskCustom = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_K.T_Default_K"), TEXT(""));
    (*this).MaterialParameters.Emissive_Min_Offset = 1.000000000e+00f;
    (*this).MaterialParameters.Normal_Intensity = 1.000000000e+00f;
    (*this).MaterialParameters.NormalMap = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_N.T_Default_N"), TEXT(""));
    (*this).MaterialParameters.Metallic_Offset = 0.000000000e+00f;
    (*this).MaterialParameters.Occlusion_Intensity = 1.000000000e+00f;
    (*this).MaterialParameters.ORM = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/TileSkins/T_CamoBrush_04_ORM.T_CamoBrush_04_ORM"), TEXT(""));
    (*this).MaterialParameters.Roughness_Contrast = 1.000000000e+00f;
    (*this).MaterialParameters.Roughness_Offset = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_Albedo = FLinearColor(4.313699901e-02f, 3.529400006e-02f, 1.568599977e-02f, 1.000000000e+00f);
    (*this).MaterialParameters.Dust_BreakupMask = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_LC.T_Default_LC"), TEXT(""));
    (*this).MaterialParameters.Dust_BreakupMask_Contrast = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_BreakupMask_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_BreakupMask_Tiling = 1.000000000e+01f;
    (*this).MaterialParameters.Dust_Global_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_Metallic = 0.000000000e+00f;
    (*this).MaterialParameters.Dust_Roughness = 9.499999881e-01f;
    (*this).MaterialParameters.Dust_Specular = 5.000000000e-01f;
    (*this).MaterialParameters.Scratches_Albedo = FLinearColor(3.137300164e-02f, 3.529400006e-02f, 5.098000169e-02f, 1.000000000e+00f);
    (*this).MaterialParameters.Scratches_BreakupMask = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_LC.T_Default_LC"), TEXT(""));
    (*this).MaterialParameters.Scratches_BreakupMask_Contrast = 0.000000000e+00f;
    (*this).MaterialParameters.Scratches_BreakupMask_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Scratches_BreakupMask_Tiling = 1.000000000e+01f;
    (*this).MaterialParameters.Scratches_Global_Intensity = 0.000000000e+00f;
    (*this).MaterialParameters.Scratches_Metallic = 3.000000119e-01f;
    (*this).MaterialParameters.Scratches_Roughness = 5.000000000e-01f;
    (*this).MaterialParameters.Scratches_Specular = 5.000000000e-01f;
    (*this).MaterialParameters.UV_Tiling = 1.000000000e+00f;
    (*this).MaterialParameters.UV_Rotation = 0.000000000e+00f;
    (*this).MaterialParameters.Albedo_Opacity = 3.000000119e-01f;
    (*this).MaterialParameters.Mask_Contrast = 0.000000000e+00f;
    (*this).MaterialParameters.Mask_Offset = 0.000000000e+00f;
    (*this).MaterialParameters.Normal_BlendIntensity = 1.000000000e+00f;
    (*this).MaterialParameters.Roughness_Opacity = 1.000000000e+00f;
    (*this).SkinMaterialSlot = TMap<TSubclassOf<UIGS_WieldableInventoryObjectBase>, FIGS_WeaponSkinStruct>{};
}
