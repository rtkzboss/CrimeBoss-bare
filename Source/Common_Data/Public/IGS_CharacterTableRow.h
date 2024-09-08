#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ItemQuality.h"
#include "CommonHeisterLoadout.h"
#include "IGS_CharacterClasses.h"
#include "IGS_CharacterTraits.h"
#include "IGS_UnlockProperties.h"
#include "META_TableCharacterInfo.h"
#include "Templates/SubclassOf.h"
#include "IGS_CharacterTableRow.generated.h"

class UIGS_GameplayEffect_Class;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CharacterTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_CharacterID ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsGeneric;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseInRandomPool;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CharacterClasses UniqueNormalClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CharacterClasses UniqueLeveledClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_CharacterClasses> GenericVariants;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCommonHeisterLoadout DefaultLoadout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CharacterTraits Traits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CharacterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_GameplayEffect_Class> Class;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterWieldable3PVModelScaleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterWieldableFPVModelScaleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMETA_TableCharacterInfo MetaData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMETA_ItemQuality Quality;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_UnlockProperties UnlockProperties;
    
    FIGS_CharacterTableRow();
};

