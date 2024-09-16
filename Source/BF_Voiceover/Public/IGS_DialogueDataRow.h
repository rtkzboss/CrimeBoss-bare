#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "IGS_DialogueTranscript.h"
#include "IGS_DialogueDataRow.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GlobalCooldown;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Cooldown;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DelayMax;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayChance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlayOncePerMission;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlayOncePerWave;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_DialogueTranscript> Transcript;

    FIGS_DialogueDataRow();
};
