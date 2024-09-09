#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "IGS_BreakableWindowComponent.h"
#include "InstancedBreakableWindowParam.h"
#include "OnInstanceBreakableStateChangedDelegateDelegate.h"
#include "IGS_InstancedBreakableWindow.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InstancedBreakableWindow : public UIGS_BreakableWindowComponent {
    GENERATED_BODY()
public:
    UIGS_InstancedBreakableWindow(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void HideWindowInstance(const int32& InstanceIndex);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void All_ImpactInstance(FVector_NetQuantize Location, int32 InstanceIndex);
    
    UPROPERTY(BlueprintAssignable)
    FOnInstanceBreakableStateChangedDelegate OnInstanceBroken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 IgnoreSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Replicated)
    TArray<FInstancedBreakableWindowParam> mR_BreakableWindowInstances;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

