#pragma once
#include "CoreMinimal.h"
#include "IGS_PaybackSaveGameBase.h"
#include "META_SaveData_DebugCareer.h"
#include "META_DebugCareerSaveGame.generated.h"

UCLASS(BlueprintType)
class COMMON_SAVE_API UMETA_DebugCareerSaveGame : public UIGS_PaybackSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_SaveData_DebugCareer SaveData_DebugCareer;
    
    UMETA_DebugCareerSaveGame();

};

