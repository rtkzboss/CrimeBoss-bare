#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PrefabricatorPropertyAssetMapping.h"
#include "PrefabricatorProperty.generated.h"

UCLASS()
class PREFABRICATORRUNTIME_API UPrefabricatorProperty : public UObject {
    GENERATED_BODY()
public:
    UPrefabricatorProperty();

    UPROPERTY()
    FString PropertyName;

    UPROPERTY()
    FString ExportedValue;

    UPROPERTY()
    TArray<FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings;

    UPROPERTY()
    bool bIsCrossReferencedActor;

    UPROPERTY()
    FGuid CrossReferencePrefabActorId;

};
