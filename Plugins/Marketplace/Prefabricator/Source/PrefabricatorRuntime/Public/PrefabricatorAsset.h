#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PrefabricatorActorData.h"
#include "PrefabricatorAssetInterface.h"
#include "PrefabricatorAsset.generated.h"

class UThumbnailInfo;

UCLASS()
class PREFABRICATORRUNTIME_API UPrefabricatorAsset : public UPrefabricatorAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPrefabricatorActorData> ActorData;
    
    UPROPERTY()
    TEnumAsByte<EComponentMobility::Type> PrefabMobility;
    
    UPROPERTY()
    FGuid LastUpdateID;
    
    UPROPERTY()
    UThumbnailInfo* ThumbnailInfo;
    
    UPROPERTY()
    uint32 Version;
    
    UPrefabricatorAsset();

};

