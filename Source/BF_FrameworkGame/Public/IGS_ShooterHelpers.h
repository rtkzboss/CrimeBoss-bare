#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_ShooterHelpers.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_WeaponBase;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_ShooterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ShooterHelpers();

    UFUNCTION(BlueprintCallable)
    static FVector GetVelocityInLocalSpaceOfTransform(FVector inVelocity, FTransform InTransform);

    UFUNCTION(BlueprintCallable)
    static FTransform GetMuzzleTransform(AIGS_GameCharacterFramework* inOwner, AIGS_WeaponBase* inWeapon);

};
