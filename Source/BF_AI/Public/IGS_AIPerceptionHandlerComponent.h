#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "Perception/AIPerceptionTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIPerceptionHandlerComponent.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIPerceptionHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_AIPerceptionHandlerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* inActor, FAIStimulus inStimulus);

    UFUNCTION()
    void OnSusActorEndPlay(AActor* inActor, TEnumAsByte<EEndPlayReason::Type> inEndPlayReason);

public:
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetPossesedPawn() const;

    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;

    UPROPERTY(EditDefaultsOnly)
    float AIMemoryUpdateTick;

    UPROPERTY(EditDefaultsOnly)
    float AIMemoryUpdateInitialDelay;

    UPROPERTY(EditDefaultsOnly)
    float SightForgetTime;

    UPROPERTY(EditDefaultsOnly)
    float HearForgetTime;

    UPROPERTY(EditDefaultsOnly)
    float ShotForgetTime;

    UPROPERTY(EditDefaultsOnly)
    float DamageForgetTime;

    UPROPERTY(EditDefaultsOnly)
    float DangerForgetTime;

    UPROPERTY(EditDefaultsOnly)
    float SightRadiusOverride;

};
