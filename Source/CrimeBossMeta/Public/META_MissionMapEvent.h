#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_BaseMapEvent.h"
#include "META_MissionMapEvent.generated.h"

class UMETA_BaseMission;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_MissionMapEvent : public UMETA_BaseMapEvent {
    GENERATED_BODY()
public:
    UMETA_MissionMapEvent();

    UFUNCTION(BlueprintCallable)
    void Init(UMETA_BaseMission* inMission, FGameplayTag inTileTag, bool inIsNew);
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetTileTag();
    
    UFUNCTION(BlueprintPure)
    UMETA_BaseMission* GetMission();
    
    UFUNCTION(BlueprintPure)
    bool GetIsNew();
    
protected:
    UPROPERTY()
    UMETA_BaseMission* m_Mission;
    
    UPROPERTY()
    FGameplayTag m_TileTag;
    
    UPROPERTY()
    bool m_IsNew;
    
};

