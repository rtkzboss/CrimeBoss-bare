#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "META_BaseFPSMission.h"
#include "META_TurfWarMissionSave.h"
#include "META_TurfWar.generated.h"

class UObject;

UCLASS()
class COMMON_DATA_API UMETA_TurfWar : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMETA_TurfWarMissionSave m_TurfWarMissionSave;
    
public:
    UMETA_TurfWar();

    UFUNCTION(BlueprintCallable)
    void SetWarTile(FGameplayTag inNewWarTile);
    
    UFUNCTION(BlueprintCallable)
    void SetPLayersSoldiersAmount(int32 inNewSoldiersAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyGang(EMETA_Gang inEnemyGang);
    
    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_TurfWarMissionSave& inTurfWarMissionSave);
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetWarTile() const;
    
    UFUNCTION(BlueprintCallable)
    FMETA_TurfWarMissionSave GetSaveData();
    
    UFUNCTION(BlueprintPure)
    int32 GetPLayersSoldiersAmount() const;
    
    UFUNCTION(BlueprintCallable)
    EMETA_Gang GetEnemyGang();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    int32 GetDefenseLosePenaltyCost(const UObject* inWCO);
    
};

