#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_StealthVoiceoversInstance.generated.h"

class UIGS_StealthVoiceovers;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_StealthVoiceoversInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UIGS_StealthVoiceovers* StealthVoiceovers;
    
    UIGS_StealthVoiceoversInstance();

    UFUNCTION(BlueprintPure)
    float GetReactionVoiceoversDistanceMaxToPlayer() const;
    
    UFUNCTION(BlueprintPure)
    float GetReactionVoiceoversCooldown() const;
    
    UFUNCTION(BlueprintPure)
    FText GetIdle() const;
    
    UFUNCTION(BlueprintPure)
    FText GetGangstersOffenceReaction() const;
    
    UFUNCTION(BlueprintPure)
    FText GetGangstersBumpInto() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FText> GetDefaultGuardRadioReactionsForStrikes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FText> GetAmbientReportingEmpToGuard() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FText> GetAmbientReportingCivUsingPhones() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientReportingCivToGuard() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientReportingCivToEmp() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientPanicShootout() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientPanicAimAt() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientPanic() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientInspect() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientDutyPlayer() const;
    
    UFUNCTION(BlueprintPure)
    FText GetAmbientDutyItem() const;
    
};

