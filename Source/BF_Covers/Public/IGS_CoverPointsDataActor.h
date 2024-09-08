#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_CoverPointsDataActor.generated.h"

class UIGS_CoverPointsDataAsset;

UCLASS()
class BF_COVERS_API AIGS_CoverPointsDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UIGS_CoverPointsDataAsset* CoverPointsDataAsset;
    
    AIGS_CoverPointsDataActor(const FObjectInitializer& ObjectInitializer);

};

