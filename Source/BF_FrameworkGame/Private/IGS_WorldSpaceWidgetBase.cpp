#include "IGS_WorldSpaceWidgetBase.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_WorldSpaceWidgetBase::UIGS_WorldSpaceWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bAutoActivateWidget = true;
    (*this).Progress = -1.000000000e+00f;
    auto gen = UActorComponent::StaticClass()->FindPropertyByName("bReplicates");
    CastField<FBoolProperty>(gen)->SetPropertyValue(&(*gen->ContainerPtrToValuePtr<uint8>(&(*this), 0)), true);
}

void UIGS_WorldSpaceWidgetBase::SetWorldSpaceWidgetVisibility(bool InVisibility) {
}

void UIGS_WorldSpaceWidgetBase::SetWidgetType(EIGS_WorldWidgetType inType) {
}

void UIGS_WorldSpaceWidgetBase::SetProgressWidgetSubtype(EIGS_ProgressGadgetSubtype inType) {
}

void UIGS_WorldSpaceWidgetBase::SetProgress(float InProgress) {
}

void UIGS_WorldSpaceWidgetBase::SetOwnerForBinding(AActor* inOwner) {
}

void UIGS_WorldSpaceWidgetBase::SetHeisterNumber(int32 inNumber) {
}

void UIGS_WorldSpaceWidgetBase::SetForceHidden(bool inHidden) {
}


void UIGS_WorldSpaceWidgetBase::OnRep_WidgetType(const EIGS_WorldWidgetType inOldType) {
}

void UIGS_WorldSpaceWidgetBase::OnRep_HeisterNumber() {
}


bool UIGS_WorldSpaceWidgetBase::GetIsWidgetGroupVisible() {
    return false;
}

void UIGS_WorldSpaceWidgetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(UIGS_WorldSpaceWidgetBase, WidgetType);
    DOREPLIFETIME(UIGS_WorldSpaceWidgetBase, HeisterNumber);
}

