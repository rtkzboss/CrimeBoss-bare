#pragma once
#include "CoreMinimal.h"
#include "IGS_OffenceData.h"
#include "IGS_OffenceDataGuard.generated.h"

UCLASS()
class UIGS_OffenceDataGuard : public UIGS_OffenceData {
    GENERATED_BODY()
public:
    UIGS_OffenceDataGuard();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText RadioDialogueID;
    
};

