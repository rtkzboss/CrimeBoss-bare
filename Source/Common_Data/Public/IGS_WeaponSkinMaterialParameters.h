#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_WeaponSkinMaterialParameters.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponSkinMaterialParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor Albedo_Tint;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Albedo_Brightness;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Albedo_Contrast;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Albedo_Desaturate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Albedo_HueShift;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> Albedo_Texture;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Emissive_Albedo_Desaturate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Emissive_Albedo_Mult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Emissive_GlobalIntensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Emissive_MaskCustom_Use;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> Emissive_MaskCustom;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Emissive_Min_Offset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Normal_Intensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> NormalMap;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Metallic_Offset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Occlusion_Intensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> ORM;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Roughness_Contrast;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Roughness_Offset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor Dust_Albedo;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> Dust_BreakupMask;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Dust_BreakupMask_Contrast;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Dust_BreakupMask_Intensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Dust_BreakupMask_Tiling;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Dust_Global_Intensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Dust_Metallic;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Dust_Roughness;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Dust_Specular;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor Scratches_Albedo;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture> Scratches_BreakupMask;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scratches_BreakupMask_Contrast;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scratches_BreakupMask_Intensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scratches_BreakupMask_Tiling;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scratches_Global_Intensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scratches_Metallic;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scratches_Roughness;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scratches_Specular;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UV_Tiling;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UV_Rotation;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Albedo_Opacity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mask_Contrast;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Mask_Offset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Normal_BlendIntensity;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Roughness_Opacity;

    FIGS_WeaponSkinMaterialParameters();
};
