#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PropActorInfoStruct.h"
#include "IGS_PropActorSpawner.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UIGS_PropActorSpawner : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPropActorInfoStruct PropActorInfo;
    
    UPROPERTY()
    AActor* m_SpawnedActor;
    
public:
    UIGS_PropActorSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* GetSpawnedActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool Despawn() const;
    
};

