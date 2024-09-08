#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DodgeAnimTable.h"
#include "IGS_RollAnimTable.h"
#include "IGS_AvoidanceAnimationDataTable.generated.h"

UCLASS()
class BF_ANIMATIONS_API UIGS_AvoidanceAnimationDataTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FIGS_RollAnimTable> RollAnimations;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_DodgeAnimTable> DodgeAnimations;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_DodgeAnimTable> DodgeAnimationsCrouching;
    
    UIGS_AvoidanceAnimationDataTable();

};

