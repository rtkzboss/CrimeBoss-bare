#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AITransitionObjectBase.h"
#include "IGS_Rappel.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_RappelInteractiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_Rappel : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    AIGS_Rappel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetEnabled(bool inEnabled) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_RappelInteractiveComponent* RappelTopInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldRotateView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OneTimeUse;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool OnceUsed;
    
};

