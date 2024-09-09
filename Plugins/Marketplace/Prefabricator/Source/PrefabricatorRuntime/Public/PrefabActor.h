#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PrefabActor.generated.h"

class UPrefabComponent;
class UPrefabricatorAsset;

UCLASS()
class PREFABRICATORRUNTIME_API APrefabActor : public AActor {
    GENERATED_BODY()
public:
    APrefabActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SavePrefab();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeSeed(const FRandomStream& InRandom, bool bRecursive);
    
    UFUNCTION(BlueprintCallable)
    void LoadPrefab();
    
    UFUNCTION(BlueprintPure)
    bool IsPrefabOutdated();
    
    UFUNCTION(BlueprintPure)
    UPrefabricatorAsset* GetPrefabAsset();
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UPrefabComponent* PrefabComponent;
    
    UPROPERTY()
    FGuid LastUpdateID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Seed;
    
};

