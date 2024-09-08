#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_BreachInterface.h"
#include "IGS_AITransitionObjectBase.generated.h"

class UBoxComponent;
class UIGS_GetActorByGameplayTagComponent;
class UIGS_NavLinkComponentFramework;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_AITransitionObjectBase : public AActor, public IIGS_BreachInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_NavLinkComponentFramework* NavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsForced;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_GetActorByGameplayTagComponent* m_GetActorByGameplayTagComponent;
    
public:
    AIGS_AITransitionObjectBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetupNavlink(UBoxComponent* helpersBox) const;
    
    UFUNCTION(BlueprintCallable)
    void SetNavlinkLinkEnabled(bool InValue);
    

    // Fix for true pure virtual functions not being implemented
};

