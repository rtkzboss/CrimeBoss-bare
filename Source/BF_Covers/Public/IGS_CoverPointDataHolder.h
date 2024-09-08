#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_CoverPointDataHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_COVERS_API FIGS_CoverPointDataHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector DirectionToWall;
    
    UPROPERTY(BlueprintReadWrite)
    bool bLeftCoverStanding;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRightCoverStanding;
    
    UPROPERTY(BlueprintReadWrite)
    bool bLeftCoverCrouched;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRightCoverCrouched;
    
    UPROPERTY(BlueprintReadWrite)
    bool bFrontCoverCrouched;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUpCoverCrouched;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCrouchedCover;
    
    FIGS_CoverPointDataHolder();
};

