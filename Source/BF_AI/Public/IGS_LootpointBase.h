#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LootpointBase.generated.h"

class AIGS_LootCollectionBase;
class AIGS_LootCollectionSpawnerBase;
class AIGS_LootHolderBase;
class USceneComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_LootpointBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_LootpointBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AIGS_LootHolderBase*> LootHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AIGS_LootCollectionBase*> LootColletions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AIGS_LootCollectionSpawnerBase*> LootSpawners;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* Root;
    
};

