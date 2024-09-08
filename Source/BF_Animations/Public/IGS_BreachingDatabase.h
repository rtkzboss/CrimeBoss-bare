#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_BreachingDatabase.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class BF_ANIMATIONS_API UIGS_BreachingDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BreachingL1Montages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BreachingL2Montages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BreachingL3Montages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BeachingR1Montages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BeachingR2Montages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BeachingR3Montages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BreachingL1CrouchMontages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BreachingL2CrouchMontages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BreachingL3CrouchMontages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BeachingR1CrouchMontages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BeachingR2CrouchMontages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UAnimMontage*> BeachingR3CrouchMontages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PlaceExplosiveL1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* PlaceExplosiveR1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ThrowingGrenadeL1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ThrowingGrenadeR1;
    
    UIGS_BreachingDatabase();

};

