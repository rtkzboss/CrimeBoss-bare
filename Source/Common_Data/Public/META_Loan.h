#pragma once
#include "CoreMinimal.h"
#include "META_Loan.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_Loan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ActivatedDay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BorrowedCash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DailyRepaymentInPercentsFromBorrowedCash;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DaysToRepay;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CooldownToNextOffer;

    FMETA_Loan();
};
