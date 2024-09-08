#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_Meta2FPS_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "IGS_MetaTransferHandler.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_SAVE_API UIGS_MetaTransferHandler : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FGameplayTag, int32> MissionData;
    
    UPROPERTY()
    TMap<FGameplayTag, int32> MetaData;
    
    UPROPERTY(Transient)
    FIGS_Meta2FPS_Data Meta2FPSData;
    
    UPROPERTY(Transient)
    FIGS_FPS2Meta_Data FPS2MetaData;
    
    UPROPERTY(Transient)
    FIGS_SharedMetaTransfer_Data SharedData;
    
    UPROPERTY(Transient)
    FText ErrorText;
    
    UPROPERTY()
    bool bCollectOnlySecuredLoot;
    
public:
    UIGS_MetaTransferHandler();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetMissionScenarioOverride(const UObject* inWCO, FGameplayTag inMissionScenario);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetMissionData(const UObject* inWCO, FGameplayTag inTag, int32 InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetMetaData(const UObject* inWCO, FGameplayTag inTag, int32 InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetLootCollection(const UObject* inWCO, bool inCollectOnlySecuredLoot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetErrorText(const UObject* inWCO, FText InText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SendSharedData(const UObject* inWCO, const FIGS_SharedMetaTransfer_Data& inSharedData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SendMetaData(const UObject* inWCO, const FIGS_Meta2FPS_Data& InMetaData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SendFPSData(const UObject* inWCO, const FIGS_FPS2Meta_Data& inFPSData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_SharedMetaTransfer_Data ReadSharedData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_Meta2FPS_Data ReadQuickplayData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_Meta2FPS_Data ReadMetaData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_FPS2Meta_Data ReadFPSData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetMissionData(const UObject* inWCO, TMap<FGameplayTag, int32>& outMissionData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetMetadata(const UObject* inWCO, TMap<FGameplayTag, int32>& outMetaData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool GetLootCollection(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FText GetErrorText(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool DoSharedDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool DoQuickplayDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool DoMetaDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool DoFPSDataExist(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void DeleteMetaData(const UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ClearSharedData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ClearMissionDataMap(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ClearMetaDataMap(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ClearMetaData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ClearFPSData(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void ClearAll(const UObject* inWCO);
    
};

