#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "IGS_IsZiptiedChangedSignature.h"
#include "IGS_IsZiptiedChangedWithOwnerSignature.h"
#include "IGS_ZiptieComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ZiptieComponent : public UIGS_AnimatedInteractiveComponentSimple {
    GENERATED_BODY()
public:
    UIGS_ZiptieComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnRep_IsZiptied() const;

public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsZiptied)
    bool IsZiptied;

    UPROPERTY(BlueprintAssignable)
    FIGS_IsZiptiedChangedSignature OnZiptied;

    UPROPERTY(BlueprintAssignable)
    FIGS_IsZiptiedChangedWithOwnerSignature OnZiptiedWithOwner;

    UPROPERTY(BlueprintReadOnly)
    AIGS_GameCharacterFramework* CurrentInstigator;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
