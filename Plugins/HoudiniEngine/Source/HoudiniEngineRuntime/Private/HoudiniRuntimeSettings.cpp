#include "HoudiniRuntimeSettings.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"

UHoudiniRuntimeSettings::UHoudiniRuntimeSettings() {
    (*this).SessionType = HRSST_NamedPipe;
    (*this).ServerHost = TEXT("localhost");
    (*this).ServerPort = 9090;
    (*this).ServerPipeName = TEXT("hapi");
    (*this).bStartAutomaticServer = true;
    (*this).AutomaticServerTimeout = 3.000000000e+03f;
    (*this).bSyncWithHoudiniCook = true;
    (*this).bCookUsingHoudiniTime = true;
    (*this).bShowMultiAssetDialog = true;
    (*this).bDisplaySlateCookingNotifications = true;
    (*this).DefaultTemporaryCookFolder = TEXT("/Game/HoudiniEngine/Temp");
    (*this).DefaultBakeFolder = TEXT("/Game/HoudiniEngine/Bake");
    (*this).MarshallingLandscapesUseFullResolution = true;
    (*this).MarshallingLandscapesForcedMinValue = -2.000000000e+03f;
    (*this).MarshallingLandscapesForcedMaxValue = 4.553000000e+03f;
    (*this).bUseLegacyInputCurves = true;
    (*this).MarshallingSplineResolution = 5.000000000e+01f;
    (*this).bEnableProxyStaticMesh = true;
    (*this).bShowDefaultMesh = true;
    (*this).ProxyMeshAutoRefineTimeoutSeconds = 1.000000000e+01f;
    (*this).bEnableProxyStaticMeshRefinementOnPreSaveWorld = true;
    (*this).bEnableProxyStaticMeshRefinementOnPreBeginPIE = true;
    (*this).DefaultBodyInstance.SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    (*this).DefaultBodyInstance.bLockTranslation = true;
    (*this).DefaultBodyInstance.bLockRotation = true;
    auto gen = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("bInterpolateWhenSubStepping");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this).DefaultBodyInstance, 0)), true);
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).DefaultBodyInstance, 0)) = TEXT("BlockAll");
    (*this).DefaultBodyInstance.PositionSolverIterationCount = 8;
    (*this).DefaultBodyInstance.VelocitySolverIterationCount = 1;
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen4 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).WorldStatic = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).WorldDynamic = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).Pawn = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).Visibility = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).Camera = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).PhysicsBody = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).Vehicle = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).Destructible = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).EngineTraceChannel2 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).EngineTraceChannel3 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).EngineTraceChannel4 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).EngineTraceChannel5 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).EngineTraceChannel6 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel15 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)).GameTraceChannel18 = ECR_Block;
    FResponseChannel gen5;
    gen5.Channel = TEXT("Ping");
    FResponseChannel gen6;
    gen6.Channel = TEXT("Wheels");
    FResponseChannel gen7;
    gen7.Channel = TEXT("cover");
    auto gen8 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen8->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).DefaultBodyInstance, 0)), 0)) = TArray<FResponseChannel>{gen5, gen6, gen7};
    auto gen9 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("MassInKgOverride");
    (*gen9->ContainerPtrToValuePtr<float>(&(*this).DefaultBodyInstance, 0)) = 1.000000000e+02f;
    (*this).DefaultBodyInstance.LinearDamping = 9.999999776e-03f;
    (*this).DefaultBodyInstance.MassScale = 1.000000000e+00f;
    (*this).DefaultBodyInstance.InertiaTensorScale.X = 1.000000000e+00f;
    (*this).DefaultBodyInstance.InertiaTensorScale.Y = 1.000000000e+00f;
    (*this).DefaultBodyInstance.InertiaTensorScale.Z = 1.000000000e+00f;
    (*this).DefaultBodyInstance.MaxAngularVelocity = 3.600000000e+03f;
    (*this).DefaultBodyInstance.CustomSleepThresholdMultiplier = 1.000000000e+00f;
    (*this).DefaultBodyInstance.StabilizationThresholdMultiplier = 1.000000000e+00f;
    (*this).DefaultBodyInstance.bEnableGravity = true;
    (*this).DefaultBodyInstance.bStartAwake = true;
    (*this).LightMapResolution = 32;
    (*this).LightMapCoordinateIndex = 1;
    (*this).StreamingDistanceMultiplier = 1.000000000e+00f;
    (*this).DstLightmapIndex = 1;
    (*this).MinLightmapResolution = 64;
    (*this).bRemoveDegenerates = true;
    (*this).GenerateLightmapUVsFlag = HRSRF_OnlyIfMissing;
    (*this).RecomputeNormalsFlag = HRSRF_OnlyIfMissing;
    (*this).RecomputeTangentsFlag = HRSRF_OnlyIfMissing;
    (*this).bUseMikkTSpace = true;
    (*this).bBuildAdjacencyBuffer = true;
    (*this).bBuildReversedIndexBuffer = true;
    (*this).DistanceFieldResolutionScale = 2.000000000e+00f;
    (*this).bEnableBackwardCompatibility = true;
    (*this).CookingThreadStackSize = -1;
}

