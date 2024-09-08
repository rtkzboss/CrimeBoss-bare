#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DownStateDatabase.generated.h"

class UAnimMontage;

UCLASS()
class BF_ANIMATIONS_API UIGS_DownStateDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* DownStateMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* DownMovableToPinned;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ReviveHelpMovableStateMontage;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* ReviveHelpPinnedStateMontage;
    
    UIGS_DownStateDatabase();

};

