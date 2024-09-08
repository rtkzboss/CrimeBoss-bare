#pragma once
#include "CoreMinimal.h"
#include "META_BaseFPSMission.h"
#include "META_FPSMissionRowInfo.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_MoneyMaking.generated.h"

class UObject;

UCLASS()
class COMMON_DATA_API UMETA_MoneyMaking : public UMETA_BaseFPSMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMETA_MoneyMakingMissionSave m_MoneyMakingMissionSave;
    
public:
    UMETA_MoneyMaking();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    void SetDataFromSave(const UObject* inWCO, const FMETA_MoneyMakingMissionSave& inMoneyMakingMissionSave);
    
    UFUNCTION(BlueprintCallable)
    FMETA_MoneyMakingMissionSave GetSaveData();
    
    UFUNCTION(BlueprintPure)
    FMETA_FPSMissionRowInfo GetInfo() const;
    
};

