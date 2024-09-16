#pragma once
#include "CoreMinimal.h"
#include "IGS_SaveData_Version.generated.h"

USTRUCT()
struct COMMON_SAVE_API FIGS_SaveData_Version {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    uint32 JsonVersion;

    UPROPERTY(SaveGame)
    FString RevisionCreated;

    UPROPERTY(SaveGame)
    FString RevisionSaved;

    UPROPERTY(SaveGame)
    FString SnapshotRevision;

    FIGS_SaveData_Version();
};
