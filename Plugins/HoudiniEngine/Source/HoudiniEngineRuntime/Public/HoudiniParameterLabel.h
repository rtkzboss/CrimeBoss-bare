#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterLabel.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterLabel : public UHoudiniParameter {
    GENERATED_BODY()
public:
    UHoudiniParameterLabel();

    UPROPERTY()
    TArray<FString> LabelStrings;
    
};

