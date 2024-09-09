#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_LightingScenarioType.h"
#include "IGS_LightingScenarioLevelPair.h"
#include "IGS_LightingScenariosSubsystem.generated.h"

class UIGS_LightingScenariosSubsystem;
class ULevelStreamingDynamic;
class UObject;

UCLASS(BlueprintType)
class BF_LEVELGENERATOR_API UIGS_LightingScenariosSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_LightingScenariosSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUseLightScenarios(bool inUseLightScenarios);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingScenario(EIGS_LightingScenarioType inType);
    
    UFUNCTION(BlueprintCallable)
    void RepropagateLightingScenarioChangesOnStaticMeshes();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_LightingScenariosSubsystem* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintPure)
    bool GetUseLightScenarios() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LightingScenarioLevelPair> GetLoadedLightingScenarios();
    
public:
    UFUNCTION(BlueprintPure)
    EIGS_LightingScenarioType GetCurrentLightingScenarioType() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteStaticLights();
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_LightingScenarioType LightingScenario;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bUseLightScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bForceMovableSkylight;
    
private:
    UPROPERTY()
    ULevelStreamingDynamic* m_RootLevelScenarioStreaming;
    
};

