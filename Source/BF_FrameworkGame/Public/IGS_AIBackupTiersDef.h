#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBackupSpecializationHolder.h"
#include "IGS_AIBaseTiersDef.h"
#include "IGS_AIBackupTiersDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBackupTiersDef : public FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIBackupSpecializationHolder Tier1;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIBackupSpecializationHolder Tier2;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIBackupSpecializationHolder Tier3;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_AIBackupSpecializationHolder Special;

    FIGS_AIBackupTiersDef();
};
