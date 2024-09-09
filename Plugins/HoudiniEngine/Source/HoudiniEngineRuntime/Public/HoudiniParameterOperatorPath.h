#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterOperatorPath.generated.h"

class UHoudiniInput;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterOperatorPath : public UHoudiniParameter {
    GENERATED_BODY()
public:
    UHoudiniParameterOperatorPath();

    UPROPERTY()
    TWeakObjectPtr<UHoudiniInput> HoudiniInput;
    
};

