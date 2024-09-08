#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoudiniAssetActor.generated.h"

class UHoudiniAssetComponent;

UCLASS(Config=Inherit)
class HOUDINIENGINERUNTIME_API AHoudiniAssetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UHoudiniAssetComponent* HoudiniAssetComponent;
    
    AHoudiniAssetActor(const FObjectInitializer& ObjectInitializer);

};

