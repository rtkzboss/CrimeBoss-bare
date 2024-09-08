#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerSpecialActionBaseComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerSpecialActionBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> AttachmentClass;
    
    UPROPERTY(Transient)
    TSubclassOf<AActor> AttachmentClassHard;
    
protected:
    UPROPERTY()
    AActor* m_SpecialObjectActor;
    
public:
    UIGS_PlayerSpecialActionBaseComponent(const FObjectInitializer& ObjectInitializer);

};

