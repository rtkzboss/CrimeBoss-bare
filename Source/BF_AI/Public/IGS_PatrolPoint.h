#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_AIMontageSOVariant.h"
#include "IGS_WaypointEventSignatureDelegate.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_PatrolPoint.generated.h"

class AIGS_AIControllerGame;
class AIGS_GameCharacterFramework;
class AIGS_WaypointBase;
class AIGS_WaypointFramework;
class UIGS_AICommand;

UCLASS(Abstract)
class BF_AI_API AIGS_PatrolPoint : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRedirectPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCannotSkipPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DirectionLookAtPosDistance;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<EIGS_AIMontageSOVariant> AnimationsToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer AnimationsToPlayTag;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AIGS_WaypointFramework* NextPoint;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_WaypointBase* NextPointCasted;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WaypointEventSignature OnWaitStartedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WaypointEventSignature OnWaitFinishedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_WaypointEventSignature OnOutAnimationStarted;
    
protected:
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<AIGS_GameCharacterFramework> m_Visitor;
    
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<AIGS_AIControllerGame> m_VisitorController;
    
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<UIGS_AICommand> m_CurrentCommand;
    
public:
    AIGS_PatrolPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisitorManully(AIGS_GameCharacterFramework* inGameCharacter);
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetVisitor() const;
    
    UFUNCTION(BlueprintCallable)
    EIGS_AIMontageSOVariant GetRandomAnimation();
    
};

