#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_EntitlementItemsManangerInitialized.h"
#include "IGS_EntitlementItemsManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_EntitlementItemsManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_EntitlementItemsManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsManagerInitialized() const;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GrantItems();

    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FIGS_EntitlementItemsManangerInitialized OnManagerInitialized;

protected:
    UPROPERTY(BlueprintReadWrite)
    bool bIsManagerDataDirty;

    UPROPERTY(BlueprintReadWrite)
    bool bIsManagerInitialized;

};
