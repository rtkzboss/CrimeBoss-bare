#pragma once
#include "CoreMinimal.h"
#include "ESessionSettingSearchResult.generated.h"

UENUM()
enum class ESessionSettingSearchResult : uint8 {
    Found,
    NotFound,
    WrongType,
};

