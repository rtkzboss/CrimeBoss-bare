#pragma once
#include "CoreMinimal.h"
#include "IGS_IntelBase.h"
#include "IGS_ShortcutIntel.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UIGS_ShortcutIntel : public UIGS_IntelBase {
    GENERATED_BODY()
public:
    UIGS_ShortcutIntel();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShortcutFound;
    
};

