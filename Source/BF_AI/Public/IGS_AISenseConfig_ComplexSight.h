#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "IGS_AISenseConfig_ComplexSight.generated.h"

class UIGS_AISense_ComplexSight;

UCLASS(EditInlineNew, Config=Game)
class BF_AI_API UIGS_AISenseConfig_ComplexSight : public UAISenseConfig {
    GENERATED_BODY()
public:
    UIGS_AISenseConfig_ComplexSight();

    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UIGS_AISense_ComplexSight> Implementation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float SightRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float LoseSightRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float AutoSuccessRangeFromLastSeenLocation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float PointOfViewBackwardOffset;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float NearClippingRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float AutoSuccessSightStrength;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseVisionShapes: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseMainCone: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseFrontBox: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bUseSixthSenseCircle: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VerticalDistanceStart;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float VerticalDistanceEnd;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MainVisionConeHalfAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MainVisionConeMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FrontBoxWidth;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FrontBoxMaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SixthSenseCircleRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SixthSenseCircleBackwardsOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SixthSenseVisionStrengthLimit;
    
};

