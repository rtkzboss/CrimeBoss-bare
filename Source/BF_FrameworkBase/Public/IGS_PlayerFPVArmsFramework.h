#pragma once
#include "CoreMinimal.h"
#include "FPVArmsAbstract.h"
#include "IGS_PlayerFPVArmsFramework.generated.h"

class AIGS_GameCharacterFramework;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Config=Inherit)
class BF_FRAMEWORKBASE_API AIGS_PlayerFPVArmsFramework : public AFPVArmsAbstract {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialParameterCollection* WieldableMPC;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMaterialParameterCollectionInstance* WieldableMPCInstance;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USkeletalMeshComponent* ArmsSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* ArmsRootComponent;
    
public:
    AIGS_PlayerFPVArmsFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetOwningPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetArmsSkeletalMesh() const;
    
};

