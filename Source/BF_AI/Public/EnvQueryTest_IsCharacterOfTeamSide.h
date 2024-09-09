#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EIGS_TeamSideEnum.h"
#include "EnvQueryTest_IsCharacterOfTeamSide.generated.h"

UCLASS()
class BF_AI_API UEnvQueryTest_IsCharacterOfTeamSide : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UEnvQueryTest_IsCharacterOfTeamSide();

    UPROPERTY(EditDefaultsOnly)
    EIGS_TeamSideEnum TeamSide;
    
};

