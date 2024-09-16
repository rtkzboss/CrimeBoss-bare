#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueGroup.h"
#include "IGS_DialogueGroupCharacterHolder.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_DialogueGroupCharacterHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_DialogueGroup DialogueGroup;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 DialogueCharacter;

    FIGS_DialogueGroupCharacterHolder();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_DialogueGroupCharacterHolder&) { return 0; }
FORCEINLINE bool operator==(const FIGS_DialogueGroupCharacterHolder&, const FIGS_DialogueGroupCharacterHolder&) { return true; }
