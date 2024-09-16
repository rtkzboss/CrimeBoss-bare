#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EPrefabricatorConstructionSnapType.h"
#include "PCSnapConstraintFloor.h"
#include "PCSnapConstraintWall.h"
#include "PrefabricatorConstructionSnapComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CONSTRUCTIONSYSTEMRUNTIME_API UPrefabricatorConstructionSnapComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPrefabricatorConstructionSnapComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    EPrefabricatorConstructionSnapType SnapType;

    UPROPERTY(EditAnywhere)
    FPCSnapConstraintFloor FloorConstraint;

    UPROPERTY(EditAnywhere)
    FPCSnapConstraintWall WallConstraint;

    UPROPERTY(EditAnywhere)
    bool bAlignToGroundSlope;

    UPROPERTY(EditAnywhere)
    bool bUseMaxGroundSlopeConstraint;

    UPROPERTY(EditAnywhere)
    float MaxGroundPlacementSlope;

};
