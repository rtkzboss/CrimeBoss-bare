#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_NavLinkBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_NavLinkRappel.generated.h"

class AIGS_RopeActor;

UCLASS()
class BF_AI_API AIGS_NavLinkRappel : public AIGS_NavLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTransitionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisableRopeUpdateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FallingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RopeSpawnOffset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AIGS_RopeActor> RopeClass;
    
    UPROPERTY()
    AIGS_RopeActor* RopeActor;
    
    AIGS_NavLinkRappel(const FObjectInitializer& ObjectInitializer);

};

