#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EIGS_NavFilterType.h"
#include "EnvQueryTest_SquadPathThroughRooms.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_SquadPathThroughRooms : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_SquadPathThroughRooms();

    UPROPERTY(EditAnywhere)
    EIGS_NavFilterType NavFilterType;
    
};

