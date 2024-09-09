#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_WeaponClassSettingsDataAsset.generated.h"

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_WeaponClassSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_WeaponClassSettingsDataAsset();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LineTraceEndRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveSpreadClimbTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MoveSpreadFallTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IdleRecoilDecayMult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RecoilInterpSpeed;
    
};

