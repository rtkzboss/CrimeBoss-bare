#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Pawn.h"
#include "IGS_GeneralListenerHeardEventDelegate.h"
#include "IGS_GeneralListener.generated.h"

class AIGS_GeneralListener;
class AIGS_GeneralListenerExclusionVolume;
class UObject;

UCLASS()
class BF_AI_API AIGS_GeneralListener : public APawn, public IGenericTeamAgentInterface {
    GENERATED_BODY()
public:
    AIGS_GeneralListener(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActive(bool Inactive);
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static AIGS_GeneralListener* GetGeneralListener(const UObject* inWCO);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SupportedHearingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartsActive;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_GeneralListenerHeardEvent OnHeardEvent;
    
protected:
    UPROPERTY()
    TArray<AIGS_GeneralListenerExclusionVolume*> ExclusionVolumes;
    

    // Fix for true pure virtual functions not being implemented
};

