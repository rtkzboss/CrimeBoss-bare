#pragma once
#include "CoreMinimal.h"
#include "META_BossCharacterSave.h"
#include "META_HeisterSaveData.h"
#include "IGS_Quick_CrewManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_CrewManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool bInited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_HeisterSaveData> Heisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_BossCharacterSave BossCharacter;
    
    FIGS_Quick_CrewManagerSaveData();
};

