#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AITransitionObjectBase.h"
#include "IGS_Zipline.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_ZiplineInteractiveComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_Zipline : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_ZiplineInteractiveComponent* ZiplineInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> User;
    
    AIGS_Zipline(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

