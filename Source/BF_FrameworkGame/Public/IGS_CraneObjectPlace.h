#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_CraneObjectPlace.generated.h"

class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_CraneObjectPlace : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* DetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* PlacePinPoint;
    
public:
    AIGS_CraneObjectPlace(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
};

