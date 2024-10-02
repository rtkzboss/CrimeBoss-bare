#pragma once
#include "CoreMinimal.h"
#include "META_Loan.h"
#include "META_Interval.h"
#include "IGS_FinanceManagerBaseComponent.h"
#include "META_FinancialManagerComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_FinancialManagerComponent : public UIGS_FinanceManagerBaseComponent {
    GENERATED_BODY()
public:
    UMETA_FinancialManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadWrite)
    FMETA_Loan CurrentLoan;

    UPROPERTY(BlueprintReadWrite)
    TArray<FMETA_Loan> CurrentLoanOffers;

    UPROPERTY(BlueprintReadWrite)
    int32 CooldownToNextOffer;

    UPROPERTY(BlueprintReadWrite)
    int32 Balance;

    UPROPERTY(BlueprintReadWrite)
    FMETA_Interval BalanceCap;

    UPROPERTY(BlueprintReadWrite)
    int32 DayWhenPlayerReachedBankruptState;

    UPROPERTY(BlueprintReadWrite)
    int32 HiredCrewSpending;

    UPROPERTY(BlueprintReadWrite)
    int32 MarketSpending;

    UPROPERTY(BlueprintReadWrite)
    int32 MissionIncome;

    UPROPERTY(BlueprintReadWrite)
    int32 TradeIncome;

    UPROPERTY(BlueprintReadWrite)
    int32 OtherIncome;

    UPROPERTY(BlueprintReadWrite)
    int32 OtherSpending;

    UPROPERTY(BlueprintReadWrite)
    int32 InitialBalance;

};
