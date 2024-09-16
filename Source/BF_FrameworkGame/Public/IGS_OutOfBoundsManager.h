#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "IGS_OutOfBoundsChangedSignature.h"
#include "IGS_OutOfBoundsCharacterData.h"
#include "Templates/SubclassOf.h"
#include "IGS_OutOfBoundsManager.generated.h"

class AIGS_LevelBlockingBounds;
class AIGS_PlayerCharacter;
class UIGS_LeavingMissionWidget;
class UIGS_LevelBlockingBoundsSettings;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_OutOfBoundsManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_OutOfBoundsManager();

    UFUNCTION(BlueprintCallable)
    void ResetOutOfBoundsCounter(AIGS_PlayerCharacter* inCharacter);

    UFUNCTION(BlueprintCallable)
    void LeftOutOfBoundsArea(AIGS_PlayerCharacter* inCharacter);

    UFUNCTION(BlueprintPure)
    bool IsOutOfBounds(const AIGS_PlayerCharacter* inCharacter) const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_LevelBlockingBounds*> GetAllLevelBlockingBoundsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) const;

    UFUNCTION(BlueprintPure)
    TArray<AIGS_LevelBlockingBounds*> GetAllLevelBlockingBounds() const;

    UFUNCTION(BlueprintCallable)
    void EnteredOutOfBoundsArea(AIGS_PlayerCharacter* inCharacter);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UIGS_LevelBlockingBoundsSettings* Settings;

    UPROPERTY(BlueprintAssignable)
    FIGS_OutOfBoundsChangedSignature OnOutOfBoundsChanged;

protected:
    UPROPERTY()
    TMap<AIGS_PlayerCharacter*, FIGS_OutOfBoundsCharacterData> CharacterData;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> OutOfBoundsWidgetClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_LeavingMissionWidget* OutOfBoundsWidget;

    UPROPERTY(Transient)
    TArray<AIGS_LevelBlockingBounds*> LevelBlockingBounds;

};
