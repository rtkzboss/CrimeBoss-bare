#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SpecificFPSCharacterPortraitReadyOutputPin.h"
#include "IGS_WaitForSpecificFPSCharacterPortrait.generated.h"

class AIGS_GameCharacterFramework;
class UObject;
class UTexture2D;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForSpecificFPSCharacterPortrait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForSpecificFPSCharacterPortrait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForSpecificFPSCharacterPortrait* WaitForCharacterPortrait(UObject* inWorldContextObject, AIGS_GameCharacterFramework* inCharacter);

private:
    UFUNCTION()
    void ExecuteOnCharacterPortraitReady(TSoftObjectPtr<UTexture2D> inCharacterPortrait);

public:
    UPROPERTY(BlueprintAssignable)
    FSpecificFPSCharacterPortraitReadyOutputPin WhenCharacterPortraitReady;

};
