#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MediumHitReactionTable.h"
#include "IGS_MediumHitReactionsTable.generated.h"

UCLASS()
class BF_ANIMATIONS_API UIGS_MediumHitReactionsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_MediumHitReactionsTable();

    UPROPERTY(EditAnywhere)
    TArray<FIGS_MediumHitReactionTable> HitReactionDataStand;

    UPROPERTY(EditAnywhere)
    TArray<FIGS_MediumHitReactionTable> HitReactionDataCrouch;

};
