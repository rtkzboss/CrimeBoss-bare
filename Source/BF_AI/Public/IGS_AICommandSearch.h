#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandSearch.generated.h"

class UIGS_SearchPointComponent;

UCLASS()
class BF_AI_API UIGS_AICommandSearch : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandSearch();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UIGS_SearchPointComponent*> PointsToSearch;
    
};

