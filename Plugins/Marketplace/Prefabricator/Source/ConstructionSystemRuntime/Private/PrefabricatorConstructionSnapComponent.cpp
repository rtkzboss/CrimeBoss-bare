#include "PrefabricatorConstructionSnapComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"

UPrefabricatorConstructionSnapComponent::UPrefabricatorConstructionSnapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxGroundPlacementSlope = 6.000000000e+01f;
    (*this).BoxExtent.X = 1.000000000e+02f;
    (*this).BoxExtent.Y = 1.000000000e+02f;
    (*this).BoxExtent.Z = 1.000000000e+02f;
    auto gen = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType");
    (*gen->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_WorldStatic;
    auto gen2 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Custom");
    auto gen3 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen4 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldStatic = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).WorldDynamic = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Pawn = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Camera = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).PhysicsBody = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Vehicle = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Destructible = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel2 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel3 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel11 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Block;
    (*gen4->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Block;
    auto gen5 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen5->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen3->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = {};
}

