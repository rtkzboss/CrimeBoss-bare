#pragma once
#include "CoreMinimal.h"
#include "EMETA_AIBossStrengthChangeIntensity.h"
#include "EMETA_TurfActionAfterSuccess.h"
#include "META_BaseFPSMission.h"
#include "META_FPSMissionRowInfo.h"
#include "META_StoryMissionSave.h"
#include "META_StoryMission.generated.h"

class UObject;

UCLASS()
class COMMON_DATA_API UMETA_StoryMission : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
    UMETA_StoryMission();

    UFUNCTION(BlueprintCallable)
    void SetWeaknessStrength(EMETA_AIBossStrengthChangeIntensity inNewStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetTurfActionAfterSuccess(EMETA_TurfActionAfterSuccess inNewTurfAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetDataFromSave(const UObject* inWCO, const FMETA_StoryMissionSave& inStoryMissionSave);
    
    UFUNCTION(BlueprintCallable)
    EMETA_AIBossStrengthChangeIntensity GetWeaknessStrength();
    
    UFUNCTION(BlueprintCallable)
    EMETA_TurfActionAfterSuccess GetTurfActionAfterSuccess();
    
    UFUNCTION(BlueprintCallable)
    FMETA_StoryMissionSave GetSaveData();
    
    UFUNCTION(BlueprintPure)
    FMETA_FPSMissionRowInfo GetInfo() const;
    
private:
    UPROPERTY()
    FMETA_StoryMissionSave m_StoryMissionSave;
    
};

