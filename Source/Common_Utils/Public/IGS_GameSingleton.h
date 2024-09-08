#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_GameSingleton.generated.h"

UCLASS(NotPlaceable, Config=Game)
class COMMON_UTILS_API UIGS_GameSingleton : public UObject {
    GENERATED_BODY()
public:
    UIGS_GameSingleton();

};

