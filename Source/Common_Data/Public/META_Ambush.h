#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_MissionID.h"
#include "META_AmbushMissionRowInfo.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseFPSMission.h"
#include "META_PreviousMissionData.h"
#include "Templates/SubclassOf.h"
#include "META_Ambush.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_Ambush : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
    UMETA_Ambush();

    UFUNCTION(BlueprintCallable)
    void SetPreviousFPSMissionData(const FMETA_PreviousMissionData& inPreviousFPSMissionData);

    UFUNCTION(BlueprintCallable)
    void SetInstigatorMissionID(TSubclassOf<UMETA_MissionID> inInstigatorMissionID);

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_AmbushMissionSave& inAmbushMissionSave);

    UFUNCTION(BlueprintCallable)
    FMETA_AmbushMissionSave GetSaveData();

    UFUNCTION(BlueprintPure)
    FMETA_PreviousMissionData GetPreviousFPSMissionData() const;

    UFUNCTION(BlueprintPure)
    FGameplayTag GetInstigatorMissionTileID() const;

    UFUNCTION(BlueprintPure)
    TSubclassOf<UMETA_MissionID> GetInstigatorMissionID() const;

    UFUNCTION(BlueprintPure)
    FMETA_AmbushMissionRowInfo GetInfo() const;

private:
    UPROPERTY()
    FMETA_AmbushMissionSave m_AmbushMissionSave;

};
