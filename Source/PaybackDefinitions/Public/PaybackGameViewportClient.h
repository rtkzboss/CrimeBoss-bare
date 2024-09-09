#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "BF_FocusSignatureDelegate.h"
#include "PaybackGameViewportClient.generated.h"

UCLASS(NonTransient)
class PAYBACKDEFINITIONS_API UPaybackGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UPaybackGameViewportClient();

    UPROPERTY(BlueprintAssignable)
    FBF_FocusSignature OnLostFocus;
    
    UPROPERTY(BlueprintAssignable)
    FBF_FocusSignature OnFocusReceived;
    
};

