#pragma once
#include "CoreMinimal.h"
#include "META_Loan.h"
#include "META_FinanceManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_FinanceManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Balance;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 HiredCrewSpending;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 MarketSpending;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 DayWhenPlayerReachedBankruptState;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FMETA_Loan CurrentLoan;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FMETA_Loan> CurrentLoanOffers;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 CooldownToNextOffer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 MissionIncome;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 TradeIncome;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 OtherIncome;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 OtherSpending;

    FMETA_FinanceManagerSaveData();
};
