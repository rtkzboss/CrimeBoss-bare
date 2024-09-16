#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "CharacterPortraitReadyOutputPin.h"
#include "IGS_WaitForCharacterPortrait.generated.h"

class UObject;
class UTexture2D;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_WaitForCharacterPortrait : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_WaitForCharacterPortrait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForCharacterPortrait* WaitForCharacterPortrait(UObject* inWorldContextObject, EIGS_CharacterID inCharacterID, bool inIsMaxLeveled, int32 inGenericID, FGameplayTag inCharacterSkinID, int32 inMutableIndex);

private:
    UFUNCTION()
    void ExecuteOnCharacterPortraitReady(TSoftObjectPtr<UTexture2D> inCharacterPortrait);

public:
    UPROPERTY(BlueprintAssignable)
    FCharacterPortraitReadyOutputPin WhenCharacterPortraitReady;

};
