#pragma once
#include "CoreMinimal.h"
#include "IGS_NavMeshBase.h"
#include "RoomNavmesh.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API ARoomNavmesh : public AIGS_NavMeshBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bLockRebuild: 1;
    
public:
    ARoomNavmesh(const FObjectInitializer& ObjectInitializer);

};

