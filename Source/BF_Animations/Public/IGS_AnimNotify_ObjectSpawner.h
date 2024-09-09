#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldingHand.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_AnimNotify_ObjectSpawner.generated.h"

class AActor;

UCLASS(CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_ObjectSpawner : public UAnimNotify {
    GENERATED_BODY()
public:
    UIGS_AnimNotify_ObjectSpawner();

    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(EditAnywhere)
    bool DespawnNotify;
    
    UPROPERTY(EditAnywhere)
    EIGS_WieldingHand WieldingHand;
    
    UPROPERTY(EditAnywhere)
    FName AttachmentSocket;
    
    UPROPERTY(EditAnywhere)
    EAttachmentRule LocationAttachmentRule;
    
    UPROPERTY(EditAnywhere)
    EAttachmentRule RotationAttachmentRule;
    
    UPROPERTY(EditAnywhere)
    EAttachmentRule ScaleAttachmentRule;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<AActor> ActorClassHard;
    
};

