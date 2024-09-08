#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_HeavyHitReactionData.h"
#include "IGS_HeavyHitReactionTable.generated.h"

UCLASS()
class BF_ANIMATIONS_API UIGS_HeavyHitReactionTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FIGS_HeavyHitReactionData> HitReactionDataStand;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_HeavyHitReactionData> HitReactionDataCrouch;
    
    UIGS_HeavyHitReactionTable();

};

