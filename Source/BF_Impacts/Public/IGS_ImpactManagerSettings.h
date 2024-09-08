#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_ImpactManagerSettings.generated.h"

UCLASS(BlueprintType)
class BF_IMPACTS_API UIGS_ImpactManagerSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint GunshotSubUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint SlashSubUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint BluntSmallSubUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint BluntLargeSubUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIntPoint StabSubUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SizeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BloodSplatterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRandomRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D RotationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableImpactOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultImpactPlayerMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RefreshImpactCountPoolRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSoundImpactOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultSoundImpactPlayerMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootstepSoundImpactPlayerMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SoundImpactCountCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableParticleImpactOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultParticleImpactPlayerMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ParticleImpactCountCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableDecalImpactOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultDecalImpactPlayerMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DecalImpactCountCap;
    
    UIGS_ImpactManagerSettings();

};

