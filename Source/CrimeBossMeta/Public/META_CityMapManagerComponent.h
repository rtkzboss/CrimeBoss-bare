#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_CityMapManagerBaseComponent.h"
#include "META_CityMapManagerComponent.generated.h"

class UMETA_BaseMapEvent;
class UMETA_BaseMission;
class UMapTile;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_CityMapManagerComponent : public UIGS_CityMapManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_CityMapManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> TryToGetConnectedTiles(const TArray<FGameplayTag> inValidTiles, int32 inTilesAmount);

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void GetTileObject(const FGameplayTag inID, UMapTile*& outTileObject);

protected:
    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, UMapTile*> TileObjects;

    UPROPERTY(BlueprintReadWrite)
    UMapTile* SelectedTileObject;

    UPROPERTY(BlueprintReadWrite)
    UMETA_BaseMission* SelectedMission;

    UPROPERTY(BlueprintReadWrite)
    UMapTile* SelectedTurfIconTile;

    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, int32> BaseStrengthOfTiles;

    UPROPERTY(BlueprintReadWrite)
    int32 LastDayOfTilesIncomeRefresh;

    UPROPERTY(BlueprintReadWrite)
    int32 PrevTileStrenght;

    UPROPERTY(BlueprintReadWrite)
    TArray<UMETA_BaseMapEvent*> MapEventQueue;

    UPROPERTY(BlueprintReadWrite)
    bool ForceMapEvents;

};
