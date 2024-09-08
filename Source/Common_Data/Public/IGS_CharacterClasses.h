#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "IGS_CharacterClasses.generated.h"

class ACharacter;
class AFPVArmsAbstract;
class APaperDollAbstract;
class UCustomizableObjectPopulation;
class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_CharacterClasses {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsMale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsMutable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCustomizableObjectPopulation> MutableProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ACharacter> PlayerPawnClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ACharacter> BotPawnClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<APaperDollAbstract> PaperDollClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AFPVArmsAbstract> FPVArmsClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> CharacterIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> MetaCharacterIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText VariantName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText VariantDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_DialogueHeisterCharacter DialogueID;
    
    COMMON_DATA_API FIGS_CharacterClasses();
};

