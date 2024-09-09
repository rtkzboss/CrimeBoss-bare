#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinkComponentFramework.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "AI/Navigation/NavigationTypes.h"
#include "NavLinkCustomInterface.h"
#include "EIGS_TeamSideEnum.h"
#include "OnFirstUseRequestDelegate.h"
#include "OnRMAnimationStartDelegate.h"
#include "OnRMAnimationStopDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_NavLinkComponentBase.generated.h"

class AIGS_GameCharacterFramework;
class UNavArea;
class UObject;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkComponentBase : public UIGS_NavLinkComponentFramework, public INavLinkCustomInterface {
    GENERATED_BODY()
public:
    UIGS_NavLinkComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRightPoint(FVector rightPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRelevancy(bool inRelevant);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftPoint(FVector leftPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledArea(TSubclassOf<UNavArea> inAreaClass);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabledArea(TSubclassOf<UNavArea> inAreaClass);
    
    UFUNCTION(BlueprintCallable)
    void SetCostMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeFirstUsage();
    
    UPROPERTY(BlueprintAssignable)
    FOnFirstUseRequest OnFirstUsageRequest;
    
    UPROPERTY(BlueprintAssignable)
    FOnRMAnimationStart OnRMAnimationStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnRMAnimationStop OnRMAnimationEnd;
    
    UPROPERTY(EditAnywhere)
    bool HaveFirstUse;
    
    UPROPERTY(EditAnywhere)
    TArray<EIGS_TeamSideEnum> FirstUseCharacterTypes;
    
    UPROPERTY(EditAnywhere)
    bool FirstUseValidInCalmState;
    
    UPROPERTY(EditAnywhere)
    bool FirstUseValidInAlertedState;
    
    UPROPERTY(EditAnywhere)
    bool FirstUseValidInCombatState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavLinkDirection::Type> FirstUseLinkDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEditTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_TeamSideEnum> CharacterTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyRobots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NeverRobots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ValidInCalmState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ValidInAlertedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ValidInCombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Right;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavLinkDirection::Type> LinkDirection;
    
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> m_TmpCharacters;
    
private:
    UPROPERTY()
    bool m_AttachToOwnersRoot;
    
    UPROPERTY(Transient)
    UObject* m_CachedNavParent;
    
    UPROPERTY()
    uint32 m_NavLinkUserId;
    
    UPROPERTY(EditAnywhere)
    float Cooldown;
    
    UPROPERTY(EditAnywhere)
    float WaitCooldown;
    
    UPROPERTY()
    TSubclassOf<UNavArea> EnabledAreaClass;
    
    UPROPERTY()
    TSubclassOf<UNavArea> DisabledAreaClass;
    
    UPROPERTY()
    FNavAgentSelector m_SupportedAgents;
    
    UPROPERTY()
    AIGS_GameCharacterFramework* m_BestWaitingAgent;
    
    UPROPERTY(EditAnywhere)
    bool LinkEnabled;
    
    UPROPERTY()
    bool m_FirstUsageFinished;
    
    UPROPERTY()
    bool m_Initialized;
    

    // Fix for true pure virtual functions not being implemented
};

