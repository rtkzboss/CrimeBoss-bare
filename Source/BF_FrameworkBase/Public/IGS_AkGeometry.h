#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_AkGeometry.generated.h"

class UAkGeometryComponent;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_AkGeometry : public AActor {
    GENERATED_BODY()
public:
    AIGS_AkGeometry(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMeshComponent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAkGeometryComponent* AkGeometry;

};
