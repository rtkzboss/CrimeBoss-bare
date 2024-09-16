#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BreakableMeshProperties.h"
#include "MeshInfoStruct.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> MeshSpawnerComponent;

    UPROPERTY(EditAnywhere)
    bool bEnableTransformOffset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;

    UPROPERTY(EditAnywhere)
    FBreakableMeshProperties BreakableMeshProperties;

    BF_FRAMEWORKGAME_API FMeshInfoStruct();
};
