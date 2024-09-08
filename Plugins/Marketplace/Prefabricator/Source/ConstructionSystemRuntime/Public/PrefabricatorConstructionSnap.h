#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabricatorConstructionSnap.generated.h"

class UPrefabricatorConstructionSnapComponent;

UCLASS(Config=Inherit)
class CONSTRUCTIONSYSTEMRUNTIME_API APrefabricatorConstructionSnap : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent;
    
public:
    APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer);

};

