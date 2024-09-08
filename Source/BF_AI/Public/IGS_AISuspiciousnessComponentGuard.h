#pragma once
#include "CoreMinimal.h"
#include "IGS_AISuspiciousnessComponentBase.h"
#include "IGS_AISuspiciousnessComponentGuard.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AISuspiciousnessComponentGuard : public UIGS_AISuspiciousnessComponentBase {
    GENERATED_BODY()
public:
    UIGS_AISuspiciousnessComponentGuard(const FObjectInitializer& ObjectInitializer);

};

