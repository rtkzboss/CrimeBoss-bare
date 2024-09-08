#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "META_HiddenGoalsData.generated.h"

class UMETA_HiddenGoalID;
class UMETA_HiddenGoalObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UMETA_HiddenGoalsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TMap<TSubclassOf<UMETA_HiddenGoalID>, UMETA_HiddenGoalObject*> HiddenGoals;
    
    UMETA_HiddenGoalsData();

};

