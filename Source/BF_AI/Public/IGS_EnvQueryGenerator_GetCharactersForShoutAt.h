#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_EnvQueryGenerator_GetCharactersForShoutAt.generated.h"

UCLASS(EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_GetCharactersForShoutAt : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UIGS_EnvQueryGenerator_GetCharactersForShoutAt();

    UPROPERTY(EditDefaultsOnly)
    TArray<EIGS_TeamSideEnum> TeamSides;

    UPROPERTY(EditDefaultsOnly)
    float DistanceCalm;

    UPROPERTY(EditDefaultsOnly)
    float DistanceDetecting;

};
