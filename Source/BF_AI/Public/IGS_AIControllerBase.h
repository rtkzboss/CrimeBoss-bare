#pragma once
#include "CoreMinimal.h"
#include "IGS_AIControllerFramework.h"
#include "IGS_InterestPointHolder.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_ImportantLocationsPriorities.h"
#include "IGS_AIControllerBase.generated.h"

class AIGS_IntelligentGameCharacter;
class UIGS_AICommand;
class UIGS_AIDataComponent;
class UIGS_AIGeneralReactionsManager;
class UIGS_AIMemoryComponent;
class UIGS_AIPerceptionHandlerComponent;
class UIGS_AISettingsComponent;
class UIGS_AIThreatComponent;
class UIGS_AggroHandlerComponent;
class UIGS_InjuryComponentAI;
class UIGS_MeleeWeaponInventoryObject;
class UIGS_ScriptableBehaviorComponent;
class UIGS_WeaponInventoryObject;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_AIControllerBase : public AIGS_AIControllerFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AIPerceptionHandlerComponent* PerceptionHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AggroHandlerComponent* AggroHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AIMemoryComponent* MemoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AIThreatComponent* ThreatComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_InjuryComponentAI* InjuryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AISettingsComponent* SettingsComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ScriptableBehaviorComponent* ScriptableBehaviorComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AIDataComponent* AIDataComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_AIGeneralReactionsManager* GeneralReactionsManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_IntelligentGameCharacter* PossedPawn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_WeaponInventoryObject* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_WeaponInventoryObject* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_MeleeWeaponInventoryObject* MeleeWeapon;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FVector> ImportantLocations;
    
public:
    AIGS_AIControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSOScope(uint8 scope);
    
    UFUNCTION(BlueprintCallable)
    void SetSOCommand(UIGS_AICommand* inAICommand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetLookAtPoint(FIGS_InterestPointHolder inInterestPoint) const;
    
    UFUNCTION(BlueprintCallable)
    void SetImportnatLocation(FVector Location, EIGS_ImportantLocationsPriorities prority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFacePoint(FIGS_InterestPointHolder inInterestPoint, bool inForcePoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAllInterestPoints(FIGS_InterestPointHolder inInterestPoint, bool inForceFacePoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAimAtPoint(FIGS_InterestPointHolder inInterestPoint) const;
    
    UFUNCTION(BlueprintCallable)
    void SetAICommand(UIGS_AICommand* inAICommand);
    
    UFUNCTION(BlueprintCallable)
    void OnTeleported();
    
    UFUNCTION(BlueprintCallable)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetSOScope();
    
    UFUNCTION(BlueprintPure)
    UIGS_AICommand* GetSOCommand() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_InterestPointHolder GetLookAtPoint() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetImportnatLocationForPrority(EIGS_ImportantLocationsPriorities InPriority);
    
    UFUNCTION(BlueprintCallable)
    FVector GetImportnatLocation();
    
    UFUNCTION(BlueprintPure)
    FIGS_InterestPointHolder GetFacePoint() const;
    
    UFUNCTION(BlueprintPure)
    FIGS_InterestPointHolder GetAimAtPoint() const;
    
    UFUNCTION(BlueprintPure)
    UIGS_AICommand* GetAICommand() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearImportnatLocation(EIGS_ImportantLocationsPriorities prority);
    
};

