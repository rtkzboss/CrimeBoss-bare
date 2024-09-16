#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayEffect.h"
#include "Templates/SubclassOf.h"
#include "IGS_GASDefaultAttributesDataAsset.generated.h"

UCLASS()
class BF_FRAMEWORKBASE_API UIGS_GASDefaultAttributesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_GASDefaultAttributesDataAsset();

    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> AttributeInitGEs;

};
