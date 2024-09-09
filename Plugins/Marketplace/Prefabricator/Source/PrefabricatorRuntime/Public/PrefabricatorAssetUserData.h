#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetUserData.h"
#include "PrefabricatorAssetUserData.generated.h"

class APrefabActor;

UCLASS(EditInlineNew)
class PREFABRICATORRUNTIME_API UPrefabricatorAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPrefabricatorAssetUserData();

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<APrefabActor> PrefabActor;
    
    UPROPERTY(VisibleAnywhere)
    FGuid ItemId;
    
};

