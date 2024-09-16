#include "IGS_DynamicWallBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AIGS_DynamicWallBase::AIGS_DynamicWallBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    auto gen2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
    auto gen3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopTrimMesh"));
    auto gen4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomTrimMesh"));
    auto gen5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallLeftCornerMesh"));
    auto gen6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallRightCornerMesh"));
    auto gen7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopLeftTrimCornerMesh"));
    auto gen8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomLeftTrimCornerMesh"));
    auto gen9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallTopRightTrimCornerMesh"));
    auto gen10 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallBottomRightTrimCornerMesh"));
    (*this).WallRootComponent = gen;
    (*this).WallMesh = gen2;
    (*this).WallTopTrimMesh = gen3;
    (*this).WallBottomTrimMesh = gen4;
    (*this).WallLeftCornerMesh = gen5;
    (*this).WallRightCornerMesh = gen6;
    (*this).WallTopLeftTrimCornerMesh = gen7;
    (*this).WallBottomLeftTrimCornerMesh = gen8;
    (*this).WallTopRightTrimCornerMesh = gen9;
    (*this).WallBottomRightTrimCornerMesh = gen10;
    (*this).CoverPointClass = AIGS_CoverPointBase::StaticClass();
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
    if (gen4) gen4->SetupAttachment(gen);
    if (gen5) gen5->SetupAttachment(gen);
    if (gen6) gen6->SetupAttachment(gen);
    if (gen7) gen7->SetupAttachment(gen);
    if (gen8) gen8->SetupAttachment(gen);
    if (gen9) gen9->SetupAttachment(gen);
    if (gen10) gen10->SetupAttachment(gen);
}

void AIGS_DynamicWallBase::OnGenerationFinished(ANavigationData* inNavData) {
}

bool AIGS_DynamicWallBase::IsBreachable() const {
    return false;
}

void AIGS_DynamicWallBase::ApplyMaterials() {
}

