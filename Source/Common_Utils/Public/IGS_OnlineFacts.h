#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_OnlineFacts.generated.h"

UCLASS(BlueprintType)
class COMMON_UTILS_API UIGS_OnlineFacts : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_OnlineFacts();

    UFUNCTION(BlueprintCallable)
    void RefreshOnlineData();

    UFUNCTION(BlueprintPure)
    bool GetIsActive(const FGameplayTag& inID, bool inDefault) const;

    UFUNCTION(BlueprintPure)
    bool Exists(const FGameplayTag& inID) const;

};
