#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "BodySetupEnums.h"
#include "HoudiniAssetComponent_V1.generated.h"

class UAssetUserData;
class UFoliageType_InstancedStaticMesh;
class UPhysicalMaterial;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UHoudiniAssetComponent_V1(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    uint8 bGeneratedDoubleSidedGeometry: 1;

    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* GeneratedPhysMaterial;

    UPROPERTY(EditAnywhere)
    FBodyInstance DefaultBodyInstance;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;

    UPROPERTY(EditAnywhere)
    int32 GeneratedLightMapResolution;

    UPROPERTY(EditAnywhere)
    float GeneratedDistanceFieldResolutionScale;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 GeneratedLightMapCoordinateIndex;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bGeneratedUseMaximumStreamingTexelRatio: 1;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GeneratedStreamingDistanceMultiplier;

    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;

    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    TArray<UAssetUserData*> GeneratedAssetUserData;

    UPROPERTY()
    FText BakeFolder;

    UPROPERTY()
    FText TempCookFolder;

};
