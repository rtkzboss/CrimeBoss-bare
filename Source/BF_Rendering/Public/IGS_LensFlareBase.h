#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LensFlareBase.generated.h"

class UMaterialInstanceDynamic;
class USceneComponent;
class USphereComponent;

UCLASS(Abstract)
class BF_RENDERING_API AIGS_LensFlareBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_LensFlareBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void PostConstruction();

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USceneComponent* SceneComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USphereComponent* SourceBounds;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInstanceDynamic* CoreMaterialDynamic;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInstanceDynamic* StreakMaterialDynamic;

};
