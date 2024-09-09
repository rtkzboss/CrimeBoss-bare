#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabDebugActor.generated.h"

UCLASS()
class PREFABRICATORRUNTIME_API APrefabDebugActor : public AActor {
    GENERATED_BODY()
public:
    APrefabDebugActor(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY()
    TArray<uint8> ActorData;
    
};

