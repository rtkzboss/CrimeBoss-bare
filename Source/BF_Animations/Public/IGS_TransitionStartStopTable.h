#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_TransitionStartStopTable.generated.h"

class UAnimMontage;

UCLASS()
class BF_ANIMATIONS_API UIGS_TransitionStartStopTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* Front;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Left;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Right;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Back;
    
    UIGS_TransitionStartStopTable();

};

