#pragma once
#include "CoreMinimal.h"
#include "EMETA_CharacterState.h"
#include "META_HeisterStateChangeNote.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeisterStateChangeNote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_CharacterState PrevState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_CharacterState NewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChangeDay;
    
    FMETA_HeisterStateChangeNote();
};

