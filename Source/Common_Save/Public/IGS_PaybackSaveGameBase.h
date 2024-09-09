#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "IGS_SaveData_Base.h"
#include "IGS_PaybackSaveGameBase.generated.h"

UCLASS()
class COMMON_SAVE_API UIGS_PaybackSaveGameBase : public USaveGame {
    GENERATED_BODY()
public:
    UIGS_PaybackSaveGameBase();

protected:
    UPROPERTY(SaveGame)
    uint32 SaveFileVersion;
    
    UPROPERTY(Transient)
    FString SaveData;
    
    UPROPERTY(SaveGame)
    TArray<uint8> SaveDataCompressedBuffer;
    
    UPROPERTY(Transient)
    FString SaveDataSlotName;
    
    UPROPERTY(Transient)
    FString SaveDataEncryptionKey;
    
    UPROPERTY(Transient)
    bool bFailedChecksum;
    
    UPROPERTY(Transient)
    FIGS_SaveData_Base DebugSaveDataBase;
    
    UPROPERTY(SaveGame)
    bool bShouldUnlockVeteranRewards;
    
    UPROPERTY(SaveGame)
    bool bAppliedPatchSave;
    
};

