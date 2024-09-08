#pragma once
#include "CoreMinimal.h"
#include "ShoutScanData.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct FShoutScanData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> WillBeShoutChars;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> CanNotShoutChars;
    
    UPROPERTY()
    bool HasImposibleToShoutCharacters;
    
    UPROPERTY()
    bool HasCharacterForHint;
    
    BF_FRAMEWORKBASE_API FShoutScanData();
};

