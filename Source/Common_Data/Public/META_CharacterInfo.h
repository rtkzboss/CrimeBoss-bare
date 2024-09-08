#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "META_CharacterData.h"
#include "META_CharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_CharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqGenericId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_CharacterData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUnseenInShop;
    
    FMETA_CharacterInfo();
};

