#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_WalkRope.generated.h"

class AIGS_PlayerCharacter;
class UBoxComponent;
class UCableComponent;
class UPrimitiveComponent;
class USplineComponent;
class UTextRenderComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_WalkRope : public AActor {
    GENERATED_BODY()
public:
    AIGS_WalkRope(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void SetTargetLook(FRotator inTargetLook);

    UFUNCTION(BlueprintCallable)
    void SetPlayerOnRope(bool inOnRope);

    UFUNCTION(BlueprintNativeEvent)
    void ResetTargetLook();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnStartTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION(BlueprintNativeEvent)
    void OnEndTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
    UFUNCTION(BlueprintNativeEvent)
    void BlueprintEditorTick(float DeltaTime);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseEditorTick;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkSpeed;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DeltaLookDown;

protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UCableComponent* WalkRope;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USplineComponent* WalkSpline;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UBoxComponent* StartTriggerBox;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UBoxComponent* EndTriggerBox;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UTextRenderComponent* StartText;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UTextRenderComponent* EndText;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AIGS_PlayerCharacter* Player;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRotator ResetLookTarget;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool OnRopeWalking;

};
