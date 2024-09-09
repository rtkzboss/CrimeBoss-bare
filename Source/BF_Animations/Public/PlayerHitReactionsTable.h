#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerHitReactionsTable.generated.h"

class UAnimMontage;

UCLASS()
class BF_ANIMATIONS_API UPlayerHitReactionsTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPlayerHitReactionsTable();

    UPROPERTY(EditAnywhere)
    UAnimMontage* Front_UpperBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Front_LowerBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Front_Head;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Right_UpperBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Right_LowerBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Right_Head;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Back_UpperBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Back_LowerBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Back_Head;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Left_UpperBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Left_LowerBody;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Left_Head;
    
};

