#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_GroupSharedData.generated.h"

class UIGS_CharacterData;
class UIGS_LocationsAroundTarget;
class UIGS_TokenPool;

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_GroupSharedData : public UObject {
    GENERATED_BODY()
public:
    UIGS_GroupSharedData();

    UFUNCTION(BlueprintPure)
    UIGS_TokenPool* GetTokenPool() const;
    
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UIGS_CharacterData> OwnerCharacterData;
    
    UPROPERTY(Transient)
    UIGS_TokenPool* TokenPool;
    
    UPROPERTY(Transient)
    UIGS_LocationsAroundTarget* LocationsAroundTarget;
    
};

