#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_StealthVoiceovers.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_StealthVoiceovers : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_StealthVoiceovers();

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Idle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> DefaultGuardRadioReactionsForStrikes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText GangstersOffenceReaction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText GangstersBumpInto;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientInspect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientDutyPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientDutyItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientPanic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientPanicShootout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientPanicAimAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> AmbientReportingEmpToGuard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientReportingCivToEmp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText AmbientReportingCivToGuard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> AmbientReportingCivUsingPhones;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReactionVoiceoversCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReactionVoiceoversDistanceMaxToPlayer;
    
};

