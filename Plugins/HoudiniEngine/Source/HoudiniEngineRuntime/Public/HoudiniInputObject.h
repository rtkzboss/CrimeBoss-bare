#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EHoudiniInputObjectType.h"
#include "HoudiniInputObject.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputObject : public UObject {
    GENERATED_BODY()
public:
    UHoudiniInputObject();

    UPROPERTY()
    TSoftObjectPtr<UObject> InputObject;

    UPROPERTY()
    FTransform Transform;

    UPROPERTY()
    EHoudiniInputObjectType Type;

    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputNodeId;

    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputObjectNodeId;

    UPROPERTY(DuplicateTransient)
    FGuid Guid;

protected:
    UPROPERTY(DuplicateTransient)
    bool bHasChanged;

    UPROPERTY(DuplicateTransient)
    bool bNeedsToTriggerUpdate;

    UPROPERTY(DuplicateTransient)
    bool bTransformChanged;

    UPROPERTY()
    bool bImportAsReference;

    UPROPERTY()
    bool bImportAsReferenceRotScaleEnabled;

    UPROPERTY()
    bool bCanDeleteHoudiniNodes;

};
