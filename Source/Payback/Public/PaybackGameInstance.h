#pragma once
#include "CoreMinimal.h"
#include "IGS_GameInstanceFramework.h"
#include "IGS_LoginChangedAfterEASSignatureDelegate.h"
#include "PaybackGameInstance.generated.h"

class UPaybackCoreMapsData;

UCLASS(NonTransient)
class PAYBACK_API UPaybackGameInstance : public UIGS_GameInstanceFramework {
    GENERATED_BODY()
public:
    UPaybackGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerOnLoginChangedAfterEAS() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseEAS(bool inUseEAS);
    
    UFUNCTION(BlueprintPure)
    void GetUseEAS(bool& outUseEAS);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_LoginChangedAfterEASSignature OnLoginChangedAfterEAS;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UPaybackCoreMapsData* CoreMapsData;
    
};

