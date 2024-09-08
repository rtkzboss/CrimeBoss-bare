#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_InteractionAnimationTypes.h"
#include "IGS_NetworkComponentAnimation.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_NETWORK_API UIGS_NetworkComponentAnimation : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_NetworkComponentAnimation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Server, Unreliable, WithValidation)
    void MessageToServer_PlayerLightMeleeChainAttackVariantChange(int32 inChainIdx);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void MessageToServer_PlayerInteractionRespondChangeReliable(EIGS_InteractionAnimationTypes inVariant);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void MessageToServer_PlayerInteractionRespondChange(EIGS_InteractionAnimationTypes inVariant);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void MessageToServer_PlayerHeavyMeleeChainAttackVariantChange(int32 inChainIdx);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_PlayerLightMeleeChainAttackVariantChange(int32 inChainIdx);
    
    UFUNCTION(NetMulticast, Reliable)
    void MessageToAll_PlayerInteractionRespondChangeReliable(EIGS_InteractionAnimationTypes inVariants);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_PlayerInteractionRespondChange(EIGS_InteractionAnimationTypes inVariants);
    
    UFUNCTION(NetMulticast, Unreliable)
    void MessageToAll_PlayerHeavyMeleeChainAttackVariantChange(int32 inChainIdx);
    
};

