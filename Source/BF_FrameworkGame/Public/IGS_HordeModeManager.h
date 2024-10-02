#pragma once
#include "CoreMinimal.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "Components/ActorComponent.h"
#include "IGS_HordeModeActiveSignature.h"
#include "IGS_HordeModeTokenAddedSignature.h"
#include "IGS_HordeModeValues.h"
#include "IGS_HordeModeValuesChangedSignature.h"
#include "IGS_HordeModeWaveChangedSignature.h"
#include "IGS_HordeModeManager.generated.h"

class UIGS_HordeModeSettings;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_HordeModeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_HordeModeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetHordeModeCurrentWave(const UObject* inWCO, int32 inWave);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetHordeModeCounterValues(const UObject* inWCO, int32 inTotalValue, float inCurrentProgress);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetHordeModeCompletedWave(const UObject* inWCO, int32 inWave);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetHordeModeActive(const UObject* inWCO, bool Inactive);

private:
    UFUNCTION()
    void OnRep_TotalEarnedTokens(int32 inOldTotalEarnedTokens);

    UFUNCTION()
    void OnRep_HordeModeValues(FIGS_HordeModeValues inOldValues);

    UFUNCTION()
    void OnRep_HordeModeActive(bool inOldHordeModeActive);

    UFUNCTION()
    void OnRep_CurrenWave(int32 inOldWave);

    UFUNCTION()
    void OnRep_CompletedWave(int32 inOldWave);

    UFUNCTION()
    void OnFPS2MetaDataRequested(FIGS_SharedMetaTransfer_Data& refSharedData, FIGS_FPS2Meta_Data& refFPSData) const;

public:
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_HordeModeManager* Instance(const UObject* inWorldContextObject);

    UFUNCTION(BlueprintPure)
    UIGS_HordeModeSettings* GetSettings() const;

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static int32 GetHordeModeTotalEarnedTokens(const UObject* inWCO);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_HordeModeManager* GetHordeModeManager(const UObject* inWCO);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddTokensToAllPlayers(const UObject* inWCO, int32 inTokensCount);

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeActiveSignature OnHordeModeActiveChanged;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeValuesChangedSignature OnHordeModeValuesChanged;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeTokenAddedSignature OnHordeModeTokenAdded;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeTokenAddedSignature OnHordeModeTotalEarnedTokensChanged;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeWaveChangedSignature OnHordeModeCurrentWaveChanged;

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeWaveChangedSignature OnHordeModeCompletedWaveChanged;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_HordeModeActive)
    bool bIsHordeModeActive;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_HordeModeValues)
    FIGS_HordeModeValues HordeModeValues;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_CurrenWave)
    int32 CurrentWave;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_CompletedWave)
    int32 CompletedWave;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_TotalEarnedTokens)
    int32 TotalEarnedTokens;

private:
    UPROPERTY()
    UIGS_HordeModeSettings* Settings;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
