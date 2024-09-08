#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_NavLinkComponentBase.h"
#include "IGS_NavLinkJumpComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_NavLinkJumpComponent : public UIGS_NavLinkComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BezierControlPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector BezierControlPointOffset;
    
    UIGS_NavLinkJumpComponent(const FObjectInitializer& ObjectInitializer);

};

