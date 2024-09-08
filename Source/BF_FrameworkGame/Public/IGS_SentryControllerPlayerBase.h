#pragma once
#include "CoreMinimal.h"
#include "IGS_SentryControllerFramework.h"
#include "IGS_SentryControllerPlayerBase.generated.h"

class AIGS_DetectorBase;
class AIGS_PlayerControllerRoot;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_SentryControllerPlayerBase : public AIGS_SentryControllerFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUsePitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseYaw;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_DetectorBase* PossedPawn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_PlayerControllerRoot* PlayerController;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentYaw;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CurrentPitch;
    
public:
    AIGS_SentryControllerPlayerBase(const FObjectInitializer& ObjectInitializer);

};

