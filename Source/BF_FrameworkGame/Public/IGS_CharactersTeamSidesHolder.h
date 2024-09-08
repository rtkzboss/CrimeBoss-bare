#pragma once
#include "CoreMinimal.h"
#include "IGS_CharactersTeamSidesHolder.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_CharactersTeamSidesHolder {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<AIGS_GameCharacterFramework*> Characters;
    
    FIGS_CharactersTeamSidesHolder();
};

