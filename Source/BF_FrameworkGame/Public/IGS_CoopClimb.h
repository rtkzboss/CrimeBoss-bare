#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_CoopClimb.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_VentShaft;
class UCapsuleComponent;
class UIGS_InteractiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_CoopClimb : public AActor {
    GENERATED_BODY()
public:
    AIGS_CoopClimb(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnUsed(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_InteractiveComponent* CoopClimbInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AIGS_VentShaft> VentShaft;
    
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UCapsuleComponent* CapsuleComponent;
    
};

