#include "HoudiniAssetComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"

UHoudiniAssetComponent::UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bCookOnParameterChange = true;
    (*this).bUploadTransformsToHoudiniEngine = true;
    (*this).bCookOnAssetInputCook = true;
    (*this).bUseOutputNodes = true;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.bLockTranslation = true;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.bLockRotation = true;
    auto gen = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("bInterpolateWhenSubStepping");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), true);
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)) = TEXT("BlockAll");
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.PositionSolverIterationCount = 8;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.VelocitySolverIterationCount = 1;
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen4 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).WorldStatic = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).WorldDynamic = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).Pawn = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).Visibility = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).Camera = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).PhysicsBody = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).Vehicle = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).Destructible = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).EngineTraceChannel2 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).EngineTraceChannel3 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).EngineTraceChannel4 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).EngineTraceChannel5 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).EngineTraceChannel6 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel15 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)).GameTraceChannel18 = ECR_Block;
    FResponseChannel gen5;
    gen5.Channel = TEXT("Ping");
    FResponseChannel gen6;
    gen6.Channel = TEXT("Wheels");
    FResponseChannel gen7;
    gen7.Channel = TEXT("cover");
    auto gen8 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen8->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)), 0)) = TArray<FResponseChannel>{gen5, gen6, gen7};
    auto gen9 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("MassInKgOverride");
    (*gen9->ContainerPtrToValuePtr<float>(&(*this).StaticMeshGenerationProperties.DefaultBodyInstance, 0)) = 1.000000000e+02f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.LinearDamping = 9.999999776e-03f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.MassScale = 1.000000000e+00f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.InertiaTensorScale.X = 1.000000000e+00f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.InertiaTensorScale.Y = 1.000000000e+00f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.InertiaTensorScale.Z = 1.000000000e+00f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.MaxAngularVelocity = 3.600000000e+03f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.CustomSleepThresholdMultiplier = 1.000000000e+00f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.StabilizationThresholdMultiplier = 1.000000000e+00f;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.bEnableGravity = true;
    (*this).StaticMeshGenerationProperties.DefaultBodyInstance.bStartAwake = true;
    (*this).StaticMeshGenerationProperties.GeneratedLightMapResolution = 32;
    (*this).StaticMeshGenerationProperties.GeneratedLightMapCoordinateIndex = 1;
    (*this).StaticMeshGenerationProperties.GeneratedStreamingDistanceMultiplier = 1.000000000e+00f;
    (*this).StaticMeshBuildSettings.bUseMikkTSpace = true;
    (*this).StaticMeshBuildSettings.bRecomputeNormals = true;
    (*this).StaticMeshBuildSettings.bRecomputeTangents = true;
    (*this).StaticMeshBuildSettings.bRemoveDegenerates = true;
    (*this).StaticMeshBuildSettings.bBuildAdjacencyBuffer = true;
    (*this).StaticMeshBuildSettings.bBuildReversedIndexBuffer = true;
    (*this).StaticMeshBuildSettings.bGenerateLightmapUVs = true;
    (*this).StaticMeshBuildSettings.MinLightmapResolution = 64;
    (*this).StaticMeshBuildSettings.DstLightmapIndex = 1;
    (*this).StaticMeshBuildSettings.BuildScale_DEPRECATED = 1.000000000e+00f;
    (*this).StaticMeshBuildSettings.BuildScale3D.X = 1.000000000e+00f;
    (*this).StaticMeshBuildSettings.BuildScale3D.Y = 1.000000000e+00f;
    (*this).StaticMeshBuildSettings.BuildScale3D.Z = 1.000000000e+00f;
    (*this).StaticMeshBuildSettings.DistanceFieldResolutionScale = 2.000000000e+00f;
    (*this).bEnableProxyStaticMeshOverride = true;
    (*this).ProxyMeshAutoRefineTimeoutSecondsOverride = 1.000000000e+01f;
    (*this).bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = true;
    (*this).bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = true;
    (*this).AssetId = -1;
    (*this).AssetState = EHoudiniAssetState::NewHDA;
    (*this).SubAssetIndex = 4294967295;
    (*this).bEnableCooking = true;
    (*this).SetGenerateOverlapEvents(false);
    (*this).bUseAsOccluder = true;
    (*this).CastShadow = true;
    (*this).Mobility = EComponentMobility::Static;
    (*this).bCanEverAffectNavigation = true;
}

