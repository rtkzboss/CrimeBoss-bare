#include "CustomizableSkeletalMeshActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "CustomizableSkeletalComponent.h"

ACustomizableSkeletalMeshActor::ACustomizableSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UCustomizableSkeletalComponent>(TEXT("CustomizableSkeletalComponent0"));
    (*this).CustomizableSkeletalComponent = gen;
    auto gen2 = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("SkeletalMeshComponent0")));
    if (gen) gen->SetupAttachment(gen2);
}

