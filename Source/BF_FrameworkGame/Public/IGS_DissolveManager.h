#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DissolveManager.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DissolveManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_DissolveManager(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    int32 MaxBodiesCount;

    UPROPERTY(EditAnywhere)
    float DissolveTime;

};
