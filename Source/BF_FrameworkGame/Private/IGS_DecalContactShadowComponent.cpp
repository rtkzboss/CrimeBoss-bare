#include "IGS_DecalContactShadowComponent.h"
#include "Components/DecalComponent.h"
#include "Materials/Material.h"

UIGS_DecalContactShadowComponent::UIGS_DecalContactShadowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UDecalComponent>(TEXT("LeftLegShadow"));
    auto gen2 = CreateDefaultSubobject<UDecalComponent>(TEXT("RightLegShadow"));
    (*this).LeftLegShadowDecalComponent = gen;
    (*this).RightLegShadowDecalComponent = gen2;
    (*this).ShadowHardness = 5.500000119e-01f;
    (*this).FemaleSettings.Radius = 1.950000000e+01f;
    (*this).FemaleSettings.WidthScale = 4.345000088e-01f;
    (*this).FemaleSettings.Offset = -4.000000000e+00f;
    (*this).FemaleHeelsSettings.Radius = 1.350000000e+01f;
    (*this).FemaleHeelsSettings.WidthScale = 5.000000000e-01f;
    (*this).FemaleHeelsSettings.Offset = -2.250000000e+00f;
    static ConstructorHelpers::FObjectFinder<UMaterial> gen3(TEXT("/Game/00_Main/MaterialLibrary/Utilities/M_DecalShadow.M_DecalShadow"));
    (*this).ShadowDecalMaterial = gen3.Object;
    (*this).bUseAttachParentBound = true;
    if (gen) gen->SetupAttachment(nullptr);
    if (gen2) gen2->SetupAttachment(nullptr);
}

void UIGS_DecalContactShadowComponent::UpdateShadowRotation() {
}

void UIGS_DecalContactShadowComponent::SetShadowVisible(bool inVisible) {
}

void UIGS_DecalContactShadowComponent::InitShadowParameters(float InRadius, float inWidthScale) {
}

void UIGS_DecalContactShadowComponent::InitDefaultDecalSettings() {
}

void UIGS_DecalContactShadowComponent::InitComponent() {
}

void UIGS_DecalContactShadowComponent::InitAttachment(float inOffset) {
}

void UIGS_DecalContactShadowComponent::ChangeCameraFadeMaterialParameter(bool Enabled) {
}

