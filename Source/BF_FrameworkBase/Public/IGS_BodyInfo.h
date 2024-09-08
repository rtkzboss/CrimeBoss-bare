#pragma once
#include "CoreMinimal.h"
#include "EIGS_Ethnicity.h"
#include "IGS_BodyInfo.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_BodyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasHeels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMetahuman;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsMutable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsRobot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Fatness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_Ethnicity Ethnicity;
    
    FIGS_BodyInfo();
};

