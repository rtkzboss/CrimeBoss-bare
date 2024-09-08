#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabDebugActor.generated.h"

UCLASS()
class PREFABRICATORRUNTIME_API APrefabDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY()
    TArray<uint8> ActorData;
    
    APrefabDebugActor(const FObjectInitializer& ObjectInitializer);

};

