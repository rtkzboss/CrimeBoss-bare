#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_MetaDialogueSpeakerKey.h"
#include "IGS_MetaDialogueSubsystemDataAsset.generated.h"

UCLASS(BlueprintType)
class BF_VOICEOVER_API UIGS_MetaDialogueSubsystemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FIGS_MetaDialogueSpeakerKey, FLinearColor> SpeakerSubtitleColors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FText> CharacterNames;
    
    UIGS_MetaDialogueSubsystemDataAsset();

};

