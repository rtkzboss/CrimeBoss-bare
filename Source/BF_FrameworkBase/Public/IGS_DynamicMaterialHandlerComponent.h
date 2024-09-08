#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DynamicMaterialsRegeneratedOnActorEventDelegate.h"
#include "IGS_DynamicMaterialHandlerComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DynamicMaterialHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_DynamicMaterialsRegeneratedOnActorEvent OnDynamicMaterialsRegeneratedOnActorEvent;
    
    UIGS_DynamicMaterialHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterialInstanceFor(UMaterialInterface* inMaterial);
    
    UFUNCTION(BlueprintCallable)
    void CreateDynamicMaterials(bool inEnableSkinnedDecals);
    
};

