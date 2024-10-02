#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffect.h"
#include "META_BaseFPSMission.h"
#include "META_FPSMissionRowInfo.h"
#include "META_HordeModeMissionSave.h"
#include "Templates/SubclassOf.h"
#include "META_HordeModeMission.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_HordeModeMission : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
    UMETA_HordeModeMission();

    UFUNCTION(BlueprintCallable)
    void SetDataFromSave(const FMETA_HordeModeMissionSave& inHordeModeMissionSave);

    UFUNCTION(BlueprintPure)
    FMETA_HordeModeMissionSave GetSaveData() const;

    UFUNCTION(BlueprintPure)
    int32 GetPlayersCount() const;

    UFUNCTION(BlueprintPure)
    TMap<TSubclassOf<UGameplayEffect>, float> GetPerkUpgrades() const;

    UFUNCTION(BlueprintPure)
    int32 GetMoney() const;

    UFUNCTION(BlueprintPure)
    int32 GetMaxWaveCount() const;

    UFUNCTION(BlueprintPure)
    int32 GetKillsCount() const;

    UFUNCTION(BlueprintPure)
    FMETA_FPSMissionRowInfo GetInfo() const;

    UFUNCTION(BlueprintPure)
    int32 GetHeisterMoney() const;

    UFUNCTION(BlueprintPure)
    FDateTime GetDateTime() const;

    UFUNCTION(BlueprintPure)
    int32 GetCompletedWave() const;

private:
    UPROPERTY()
    FMETA_HordeModeMissionSave m_HordeModeMissionSave;

};
