#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_PlayerChatWheelComponent.generated.h"

class UIGS_GameUISettings;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_GUI_API UIGS_PlayerChatWheelComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerChatWheelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void ShowSpamPreventionMessage();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_HandleChatWheelReaction(FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleChatWheelReaction(FGameplayTag inTag);
    
private:
    UPROPERTY()
    UIGS_GameUISettings* m_Settings;
    
    UPROPERTY()
    bool m_SpamPreventionActive;
    
    UPROPERTY()
    TArray<float> m_ActionsTimestampsQueue;
    
};

