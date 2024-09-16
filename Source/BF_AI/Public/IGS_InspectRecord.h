#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_InspectRecord.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT()
struct BF_AI_API FIGS_InspectRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    AIGS_GameCharacterFramework* Character;

    UPROPERTY()
    FVector Position;

    FIGS_InspectRecord();
};
