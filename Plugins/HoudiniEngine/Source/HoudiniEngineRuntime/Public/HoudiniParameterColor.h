#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterColor.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterColor : public UHoudiniParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    FLinearColor DefaultColor;
    
    UPROPERTY()
    bool bIsChildOfRamp;
    
public:
    UHoudiniParameterColor();

};

