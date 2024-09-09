#pragma once
#include "CoreMinimal.h"
#include "META_BaseStoryGraphManager.h"
#include "StoryGraphManager.generated.h"

class UMETA_StoryGraph;
class UObject;

UCLASS(BlueprintType)
class CRIMEBOSSMETA_API UStoryGraphManager : public UMETA_BaseStoryGraphManager {
    GENERATED_BODY()
public:
    UStoryGraphManager();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    UMETA_StoryGraph* GetCurrentGraph(UObject* inWCO);
    
protected:
    UPROPERTY()
    TMap<FString, UMETA_StoryGraph*> GraphVersions;
    
    UPROPERTY()
    TArray<FString> SavedVersions;
    
    UPROPERTY(Transient)
    UMETA_StoryGraph* CurrentGraph;
    
    UPROPERTY(Transient)
    FString CurrentGraphVersion;
    
    UPROPERTY()
    TArray<FString> DeprecatedVersions;
    
};

