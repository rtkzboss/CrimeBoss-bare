#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldingHand.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_AnimNotifyState_ObjectSpawner.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew)
class BF_ANIMATIONS_API UIGS_AnimNotifyState_ObjectSpawner : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
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
    
public:
    UIGS_AnimNotifyState_ObjectSpawner();

};

