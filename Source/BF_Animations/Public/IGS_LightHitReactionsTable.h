#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_LightHitReactionsVariant.h"
#include "IGS_LightHitReactionsTable.generated.h"

UCLASS()
class BF_ANIMATIONS_API UIGS_LightHitReactionsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_LightHitReactionsTable();

    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsVariant Standing;
    
    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsVariant Crouching;
    
    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsVariant DownState;
    
    UPROPERTY(EditAnywhere)
    FIGS_LightHitReactionsVariant LyingOnGround;
    
    UPROPERTY(EditAnywhere)
    float NextAllowedHitDuration;
    
};

