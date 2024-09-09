#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerBotOrderComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerBotOrderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerBotOrderComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY()
    AIGS_GameCharacterFramework* CurrentBot;
    
    UPROPERTY()
    FText CurrentBotText;
    
    UPROPERTY()
    bool bBotOrderInProgress;
    
};

