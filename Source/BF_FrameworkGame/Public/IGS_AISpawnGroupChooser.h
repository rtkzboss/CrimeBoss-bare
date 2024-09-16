#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_AISpawnGroupChooser.generated.h"

class AIGS_AIEnemyGroupSpawner;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_AISpawnGroupChooser : public AActor {
    GENERATED_BODY()
public:
    AIGS_AISpawnGroupChooser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnGroup();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutomaticStart;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInt32Range EasyAmount;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInt32Range MediumAmount;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FInt32Range HardAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AIGS_AIEnemyGroupSpawner*> AISpawnGroups;

};
