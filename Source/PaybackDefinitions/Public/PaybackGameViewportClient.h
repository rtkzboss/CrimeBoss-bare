#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "BF_FocusSignatureDelegate.h"
#include "PaybackGameViewportClient.generated.h"

UCLASS(NonTransient, Config=Inherit)
class PAYBACKDEFINITIONS_API UPaybackGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBF_FocusSignature OnLostFocus;
    
    UPROPERTY(BlueprintAssignable)
    FBF_FocusSignature OnFocusReceived;
    
    UPaybackGameViewportClient();

};

