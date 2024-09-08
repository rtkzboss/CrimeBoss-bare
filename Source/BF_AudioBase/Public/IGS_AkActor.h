#pragma once
#include "CoreMinimal.h"
#include "EIGS_SignificanceValue.h"
#include "GameFramework/Actor.h"
#include "IGS_AkActor.generated.h"

class UAkComponent;
class UIGS_SignificanceComponent;

UCLASS()
class BF_AUDIOBASE_API AIGS_AkActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UIGS_SignificanceComponent* SignificanceComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UAkComponent* AkComponent;
    
public:
    AIGS_AkActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostSignificance(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue);
    
public:
    UFUNCTION(BlueprintPure)
    UAkComponent* GetAkComponent() const;
    
};

