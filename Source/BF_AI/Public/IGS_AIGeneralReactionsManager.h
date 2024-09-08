#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_AIGeneralReactionsManager.generated.h"

class AActor;
class UIGS_GeneralReactionData_Base;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIGeneralReactionsManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UIGS_GeneralReactionData_Base* m_CurrentDataObject;
    
public:
    UIGS_AIGeneralReactionsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RequestReaction(FGameplayTag inReactionTag, AActor* inActor);
    
};

