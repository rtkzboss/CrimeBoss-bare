#pragma once
#include "CoreMinimal.h"
#include "IGS_ChainManagerBaseComponent.h"
#include "IGS_Quickplay_ChainManagerComponent.generated.h"

class UMETA_Character;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_Quickplay_ChainManagerComponent : public UIGS_ChainManagerBaseComponent {
    GENERATED_BODY()
public:
    UIGS_Quickplay_ChainManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool WasCurrentMissionUrbanLegendMission();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool WasCurrentMissionChainMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldUseChainCrew();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsCurrentMissionUrbanLegendMission();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsCurrentMissionChainMission();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    TArray<UMETA_Character*> GetChainCharacters();
    
};

