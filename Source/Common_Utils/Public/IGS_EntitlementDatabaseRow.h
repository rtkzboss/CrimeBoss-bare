#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_PS5Entitlement.h"
#include "IGS_EntitlementDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FIGS_EntitlementDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ID;

    UPROPERTY(EditAnywhere)
    FText Title;

    UPROPERTY(EditAnywhere)
    bool RequiresCampaignRestart;

    UPROPERTY(EditAnywhere)
    int32 Steam_AppId;

    UPROPERTY(EditAnywhere)
    FString Steam_URL;

    UPROPERTY(EditAnywhere)
    FString Epic_OfferId;

    UPROPERTY(EditAnywhere)
    FString Epic_OfferURL;

    UPROPERTY(EditAnywhere)
    FIGS_PS5Entitlement PS5_Offers;

    UPROPERTY(EditAnywhere)
    FString XBOX_OfferId;

    UPROPERTY(EditAnywhere)
    FGameplayTag OnlineFact;

    UPROPERTY(EditAnywhere)
    bool IsDLC;

    COMMON_UTILS_API FIGS_EntitlementDatabaseRow();
};
