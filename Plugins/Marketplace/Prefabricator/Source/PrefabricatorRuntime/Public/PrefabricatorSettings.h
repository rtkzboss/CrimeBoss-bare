#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EPrefabricatorPivotPosition.h"
#include "PrefabricatorSettings.generated.h"

UCLASS(DefaultConfig, Config=Prefabricator)
class PREFABRICATORRUNTIME_API UPrefabricatorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPrefabricatorSettings();

    UPROPERTY(Config, EditAnywhere)
    EPrefabricatorPivotPosition PivotPosition;

    UPROPERTY(Config, EditAnywhere)
    bool bAllowDynamicUpdate;

    UPROPERTY(Config, EditAnywhere)
    TSet<UClass*> IgnoreBoundingBoxForObjects;

    UPROPERTY(Config, EditAnywhere)
    float DefaultThumbnailPitch;

    UPROPERTY(Config, EditAnywhere)
    float DefaultThumbnailYaw;

    UPROPERTY(Config, EditAnywhere)
    float DefaultThumbnailZoom;

};
