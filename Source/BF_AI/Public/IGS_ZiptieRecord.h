#pragma once
#include "CoreMinimal.h"
#include "IGS_ZiptieRecord.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT()
struct BF_AI_API FIGS_ZiptieRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    AIGS_GameCharacterFramework* Instigator;

    UPROPERTY()
    AIGS_GameCharacterFramework* Character;

    FIGS_ZiptieRecord();
};
