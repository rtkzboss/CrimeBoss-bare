#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "META_CharacterID.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_CharacterID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqGenericId;
    
    FMETA_CharacterID();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_CharacterID) { return 0; }

