#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_CharactersUtils.generated.h"

class UMETA_Character;
class UObject;

UCLASS(BlueprintType)
class PAYBACK_API UIGS_CharactersUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_CharactersUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float GetRevivesCountFromHeisterData(UObject* inWCO, UPARAM(Ref) FCommonHeisterData& inHeisterData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float GetHealthWithModifiersFromMetaCharacter(UObject* inWCO, UMETA_Character* inCharacter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static float GetHealthWithModifiersFromHeisterData(UObject* inWCO, UPARAM(Ref) FCommonHeisterData& inHeisterData);
    
};

