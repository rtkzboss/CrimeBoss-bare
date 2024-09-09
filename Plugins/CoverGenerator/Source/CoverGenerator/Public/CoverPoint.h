#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CoverPoint.generated.h"

class AController;

UCLASS(BlueprintType)
class COVERGENERATOR_API UCoverPoint : public UObject {
    GENERATED_BODY()
public:
    UCoverPoint();

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector Location;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    FVector m_DirectionToWall;
    
public:
    UPROPERTY()
    AController* OccupiedBy;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float CooldownEndTime;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bLeftCoverStanding: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bRightCoverStanding: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bLeftCoverCrouched: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bRightCoverCrouched: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bFrontCoverCrouched: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bUpCoverCrouched: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bCrouchedCover: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 IsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 IsLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 CoverReached: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bIsManual: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 IsValid: 1;
    
};

