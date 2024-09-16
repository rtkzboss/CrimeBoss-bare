#pragma once
#include "CoreMinimal.h"
#include "IGS_CharacterPaperDoll.h"
#include "Templates/SubclassOf.h"
#include "IGS_MetaCutsceneLoadPaperDollDelegate.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_MetaCutsceneLoadPaperDollDelegate, const TArray<TSubclassOf<AIGS_CharacterPaperDoll>>&, PaperDolls);
