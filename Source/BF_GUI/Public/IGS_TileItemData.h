#pragma once
#include "CoreMinimal.h"
#include "IGS_UITileQualityColors.h"
#include "EIGS_TileItemState.h"
#include "EIGS_UnlockCategory.h"
#include "IGS_TileItemDataStruct.h"
#include "META_ComparableItemData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "TileDataChangedDelegate.h"
#include "IGS_TileItemData.generated.h"

class UTexture2D;

UCLASS()
class BF_GUI_API UIGS_TileItemData : public UMETA_ComparableItemData {
    GENERATED_BODY()
public:
    UIGS_TileItemData();

    UFUNCTION(BlueprintCallable)
    void SetTileState(EIGS_TileItemState inState);

    UFUNCTION(BlueprintCallable)
    void SetIsTaken(bool inIsTaken);

    UFUNCTION(BlueprintCallable)
    void SetIsNew(bool inIsNew);

    UFUNCTION(BlueprintCallable)
    void SetIsEquiped(bool inIsSelected);

    UFUNCTION(BlueprintCallable)
    void SetIsChallenge(bool inIsChallenge);

    UFUNCTION(BlueprintCallable)
    void SetData(FIGS_TileItemDataStruct inData);

    UFUNCTION(BlueprintPure)
    EIGS_TileItemState GetState() const;

    UFUNCTION(BlueprintPure)
    EMETA_ItemQuality GetRarity() const;

    UFUNCTION(BlueprintPure)
    int32 GetPrice() const;

    UFUNCTION(BlueprintPure)
    FText GetName() const;

    UFUNCTION(BlueprintPure)
    bool GetIsTaken() const;

    UFUNCTION(BlueprintPure)
    bool GetIsNew() const;

    UFUNCTION(BlueprintPure)
    bool GetIsEquiped() const;

    UFUNCTION(BlueprintPure)
    bool GetIsChallenge() const;

    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetId() const;

    UFUNCTION(BlueprintPure)
    bool GetHasCustomAction() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetEntitlementTag() const;

    UFUNCTION(BlueprintPure)
    FText GetDescription() const;

    UFUNCTION(BlueprintPure)
    FIGS_TileItemDataStruct GetData() const;

    UFUNCTION(BlueprintPure)
    FText GetCustomTakenText() const;

    UFUNCTION(BlueprintPure)
    FText GetCustomEquipedText() const;

    UFUNCTION(BlueprintPure)
    FText GetCustomActionText() const;

    UFUNCTION(BlueprintPure)
    FIGS_UITileQualityColors GetColorSetForThisItem() const;

    UFUNCTION(BlueprintPure)
    EIGS_UnlockCategory GetCategory() const;

    UPROPERTY(BlueprintAssignable)
    FTileDataChangedDelegate OnTileDataChanged;

private:
    UPROPERTY()
    FIGS_TileItemDataStruct m_Data;

    UPROPERTY()
    FIGS_UITileQualityColors m_QualityColorSet;

};
