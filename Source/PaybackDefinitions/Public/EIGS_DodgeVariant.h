#pragma once
#include "CoreMinimal.h"
#include "EIGS_DodgeVariant.generated.h"

UENUM(BlueprintType)
enum class EIGS_DodgeVariant : uint8 {
    DODGE_Unknown = 255 UMETA(DisplayName=Unknown),
    DODGE_None = 0 UMETA(DisplayName=None),
    DODGE_Flinch UMETA(DisplayName=Flinch),
    DODGE_Step_Short_L UMETA(DisplayName="Step Short L"),
    DODGE_Step_Short_R UMETA(DisplayName="Step Short R"),
    DODGE_Aim_Short_L UMETA(DisplayName="Aim Short L"),
    DODGE_Aim_Short_R UMETA(DisplayName="Aim Short R"),
    DODGE_Step_Medium_L UMETA(DisplayName="Step Medium L"),
    DODGE_Step_Medium_R UMETA(DisplayName="Step Medium R"),
    DODGE_Step_Long_L UMETA(DisplayName="Step Long L"),
    DODGE_Step_Long_R UMETA(DisplayName="Step Long R"),
};
