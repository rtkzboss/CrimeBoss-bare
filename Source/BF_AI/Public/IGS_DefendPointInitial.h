#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_DefendPointBase.h"
#include "IGS_DefendPointInitial.generated.h"

class UShapeComponent;

UCLASS()
class BF_AI_API AIGS_DefendPointInitial : public AIGS_DefendPointBase {
    GENERATED_BODY()
public:
    AIGS_DefendPointInitial(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsInAssignCharArea(FVector Pos) const;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UShapeComponent* AssignCharShape;
    
};

