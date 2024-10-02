#pragma once
#include "CoreMinimal.h"
#include "IGS_GameInstanceFramework.h"
#include "IGS_LoginChangedAfterEASSignature.h"
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

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSession();

    UFUNCTION(BlueprintPure)
    void GetUseEAS(bool& outUseEAS);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void FadeOutGame(const float inFadeTime) const;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure=false)
    void FadeInGame(const float inFadeTime) const;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_LoginChangedAfterEASSignature OnLoginChangedAfterEAS;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UPaybackCoreMapsData* CoreMapsData;

};
