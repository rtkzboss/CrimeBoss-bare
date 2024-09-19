#include "IGS_LevelBlockingBounds.h"
#include "IGS_NavModifierComponent.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Engine/EngineTypes.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "IGS_CustomBoxComponent.h"
#include "IGS_LevelBlockingBoundsSettings.h"
#include "Net/UnrealNetwork.h"

AIGS_LevelBlockingBounds::AIGS_LevelBlockingBounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_CustomBoxComponent>(TEXT("BlockerComponent"));
    auto gen2 = CreateDefaultSubobject<UIGS_NavModifierComponent>(TEXT("NavModifierComponent"));
    auto gen3 = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    (*this).BlockerSize = 2.000000000e+01f;
    (*this).BlockerComponent = gen;
    (*this).NavModifierComponent = gen2;
    (*this).PostProcessComponent = gen3;
    static ConstructorHelpers::FObjectFinder<UIGS_LevelBlockingBoundsSettings> gen4(TEXT("/Game/00_Main/Blueprints/Gameplay/Colliders/LevelBounds/DA_LevelBlockingBoundsSettings.DA_LevelBlockingBoundsSettings"));
    (*this).Settings = gen4.Object;
    auto gen5 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("ObjectType");
    (*gen5->ContainerPtrToValuePtr<TEnumAsByte<ECollisionChannel>>(&(*this).BodyInstance, 0)) = ECC_WorldDynamic;
    auto gen6 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionProfileName");
    (*gen6->ContainerPtrToValuePtr<FName>(&(*this).BodyInstance, 0)) = TEXT("Trigger");
    auto gen7 = TBaseStructure<FBodyInstance>::Get()->FindPropertyByName("CollisionResponses");
    auto gen8 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseToChannels");
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).Visibility = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel1 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel4 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel5 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel6 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel7 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel8 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel9 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel10 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel12 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel13 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel14 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel16 = ECR_Ignore;
    (*gen8->ContainerPtrToValuePtr<FCollisionResponseContainer>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)).GameTraceChannel17 = ECR_Ignore;
    FResponseChannel gen9;
    gen9.Channel = TEXT("WorldStatic");
    gen9.Response = ECR_Overlap;
    FResponseChannel gen10;
    gen10.Channel = TEXT("WorldDynamic");
    gen10.Response = ECR_Overlap;
    FResponseChannel gen11;
    gen11.Channel = TEXT("Pawn");
    gen11.Response = ECR_Overlap;
    FResponseChannel gen12;
    gen12.Channel = TEXT("Visibility");
    gen12.Response = ECR_Ignore;
    FResponseChannel gen13;
    gen13.Channel = TEXT("Camera");
    gen13.Response = ECR_Overlap;
    FResponseChannel gen14;
    gen14.Channel = TEXT("PhysicsBody");
    gen14.Response = ECR_Overlap;
    FResponseChannel gen15;
    gen15.Channel = TEXT("Vehicle");
    gen15.Response = ECR_Overlap;
    FResponseChannel gen16;
    gen16.Channel = TEXT("Destructible");
    gen16.Response = ECR_Overlap;
    FResponseChannel gen17;
    gen17.Channel = TEXT("Bullet");
    gen17.Response = ECR_Ignore;
    FResponseChannel gen18;
    gen18.Channel = TEXT("AIPawn");
    gen18.Response = ECR_Overlap;
    FResponseChannel gen19;
    gen19.Channel = TEXT("Projectile");
    gen19.Response = ECR_Overlap;
    FResponseChannel gen20;
    gen20.Channel = TEXT("IK");
    gen20.Response = ECR_Ignore;
    FResponseChannel gen21;
    gen21.Channel = TEXT("Footstep");
    gen21.Response = ECR_Ignore;
    FResponseChannel gen22;
    gen22.Channel = TEXT("VisibilityWorld");
    gen22.Response = ECR_Ignore;
    FResponseChannel gen23;
    gen23.Channel = TEXT("Sound");
    gen23.Response = ECR_Ignore;
    FResponseChannel gen24;
    gen24.Channel = TEXT("Interactive");
    gen24.Response = ECR_Ignore;
    FResponseChannel gen25;
    gen25.Channel = TEXT("PawnRigidBody");
    gen25.Response = ECR_Ignore;
    FResponseChannel gen26;
    gen26.Channel = TEXT("ImportantPhysicsActor");
    gen26.Response = ECR_Overlap;
    FResponseChannel gen27;
    gen27.Channel = TEXT("PhysicsPushAway");
    gen27.Response = ECR_Ignore;
    FResponseChannel gen28;
    gen28.Channel = TEXT("VisibilityExplosion");
    gen28.Response = ECR_Ignore;
    FResponseChannel gen29;
    gen29.Channel = TEXT("Water");
    gen29.Response = ECR_Ignore;
    FResponseChannel gen30;
    gen30.Channel = TEXT("PlaceDynamicObject");
    gen30.Response = ECR_Ignore;
    auto gen31 = TBaseStructure<FCollisionResponse>::Get()->FindPropertyByName("ResponseArray");
    (*gen31->ContainerPtrToValuePtr<TArray<FResponseChannel>>(&(*gen7->ContainerPtrToValuePtr<FCollisionResponse>(&(*this).BodyInstance, 0)), 0)) = TArray<FResponseChannel>{gen9, gen10, gen11, gen12, gen13, gen14, gen15, gen16, gen17, gen18, gen19, gen20, gen21, gen22, gen23, gen24, gen25, gen26, gen27, gen28, gen29, gen30};
    (*this).Color.B = 0;
    (*this).Color.G = 0;
    (*this).Color.R = 255;
    (*this).bDisableShapeSelection = true;
    auto gen32 = Cast<USceneComponent>(GetDefaultSubobjectByName(TEXT("Root")));
    if (gen) gen->SetupAttachment(gen32);
    auto gen33 = Cast<UIGS_CustomBoxComponent>(GetDefaultSubobjectByName(TEXT("BoxCollision")));
    if (gen3) gen3->SetupAttachment(gen33);
}

void AIGS_LevelBlockingBounds::SetBlockerSize(float inBlockerSize) {
}

void AIGS_LevelBlockingBounds::RefreshPostProcessSettings() {
}

void AIGS_LevelBlockingBounds::OnRep_BlockerSize() {
}

void AIGS_LevelBlockingBounds::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(AIGS_LevelBlockingBounds, BlockerSize);
}

