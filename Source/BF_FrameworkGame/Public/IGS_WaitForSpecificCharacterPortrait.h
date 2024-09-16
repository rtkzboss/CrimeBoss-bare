#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SpecificCharacterPortraitReadyOutputPin.h"
#include "IGS_WaitForSpecificCharacterPortrait.generated.h"

class UMETA_Character;
class UObject;
class UTexture2D;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForSpecificCharacterPortrait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForSpecificCharacterPortrait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForSpecificCharacterPortrait* WaitForCharacterPortrait(UObject* inWorldContextObject, UMETA_Character* inCharacter);

private:
    UFUNCTION()
    void ExecuteOnCharacterPortraitReady(TSoftObjectPtr<UTexture2D> inCharacterPortrait);

public:
    UPROPERTY(BlueprintAssignable)
    FSpecificCharacterPortraitReadyOutputPin WhenCharacterPortraitReady;

};
