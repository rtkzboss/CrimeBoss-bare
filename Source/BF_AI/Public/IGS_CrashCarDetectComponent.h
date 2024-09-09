#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CrashDetectType.h"
#include "IGS_EndCrashSignatureDelegate.h"
#include "IGS_StartCrashSignatureDelegate.h"
#include "IGS_CrashCarDetectComponent.generated.h"

class AActor;
class AIGS_VehicleCar;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_CrashCarDetectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_CrashCarDetectComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnCrashDetectComponentBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallOnStartCrashDelegate(FHitResult inHitResult);
    
    UFUNCTION(BlueprintCallable)
    void CallOnEndCrashDelegate();
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EIGS_CrashDetectType CrashDetectType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FName> TagBlacklist;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_StartCrashSignature OnStartCrashDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_EndCrashSignature OnEndCrashDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_VehicleCar* CarOwner;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UShapeComponent* CrashDetectCollision;
    
};

