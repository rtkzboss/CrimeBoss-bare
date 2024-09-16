#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "Perception/AIPerceptionTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_SentryPerceptionComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SentryPerceptionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SentryPerceptionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus);

public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;

protected:
    UPROPERTY()
    TArray<AActor*> m_SeenActors;

};
