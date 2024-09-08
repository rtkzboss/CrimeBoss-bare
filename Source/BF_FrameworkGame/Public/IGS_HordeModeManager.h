#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HordeModeActiveSignatureDelegate.h"
#include "IGS_HordeModeTokenAddedSignatureDelegate.h"
#include "IGS_HordeModeValues.h"
#include "IGS_HordeModeValuesChangedSignatureDelegate.h"
#include "IGS_HordeModeManager.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_HordeModeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeActiveSignature OnHordeModeActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeValuesChangedSignature OnHordeModeValuesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_HordeModeTokenAddedSignature OnHordeModeTokenAdded;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_HordeModeActive)
    bool bIsHordeModeActive;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_HordeModeValues)
    FIGS_HordeModeValues HordeModeValues;
    
    UIGS_HordeModeManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetHordeModeCounterValues(const UObject* inWCO, int32 inTotalValue, float inCurrentProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void SetHordeModeActive(const UObject* inWCO, bool Inactive);
    
private:
    UFUNCTION()
    void OnRep_HordeModeValues(FIGS_HordeModeValues inOldValues);
    
    UFUNCTION()
    void OnRep_HordeModeActive(bool inOldHordeModeActive);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void AddTokensToAllPlayers(const UObject* inWCO, int32 inTokensCount);
    
};

