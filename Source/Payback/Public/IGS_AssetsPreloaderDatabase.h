#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_AssetsPreloaderTableRow.h"
#include "IGS_AssetsPreloaderDatabase.generated.h"

class AAssetsPreloader;
class UIGS_AssetsPreloaderData;
class UObject;

UCLASS(BlueprintType)
class PAYBACK_API UIGS_AssetsPreloaderDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UClass*> LoadedClasses;
    
    UPROPERTY()
    TArray<UObject*> LoadedObjects;
    
protected:
    UPROPERTY()
    AAssetsPreloader* m_AssetsPreloader;
    
    UPROPERTY()
    UIGS_AssetsPreloaderData* m_AssetsPreloaderData;
    
public:
    UIGS_AssetsPreloaderDatabase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void UseOrCreateAssetsPreloader(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_AssetsPreloaderTableRow GetDataPreloader(UObject* inWCO, const FGameplayTag& inID, bool& outSucceeded);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void DestroyAssetsPreloader(UObject* inWCO);
    
};

