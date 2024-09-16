#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueSpeaker.h"
#include "IGS_DialogueSpeakerKey.generated.h"

USTRUCT(BlueprintType)
struct FIGS_DialogueSpeakerKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_DialogueSpeaker Speaker;

    PAYBACKDEFINITIONS_API FIGS_DialogueSpeakerKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_DialogueSpeakerKey&) { return 0; }
FORCEINLINE bool operator==(const FIGS_DialogueSpeakerKey&, const FIGS_DialogueSpeakerKey&) { return true; }
