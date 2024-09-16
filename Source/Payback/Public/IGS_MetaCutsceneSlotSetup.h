#pragma once
#include "CoreMinimal.h"
#include "EIGS_MetaDialogueSpeaker.h"
#include "IGS_MetaCutsceneSlotSetup.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneSlotSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_MetaDialogueSpeaker SlotASpeaker;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_MetaDialogueSpeaker SlotBSpeaker;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_MetaDialogueSpeaker SlotCSpeaker;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_MetaDialogueSpeaker SlotDSpeaker;

    FIGS_MetaCutsceneSlotSetup();
};
