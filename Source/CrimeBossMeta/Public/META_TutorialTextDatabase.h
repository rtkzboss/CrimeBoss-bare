#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "META_TutorialTextTableRow.h"
#include "META_TutorialTextDatabase.generated.h"

class UMETA_TutorialWidgetBase;
class UObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_TutorialTextDatabase : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UMETA_TutorialTextDatabase();

    UFUNCTION(BlueprintCallable)
    void ScreenSwitchedTo(FGameplayTag inScreenTag);

    UFUNCTION(BlueprintCallable)
    void RemoveActiveTag(FGameplayTag inTag, bool inExactMatch);

    UFUNCTION(BlueprintCallable)
    void RegisterWidget(UMETA_TutorialWidgetBase* InWidget);

    UFUNCTION(BlueprintCallable)
    bool IsTagsActive(FGameplayTagContainer inTagContainer, bool inExactMatch);

    UFUNCTION(BlueprintCallable)
    bool IsTagActive(FGameplayTag inTag, bool inExactMatch);

    UFUNCTION(BlueprintCallable)
    bool IsAnyTagsActive(FGameplayTagContainer inTagContainer, bool inExactMatch);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FMETA_TutorialTextTableRow GetTutorialTextData(UObject* inWCO, const FGameplayTag inTag, bool& outSucceeded);

    UFUNCTION(BlueprintCallable)
    void AddActiveTag(FGameplayTag inTag, bool inPersistent);

protected:
    UPROPERTY(Transient)
    FGameplayTagContainer MetaMenuActiveTags;

    UPROPERTY(Instanced, Transient)
    TArray<UMETA_TutorialWidgetBase*> TutorialWidgets;

};
