#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PlayerBotOrderComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerBotOrderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AIGS_GameCharacterFramework* CurrentBot;
    
    UPROPERTY()
    FText CurrentBotText;
    
    UPROPERTY()
    bool bBotOrderInProgress;
    
    UIGS_PlayerBotOrderComponent(const FObjectInitializer& ObjectInitializer);

};

