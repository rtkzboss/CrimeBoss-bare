#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "GameFramework/Actor.h"
#include "IGS_ShieldBase.generated.h"

class UIGS_BreakableWindowComponent;
class UIGS_ObjectStatus;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ShieldBase : public AActor, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* ShieldMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_BreakableWindowComponent* OptionalBreakableWindowComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_ObjectStatus* OptionalBreakableWindowObjectStatusComponent;
    
    AIGS_ShieldBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnDetachedEvent();
    

    // Fix for true pure virtual functions not being implemented
};

