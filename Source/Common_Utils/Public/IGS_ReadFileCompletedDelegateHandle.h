#pragma once
#include "CoreMinimal.h"
#include "IGS_ReadFileCompletedDelegateHandle.generated.h"

USTRUCT()
struct FIGS_ReadFileCompletedDelegateHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Filename;

    COMMON_UTILS_API FIGS_ReadFileCompletedDelegateHandle();
};
