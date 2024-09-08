#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "META_TileSaveData.h"
#include "ActivitySubsystemActivityRequestedEventDelegate.h"
#include "EActivityTask.h"
#include "ActivityGameInstanceSubsystem.generated.h"

UCLASS(BlueprintType)
class COMMON_UTILS_API UActivityGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FActivitySubsystemActivityRequestedEvent OnActivityRequestedEvent;
    
    UActivityGameInstanceSubsystem();

    UFUNCTION(BlueprintPure)
    EActivityTask TileIdToActivityTask(FGameplayTag TileID) const;
    
    UFUNCTION(BlueprintCallable)
    void TerminateAllActivityTasks();
    
    UFUNCTION(BlueprintCallable)
    void StartLocalActivity(EActivityTask Task);
    
    UFUNCTION(BlueprintCallable)
    void ResetIsActivityRequested();
    
    UFUNCTION(BlueprintCallable)
    void ParseCityMapSaveData(const TMap<FGameplayTag, FMETA_TileSaveData>& inTilesSaveData);
    
    UFUNCTION(BlueprintPure)
    bool GetIsActivityRequested() const;
    
    UFUNCTION(BlueprintCallable)
    void EndLocalActivity(EActivityTask Task, bool bSuccess);
    
};

