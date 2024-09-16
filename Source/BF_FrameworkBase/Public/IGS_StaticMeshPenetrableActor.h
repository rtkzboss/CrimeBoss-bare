#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_StaticMeshPenetrableActor.generated.h"

class UIGS_MeshOverlappableComponent;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_StaticMeshPenetrableActor : public AActor {
    GENERATED_BODY()
public:
    AIGS_StaticMeshPenetrableActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetMobility(TEnumAsByte<EComponentMobility::Type> inMobility);

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_MeshOverlappableComponent* MeshOverlappableComponent;

};
