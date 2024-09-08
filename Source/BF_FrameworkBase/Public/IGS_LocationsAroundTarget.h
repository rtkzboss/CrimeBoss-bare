#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_LocationsAroundTarget.generated.h"

class UIGS_CharacterData;

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_LocationsAroundTarget : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UIGS_CharacterData> OwnerCharacterData;
    
public:
    UIGS_LocationsAroundTarget();

};

