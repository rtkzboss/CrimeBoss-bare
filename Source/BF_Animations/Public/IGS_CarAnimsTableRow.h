#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_CarAnimsTableRow.generated.h"

class UAnimMontage;

USTRUCT()
struct FIGS_CarAnimsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, UAnimMontage*> Idle;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, UAnimMontage*> GetOut_Normal;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, UAnimMontage*> GetOut_Fast;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, UAnimMontage*> GetOutMontages;
    
    BF_ANIMATIONS_API FIGS_CarAnimsTableRow();
};

