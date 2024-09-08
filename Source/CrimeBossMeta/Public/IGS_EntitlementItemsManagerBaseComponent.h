#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_EntitlementItemsManangerInitializedDelegate.h"
#include "IGS_EntitlementItemsManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_EntitlementItemsManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_EntitlementItemsManangerInitialized OnManagerInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool bIsManagerDataDirty;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsManagerInitialized;
    
public:
    UIGS_EntitlementItemsManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsManagerInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GrantItems();
    
};

