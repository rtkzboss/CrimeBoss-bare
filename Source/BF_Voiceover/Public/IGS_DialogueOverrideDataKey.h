#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueOverrideDataKey.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueOverrideDataKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DialogueID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 LineOrder;

    FIGS_DialogueOverrideDataKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_DialogueOverrideDataKey&) { return 0; }
FORCEINLINE bool operator==(const FIGS_DialogueOverrideDataKey&, const FIGS_DialogueOverrideDataKey&) { return true; }
