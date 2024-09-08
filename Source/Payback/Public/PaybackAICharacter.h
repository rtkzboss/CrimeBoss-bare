#pragma once
#include "CoreMinimal.h"
#include "IGS_AIGameCharacter.h"
#include "IGS_ComponentsPreInitializedDelegate.h"
#include "PaybackAICharacter.generated.h"

class UCapsuleComponent;
class UIGS_AIWorldTracingComponent;
class UIGS_BleedingHandlerComponent;
class UIGS_InteractionStealthKillComponent;
class UIGS_NetworkComponentCharacter;
class UPaybackAICharactersEventsWatcher;
class USphereComponent;

UCLASS(Config=Inherit)
class PAYBACK_API APaybackAICharacter : public AIGS_AIGameCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FIGS_ComponentsPreInitialized OnComponentsPreInitialized;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_NetworkComponentCharacter* NetworkCharacter;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPaybackAICharactersEventsWatcher* AICharactersEventsWatcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_BleedingHandlerComponent* BleedingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_AIWorldTracingComponent* AIWorldTracingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* AimAssistCapsule;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* ShootableHelmetCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StartWithWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ShootableHelmetBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UIGS_InteractionStealthKillComponent* InteractionStealthKill;
    
public:
    APaybackAICharacter(const FObjectInitializer& ObjectInitializer);

};

