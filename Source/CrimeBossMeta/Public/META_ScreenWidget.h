#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "META_ScreenWidget.generated.h"

class AMETA_BaseGameMode;
class UIGS_BlackmarketManagerBaseComponent;
class UIGS_CityMapManagerBaseComponent;
class UIGS_CrewManagerBaseComponent;
class UIGS_DailyManagerBaseComponent;
class UIGS_FinanceManagerBaseComponent;
class UIGS_GoalManagerBaseComponent;
class UIGS_JobManagerBaseComponent;
class UIGS_StashManagerBaseComponent;
class UIGS_WarManagerBaseComponent;
class UMETA_MediaManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UMETA_ScreenWidget : public UIGS_Screen {
    GENERATED_BODY()
public:
    UMETA_ScreenWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnGamemodeReady();

    UPROPERTY(BlueprintReadOnly, Instanced)
    UMETA_UIEventsManagerComponent* UIEventsManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_CrewManagerBaseComponent* CrewManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_BlackmarketManagerBaseComponent* BlackmarketManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_FinanceManagerBaseComponent* FinanceManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_GoalManagerBaseComponent* GoalsManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_JobManagerBaseComponent* JobsManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_StashManagerBaseComponent* StashManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_DailyManagerBaseComponent* DailyManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_WarManagerBaseComponent* WarManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UIGS_CityMapManagerBaseComponent* CityMapManager;

    UPROPERTY(BlueprintReadOnly, Instanced)
    UMETA_MediaManagerComponent* MediaManager;

    UPROPERTY(BlueprintReadOnly)
    AMETA_BaseGameMode* MetaGameMode;

};
