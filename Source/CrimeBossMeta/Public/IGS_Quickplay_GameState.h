#pragma once
#include "CoreMinimal.h"
#include "IGS_GameStateMenuBase.h"
#include "IGS_Quickplay_GameState.generated.h"

class UIGS_BossBackgroundManager;
class UIGS_Quickplay_ChainManagerComponent;
class UIGS_Quickplay_EconomyData;
class UIGS_SubtitleManager;
class UMETA_NotificationManagerComponent;
class UMETA_QuickPlayData;

UCLASS(Abstract)
class CRIMEBOSSMETA_API AIGS_Quickplay_GameState : public AIGS_GameStateMenuBase {
    GENERATED_BODY()
public:
    AIGS_Quickplay_GameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UMETA_NotificationManagerComponent* GetNotificationManager();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UIGS_Quickplay_ChainManagerComponent* GetChainManager();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UIGS_BossBackgroundManager* GetBossBackgroundManager();
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMETA_QuickPlayData* QuickPlayData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UIGS_Quickplay_EconomyData* EconomyQuickData;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_SubtitleManager* SubtitleManager;
    
};

