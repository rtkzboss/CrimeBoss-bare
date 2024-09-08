#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_CoverPointBase.generated.h"

class UBillboardComponent;

UCLASS(Config=Inherit)
class BF_COVERS_API AIGS_CoverPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLocked;
    
    UPROPERTY(EditAnywhere)
    bool ShowDebug;
    
    UPROPERTY(EditAnywhere)
    bool ShowShootingRange;
    
    UPROPERTY(EditAnywhere)
    bool ShowSideSteps;
    
    UPROPERTY(EditAnywhere)
    bool ShowSideStepsOnly;
    
    UPROPERTY(EditAnywhere)
    bool ShowAngles;
    
    UPROPERTY(EditAnywhere)
    bool ShowStanding;
    
private:
    UPROPERTY(Instanced)
    UBillboardComponent* SpriteComponent;
    
public:
    AIGS_CoverPointBase(const FObjectInitializer& ObjectInitializer);

};

