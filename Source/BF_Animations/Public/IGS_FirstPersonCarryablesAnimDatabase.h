#pragma once
#include "CoreMinimal.h"
#include "IGS_FirstPersonAnimationDatabaseBase.h"
#include "IGS_FirstPersonCarryablesAnimDatabase.generated.h"

class AIGS_CarryableBase;
class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonCarryablesAnimDatabase : public FIGS_FirstPersonAnimationDatabaseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_CarryableBase> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemThrowLow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemObjectThrow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* CarryableItemObjectThrowLow;
    
    FIGS_FirstPersonCarryablesAnimDatabase();
};

