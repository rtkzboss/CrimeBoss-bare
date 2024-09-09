#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_BreachExplodable.generated.h"

class IIGS_BreachInterface;
class UIGS_BreachInterface;
class UAkAudioEvent;
class UStaticMeshComponent;

UCLASS()
class BF_AI_API AIGS_BreachExplodable : public AActor {
    GENERATED_BODY()
public:
    AIGS_BreachExplodable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnExploded();
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ExplosionDelay;
    
    UPROPERTY(VisibleAnywhere)
    TScriptInterface<IIGS_BreachInterface> BreachableToDestroy;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* ExplosionAkEvent;
    
};

