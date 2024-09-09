#pragma once
#include "CoreMinimal.h"
#include "META_MediaCondition.h"
#include "META_MovieCondition.generated.h"

class UBinkMediaPlayer;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_MovieCondition : public UMETA_MediaCondition {
    GENERATED_BODY()
public:
    UMETA_MovieCondition();

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* Movie;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bAlreadyPlayingMovie;
    
};

