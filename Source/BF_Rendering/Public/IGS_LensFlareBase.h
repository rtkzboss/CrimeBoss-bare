#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LensFlareBase.generated.h"

class UMaterialInstanceDynamic;
class USceneComponent;
class USphereComponent;

UCLASS(Abstract, Config=Inherit)
class BF_RENDERING_API AIGS_LensFlareBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USphereComponent* SourceBounds;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInstanceDynamic* CoreMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInstanceDynamic* StreakMaterialDynamic;
    
public:
    AIGS_LensFlareBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PostConstruction();
    
};

