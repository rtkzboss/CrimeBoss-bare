#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabRandomizerCompleteBindableEventDelegate.h"
#include "PrefabRandomizer.generated.h"

class APrefabActor;

UCLASS()
class PREFABRICATORRUNTIME_API APrefabRandomizer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bRandomizeOnBeginPlay;
    
    UPROPERTY(EditAnywhere)
    int32 SeedOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxBuildTimePerFrame;
    
    UPROPERTY(BlueprintAssignable)
    FPrefabRandomizerCompleteBindableEvent OnRandomizationComplete;
    
    UPROPERTY(EditAnywhere)
    bool bFastSyncBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APrefabActor*> ActorsToRandomize;
    
    APrefabRandomizer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Randomize(int32 InSeed);
    
};

