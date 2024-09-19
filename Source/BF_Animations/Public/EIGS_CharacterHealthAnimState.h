#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterHealthAnimState.generated.h"

UENUM(BlueprintType)
enum class EIGS_CharacterHealthAnimState : uint8 {
    EBF_Alive UMETA(DisplayName=Alive),
    EBF_Dead UMETA(DisplayName=Dead),
};
