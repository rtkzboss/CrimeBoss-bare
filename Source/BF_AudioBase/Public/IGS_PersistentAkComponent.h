#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "IGS_PersistentAkComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AUDIOBASE_API UIGS_PersistentAkComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UIGS_PersistentAkComponent(const FObjectInitializer& ObjectInitializer);

};

