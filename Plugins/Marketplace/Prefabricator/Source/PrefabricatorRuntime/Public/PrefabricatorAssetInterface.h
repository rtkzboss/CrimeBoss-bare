#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PrefabricatorEventListener.h"
#include "Templates/SubclassOf.h"
#include "PrefabricatorAssetInterface.generated.h"

UCLASS(Abstract)
class PREFABRICATORRUNTIME_API UPrefabricatorAssetInterface : public UObject {
    GENERATED_BODY()
public:
    UPrefabricatorAssetInterface();

    UPROPERTY(EditAnywhere)
    TSubclassOf<UPrefabricatorEventListener> EventListener;

    UPROPERTY(EditAnywhere)
    bool bReplicates;

};
