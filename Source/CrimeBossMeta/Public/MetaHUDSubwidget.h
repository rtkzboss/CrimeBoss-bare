#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "MetaHUDSubwidget.generated.h"

class UIGS_BlackmarketManagerBaseComponent;
class UIGS_CrewManagerBaseComponent;
class UIGS_DailyManagerBaseComponent;
class UIGS_FinanceManagerBaseComponent;
class UIGS_GoalManagerBaseComponent;
class UIGS_JobManagerBaseComponent;
class UIGS_StashManagerBaseComponent;

UCLASS(EditInlineNew)
class CRIMEBOSSMETA_API UMetaHUDSubwidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UMetaHUDSubwidget();

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
    
};

