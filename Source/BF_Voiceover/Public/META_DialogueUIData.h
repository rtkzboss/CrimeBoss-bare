#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaDialogueCharacter.h"
#include "EIGS_MetaDialogueCharacterSlot.h"
#include "META_DialogueUIData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FMETA_DialogueUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EIGS_MetaDialogueCharacterSlot, EIGS_MetaDialogueCharacter> Characters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag screenTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TypeTag;

    FMETA_DialogueUIData();
};
