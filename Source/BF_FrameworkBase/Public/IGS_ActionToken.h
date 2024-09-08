#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_ActionToken.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_ActionToken : public UObject {
    GENERATED_BODY()
public:
    UIGS_ActionToken();

    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void ReturnTokenToPool();
    
    UFUNCTION(BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPriority() const;
    
};

