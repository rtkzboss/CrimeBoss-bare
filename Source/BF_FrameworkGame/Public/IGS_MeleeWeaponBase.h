#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "IGS_BashInterface.h"
#include "IGS_MeleeWeaponBase.generated.h"

class UIGS_BasherComponent;
class UIGS_SkinHandlerBase;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_MeleeWeaponBase : public AIGS_WieldableBase, public IIGS_BashInterface {
    GENERATED_BODY()
public:
    AIGS_MeleeWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsAttacking();

    UFUNCTION(BlueprintPure)
    bool CanAttack() const;

protected:
    UPROPERTY(EditAnywhere)
    bool ShouldMeshTick3PV;

    UPROPERTY(Instanced, VisibleAnywhere)
    UIGS_BasherComponent* Basher;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SkinHandlerBase* SkinHandler;


    // Fix for true pure virtual functions not being implemented
};
