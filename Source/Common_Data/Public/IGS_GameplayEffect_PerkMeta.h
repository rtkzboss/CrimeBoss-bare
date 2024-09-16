#pragma once
#include "CoreMinimal.h"
#include "IGS_GameplayEffect_PerkBase.h"
#include "META_PerkParameters.h"
#include "IGS_GameplayEffect_PerkMeta.generated.h"

UCLASS()
class COMMON_DATA_API UIGS_GameplayEffect_PerkMeta : public UIGS_GameplayEffect_PerkBase {
    GENERATED_BODY()
public:
    UIGS_GameplayEffect_PerkMeta();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_PerkParameters Parameters;

};
