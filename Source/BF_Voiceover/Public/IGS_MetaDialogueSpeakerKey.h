#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueSpeaker.h"
#include "IGS_MetaDialogueSpeakerKey.generated.h"

USTRUCT(BlueprintType)
struct FIGS_MetaDialogueSpeakerKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EIGS_MetaDialogueSpeaker Speaker;

    BF_VOICEOVER_API FIGS_MetaDialogueSpeakerKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_MetaDialogueSpeakerKey&) { return 0; }
FORCEINLINE bool operator==(const FIGS_MetaDialogueSpeakerKey&, const FIGS_MetaDialogueSpeakerKey&) { return true; }
