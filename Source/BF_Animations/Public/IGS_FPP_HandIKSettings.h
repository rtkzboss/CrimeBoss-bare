#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_FPP_HandIKSettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_FPP_HandIKSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float R_Weight;
    
    UPROPERTY(BlueprintReadOnly)
    float L_Weight;
    
    UPROPERTY(BlueprintReadOnly)
    float Grip_Weight;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Magazine_T_Offset;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator Magazine_R_Offset;
    
    BF_ANIMATIONS_API FIGS_FPP_HandIKSettings();
};

