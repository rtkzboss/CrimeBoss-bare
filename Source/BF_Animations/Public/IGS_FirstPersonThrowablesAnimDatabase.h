#pragma once
#include "CoreMinimal.h"
#include "IGS_FirstPersonAnimationDatabaseBase.h"
#include "IGS_FirstPersonThrowablesAnimDatabase.generated.h"

class AIGS_ThrowableBase;
class UAnimMontage;

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_FirstPersonThrowablesAnimDatabase : public FIGS_FirstPersonAnimationDatabaseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AIGS_ThrowableBase> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Throw_Up;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Throw_Down;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Throw_UpWeapon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* Throw_DownWeapon;

    FIGS_FirstPersonThrowablesAnimDatabase();
};
