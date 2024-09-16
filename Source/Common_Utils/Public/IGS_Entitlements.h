#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_EntitlementsDataRefreshedSignature.h"
#include "IGS_Entitlements.generated.h"

class UObject;

UCLASS(BlueprintType)
class COMMON_UTILS_API UIGS_Entitlements : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_Entitlements();

    UFUNCTION(BlueprintCallable)
    bool UserEntitledTo(FGameplayTag inEntitlementTag);

    UFUNCTION(BlueprintCallable)
    bool RequiresCampaignRestart(FGameplayTag inEntitlementTag);

    UFUNCTION(BlueprintCallable)
    void Refresh();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool OpenStore(const UObject* inWCO, FGameplayTag inEntitlementTag);

    UFUNCTION(BlueprintCallable)
    void LoadDebugEntitlements();

    UFUNCTION(BlueprintPure)
    bool IsEntitlementDLC(FGameplayTag inEntitlement) const;

    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetOwnedEntitlements();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GetEntitlementTitle(UObject* inWCO, const FGameplayTag inEntitlement, FText& OutText);

    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetAllEntitlements();

    UFUNCTION(BlueprintCallable)
    void Connect();

    UFUNCTION(BlueprintCallable)
    void AddDebugEntitlement(FGameplayTag inEntitlement);

    UPROPERTY(BlueprintAssignable)
    FIGS_EntitlementsDataRefreshedSignature OnEntitlementDataRefreshed;

};
