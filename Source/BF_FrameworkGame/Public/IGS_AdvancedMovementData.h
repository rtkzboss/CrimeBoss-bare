#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_AdvancedMovementType.h"
#include "IGS_AdvancedMovementData.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AdvancedMovementData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EIGS_AdvancedMovementType, float> InterpolationSpeeds;
    
    UPROPERTY(EditAnywhere)
    TMap<EIGS_AdvancedMovementType, float> InterpolationSpeedsRotation;
    
    UIGS_AdvancedMovementData();

};

