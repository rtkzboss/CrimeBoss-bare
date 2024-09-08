#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_AkGeometry.generated.h"

class UAkGeometryComponent;
class UStaticMeshComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKBASE_API AIGS_AkGeometry : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAkGeometryComponent* AkGeometry;
    
public:
    AIGS_AkGeometry(const FObjectInitializer& ObjectInitializer);

};

