#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "NavModifierVolume.h"
#include "IGS_ChokeVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_ChokeVolume : public ANavModifierVolume {
    GENERATED_BODY()
public:
    AIGS_ChokeVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnComponentEndOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inPrimitiveComponent1, int32 ini);

    UFUNCTION()
    void OnComponentBeginOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inPrimitiveComponent1, int32 ini, bool inArg, const FHitResult& inHitResult);

};
