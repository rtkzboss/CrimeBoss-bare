#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableBase.h"
#include "IGS_SoapCarry.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_SoapCarry : public AIGS_CarryableBase {
    GENERATED_BODY()
public:
    AIGS_SoapCarry(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void SlippingOff();
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsSlipEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToSlipOff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RandomRangeForTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsCanThrow;
    
};

