#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabricatorConstructionSnap.generated.h"

class UPrefabricatorConstructionSnapComponent;

UCLASS()
class CONSTRUCTIONSYSTEMRUNTIME_API APrefabricatorConstructionSnap : public AActor {
    GENERATED_BODY()
public:
    APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent;
    
};

