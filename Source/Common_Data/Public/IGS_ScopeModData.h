#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_ScopeType.h"
#include "IGS_ScopeModData.generated.h"

class UMaterialInstance;
class UStaticMesh;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ScopeModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsDynamicScope;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> DynamicScopeMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> ReticleMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInstance> ReticleTortillaMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_ScopeType ScopeType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> ScopeZoom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector WeaponTortillaOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeaponTortillaAimFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector AimOffsetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector AimOffsetRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector AttachOffsetVector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScopeInPercent;
    
    FIGS_ScopeModData();
};

