#pragma once
#include "CoreMinimal.h"
#include "IGS_Common_DataDevSettings_Base.h"
#include "IGS_Common_DataDevSettings_SkinTextures.generated.h"

class UTexture;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_Common_DataDevSettings_SkinTextures : public UIGS_Common_DataDevSettings_Base {
    GENERATED_BODY()
public:
    UIGS_Common_DataDevSettings_SkinTextures();

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture> Albedo_Texture;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture> Emissive_MaskCustom;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture> NormalMap;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture> ORM;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture> Dust_BreakupMask;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UTexture> Scratches_BreakupMask;

};
