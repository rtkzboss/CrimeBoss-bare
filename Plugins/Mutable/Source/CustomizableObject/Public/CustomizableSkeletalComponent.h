#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "CustomizableSkeletalComponent.generated.h"

class UCustomizableObjectInstance;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CUSTOMIZABLEOBJECT_API UCustomizableSkeletalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float SkippedLastRenderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomizableObjectInstance* CustomizableObjectInstance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UCustomizableSkeletalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
    
};

