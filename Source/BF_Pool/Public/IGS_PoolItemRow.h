#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EIGS_PoolNetMode.h"
#include "Templates/SubclassOf.h"
#include "IGS_PoolItemRow.generated.h"

class AActor;
class UIGS_PoolID;

USTRUCT(BlueprintType)
struct BF_POOL_API FIGS_PoolItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_PoolID> ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> CustomPoolObjectClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_PoolNetMode PoolNetMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDynamic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsCircular;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InitialAllocateCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SoftLimitBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SoftLimitAllocateCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HardLimitAllocateCount;
    
    FIGS_PoolItemRow();
};

