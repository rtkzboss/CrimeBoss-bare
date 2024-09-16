#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EIGS_TeamSideEnum.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_GetAllCharactersOfTeamsides.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UEnvQueryGenerator_GetAllCharactersOfTeamsides : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_GetAllCharactersOfTeamsides();

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> GenerateAround;

    UPROPERTY(EditDefaultsOnly)
    TArray<EIGS_TeamSideEnum> TeamSides;

};
