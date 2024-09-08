#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_MetalDetector.generated.h"

class UAkComponent;
class UBoxComponent;
class UPointLightComponent;
class UPrimitiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_MetalDetector : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAkComponent* AlarmAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* BoxCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPointLightComponent* AlarmLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPointLightComponent* StatusLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlarmLightDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AINoiseLoudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AINoiseMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerOffenceDuration;
    
    UPROPERTY(ReplicatedUsing=OnRep_OnSetEnabled)
    bool mR_bIsEnabled;
    
public:
    AIGS_MetalDetector(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool inState);
    
protected:
    UFUNCTION()
    void SetAlarmDisabledDelayed() const;
    
    UFUNCTION()
    void OnRep_OnSetEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitProperties();
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_OnDetected();
    
};

