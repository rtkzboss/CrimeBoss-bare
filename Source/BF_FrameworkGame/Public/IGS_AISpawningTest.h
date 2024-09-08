#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "EIGS_SpawnAnimType.h"
#include "IGS_AISpawningTest.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_AISpawningTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_UnitSpecialization UnitSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SpawnAnimType SpawnAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnPeriod;
    
    AIGS_AISpawningTest(const FObjectInitializer& ObjectInitializer);

};

