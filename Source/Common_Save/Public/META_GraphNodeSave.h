#pragma once
#include "CoreMinimal.h"
#include "META_GraphNodeSave.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_GraphNodeSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UObject> Graph;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NodeId;

    FMETA_GraphNodeSave();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_GraphNodeSave&) { return 0; }
FORCEINLINE bool operator==(const FMETA_GraphNodeSave&, const FMETA_GraphNodeSave&) { return true; }
