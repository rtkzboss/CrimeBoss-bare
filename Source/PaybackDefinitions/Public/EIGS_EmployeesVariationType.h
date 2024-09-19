#pragma once
#include "CoreMinimal.h"
#include "EIGS_EmployeesVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_EmployeesVariationType : uint8 {
    US_None UMETA(DisplayName=None),
    US_Office UMETA(DisplayName=Office),
    US_Bank UMETA(DisplayName=Bank),
    US_Women UMETA(DisplayName=Women),
    US_Workers UMETA(DisplayName=Workers),
    US_Satellite UMETA(DisplayName=Satellite),
    US_Jewelery UMETA(DisplayName=Jewelery),
    US_Grocery UMETA(DisplayName=Grocery),
    US_CleaningMaint UMETA(DisplayName="Cleaning Maint"),
    US_Cook_Chef UMETA(DisplayName="Cook Chef"),
    US_FPSMaxIndex = 128 UMETA(DisplayName="FPS Max Index"),
    US_Unknown = 255 UMETA(DisplayName=Unknown),
};
