#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "META_DetectiveInfo.h"
#include "IGS_HeatManagerBaseComponent.h"
#include "Templates/SubclassOf.h"
#include "META_HeatManagerComponent.generated.h"

class UMETA_DetectiveID;

UCLASS(Abstract, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_HeatManagerComponent : public UIGS_HeatManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    TMap<EMETA_Gang, int32> GangsAttacksCounter;
    
    UPROPERTY(BlueprintReadWrite)
    EMETA_Gang SheriffTarget;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<TSubclassOf<UMETA_DetectiveID>> DetectivesPool;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> ActiveDetectives;
    
    UPROPERTY(BlueprintReadWrite)
    TSet<int32> UsedInvestigationValuesForDetectives;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<TSubclassOf<UMETA_DetectiveID>> DeadDetectives;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LastAmountDetectivesToSpawn;
    
    UPROPERTY(BlueprintReadWrite)
    EMETA_Heat HeatState;
    
    UPROPERTY(BlueprintReadWrite)
    float PoliceInvestigationValue;
    
    UPROPERTY(BlueprintReadWrite)
    float PreviousPoliceInvestigationValue;
    
    UPROPERTY(BlueprintReadWrite)
    float HeatValue;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, int32> InvestigationEffects;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, int32> HeatEffects;
    
public:
    UMETA_HeatManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveInvestigationEffect(const FGameplayTag inEffectTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHeatEffect(const FGameplayTag inEffectTag);
    
    UFUNCTION(BlueprintPure)
    float GetInvestigationGrowthRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeatGrowthRate() const;
    
    UFUNCTION(BlueprintPure)
    float CalculateInvestigationChangeWithModifiers(const float inInvestigationChange) const;
    
    UFUNCTION(BlueprintPure)
    float CalculateHeatChangeWithModifiers(const float inHeatChange) const;
    
    UFUNCTION(BlueprintCallable)
    void AddInvestigationEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier);
    
    UFUNCTION(BlueprintCallable)
    void AddHeatEffect(const FGameplayTag inEffectTag, const int32 inPercentModifier);
    
};

