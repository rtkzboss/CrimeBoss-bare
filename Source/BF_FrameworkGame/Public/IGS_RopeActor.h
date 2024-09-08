#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EIGS_RopeType.h"
#include "IGS_RopeActor.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_RopeComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_RopeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UIGS_RopeComponent* RopeComponent;
    
    AIGS_RopeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(NetMulticast, Reliable)
    void UnLockEndParticle();
    
    UFUNCTION(NetMulticast, Reliable)
    void ThrowRope();
    
    UFUNCTION(NetMulticast, Reliable)
    void SetUser(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetParameters(EIGS_RopeType inRopeType, FRotator InRotation, FVector inStart, FVector inEnd);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetEnableUpdateClimbDownPoints();
    
    UFUNCTION(NetMulticast, Reliable)
    void RopeEndTransition(bool OptimizeRope);
    
    UFUNCTION(NetMulticast, Reliable)
    void RollOffRope();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayerStopUsingRope(bool NewRollOffRope, bool DestroyAfterUse);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayerStartUsingRope(AIGS_GameCharacterFramework* inUser, EIGS_RopeType inRopeType);
    
    UFUNCTION(NetMulticast, Reliable)
    void AllowEndPointMove();
    
};

