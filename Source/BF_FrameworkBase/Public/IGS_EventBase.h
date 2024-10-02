#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EIGS_EventState.h"
#include "IGS_EventStateChangedEvent.h"
#include "IGS_EventBase.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType, DefaultToInstanced, EditInlineNew)
class BF_FRAMEWORKBASE_API UIGS_EventBase : public UObject {
    GENERATED_BODY()
public:
    UIGS_EventBase();

    UFUNCTION(BlueprintPure)
    FDateTime GetVisibleFromDate() const;

    UFUNCTION(BlueprintPure)
    EIGS_EventState GetState() const;

    UFUNCTION(BlueprintPure)
    bool GetShowPopup() const;

    UFUNCTION(BlueprintPure)
    bool GetIsVisible() const;

    UFUNCTION(BlueprintPure)
    bool GetIsActive() const;

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;

    UFUNCTION(BlueprintPure)
    FName GetId() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEventTypeTag() const;

    UFUNCTION(BlueprintPure)
    FDateTime GetEndsAtDate() const;

    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;

    UFUNCTION(BlueprintPure)
    FText GetDescription() const;

    UFUNCTION(BlueprintPure)
    FDateTime GetActiveFromDate() const;

    UPROPERTY(BlueprintAssignable)
    FIGS_EventStateChangedEvent OnStateChanged;

};
