#pragma once
#include "CoreMinimal.h"
#include "IGS_CustomizationArchive.h"
#include "EIGS_DialogueHeisterCharacter.h"
#include "IGS_MutableProfileData.generated.h"

class UCustomizableObjectInstance;
class UCustomizableObjectPopulation;
class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_MutableProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCustomizableObjectInstance* MutableInstanceTPP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCustomizableObjectInstance* MutableInstanceFPV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCustomizableObjectPopulation* OverridePopulation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_CustomizationArchive MutableProfile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> CharacterIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseSecondPopulation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_DialogueHeisterCharacter DialogueID;
    
    COMMON_DATA_API FIGS_MutableProfileData();
};

