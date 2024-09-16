#include "IGS_WalkRope.h"
#include "CableComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "Components/TextRenderComponent.h"

AIGS_WalkRope::AIGS_WalkRope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UCableComponent>(TEXT("WalkRope"));
    auto gen2 = CreateDefaultSubobject<USplineComponent>(TEXT("WalkSpline"));
    auto gen3 = CreateDefaultSubobject<UBoxComponent>(TEXT("StartTriggerBox"));
    auto gen4 = CreateDefaultSubobject<UBoxComponent>(TEXT("EndTriggerBox"));
    auto gen5 = CreateDefaultSubobject<UTextRenderComponent>(TEXT("StartText"));
    auto gen6 = CreateDefaultSubobject<UTextRenderComponent>(TEXT("EndText"));
    (*this).UseEditorTick = true;
    (*this).WalkSpeed = 1.000000000e+00f;
    (*this).WalkRope = gen;
    (*this).WalkSpline = gen2;
    (*this).StartTriggerBox = gen3;
    (*this).EndTriggerBox = gen4;
    (*this).StartText = gen5;
    (*this).EndText = gen6;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = gen;
    if (gen2) gen2->SetupAttachment(gen);
    if (gen3) gen3->SetupAttachment(gen);
    if (gen4) gen4->SetupAttachment(gen);
    if (gen5) gen5->SetupAttachment(gen3);
    if (gen6) gen6->SetupAttachment(gen4);
}

void AIGS_WalkRope::SetTargetLook_Implementation(FRotator inTargetLook) {
}

void AIGS_WalkRope::SetPlayerOnRope(bool inOnRope) {
}

void AIGS_WalkRope::ResetTargetLook_Implementation() {
}

void AIGS_WalkRope::OnStartTriggerOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIGS_WalkRope::OnEndTriggerOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AIGS_WalkRope::BlueprintEditorTick_Implementation(float DeltaTime) {
}

