#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnSkinAppliedEventDelegate.h"
#include "IGS_SkinHandlerBase.generated.h"

class UIGS_WeaponSkinData;
class UMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_SkinHandlerBase : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SkinHandlerBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnSkinAppliedEvent OnSkinAppliedEvent;
    
protected:
    UPROPERTY(VisibleInstanceOnly)
    UIGS_WeaponSkinData* LoadedSkin;
    
    UPROPERTY(VisibleInstanceOnly)
    UIGS_WeaponSkinData* LoadedDefaultSkin;
    
    UPROPERTY(Instanced)
    UMeshComponent* SkinnableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideTortillaSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForcedTortilla;
    
};

