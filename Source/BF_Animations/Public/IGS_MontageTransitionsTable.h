#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_MontageTransitionsTable.generated.h"

class UAnimMontage;

UCLASS()
class BF_ANIMATIONS_API UIGS_MontageTransitionsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> MontageTransitions;
    
    UIGS_MontageTransitionsTable();

};

