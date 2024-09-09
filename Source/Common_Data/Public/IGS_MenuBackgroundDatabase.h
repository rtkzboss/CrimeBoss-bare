#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuBackgroundDataRefreshedDelegate.h"
#include "IGS_MenuBackgroundTableRow.h"
#include "IGS_MenuBackgroundDatabase.generated.h"

class UAkStateValue;
class UIGS_MenuBackgroundMusicStatesDataAsset;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_MenuBackgroundDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_MenuBackgroundDatabase();

    UFUNCTION(BlueprintPure)
    TArray<FText> GetSelectableMenuBackgroundsNames() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndex(FGameplayTag inID) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_MenuBackgroundTableRow GetDataMenuBackground(UObject* inWCO, FGameplayTag inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintPure)
    FIGS_MenuBackgroundTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FIGS_MenuBackgroundTableRow> GetDatabaseTableBP() const;
    
    UFUNCTION(BlueprintCallable)
    UAkStateValue* GetAkStateForTag(FGameplayTag inID);
    
    UFUNCTION(BlueprintCallable)
    void EnableDebugMode();
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MenuBackgroundDataRefreshed OnMenuBackgroundDataRefreshed;
    
protected:
    UPROPERTY()
    UIGS_MenuBackgroundMusicStatesDataAsset* AkStatesDataAsset;
    
    UPROPERTY()
    bool isDebugEnabled;
    
};

