#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_CoverAnimationsTable.generated.h"

class UAnimMontage;

UCLASS()
class BF_ANIMATIONS_API UIGS_CoverAnimationsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_CoverAnimationsTable();

    UPROPERTY(EditAnywhere)
    UAnimMontage* CombatPeekStand_L;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CombatPeekStand_R;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CombatPeekCrouch_L;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CombatPeekCrouch_R;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* CombatPeekCrouch_Up;
    
};

