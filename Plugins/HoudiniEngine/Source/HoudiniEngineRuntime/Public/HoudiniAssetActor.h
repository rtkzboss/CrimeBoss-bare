#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoudiniAssetActor.generated.h"

class UHoudiniAssetComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API AHoudiniAssetActor : public AActor {
    GENERATED_BODY()
public:
    AHoudiniAssetActor(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHoudiniAssetComponent* HoudiniAssetComponent;
    
};

