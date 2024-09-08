#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_DamageEventType.h"
#include "Templates/SubclassOf.h"
#include "IGS_HitInfo.generated.h"

class AActor;
class AController;
class APawn;
class UDamageType;
class UPhysicalMaterial;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKBASE_API FIGS_HitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<UDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AController> Instigator;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<APawn> InstigatorPawn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> SourceActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UPrimitiveComponent> TargetComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UPhysicalMaterial> PhysicalMaterialHit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Bone;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector_NetQuantize ImpactPoint;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector_NetQuantize Origin;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector_NetQuantizeNormal ImpactNormal;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector_NetQuantizeNormal ShotFromDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_DamageEventType DamageEventType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_TeamSideEnum InstigatorTeamSide;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsHeadshot;
    
    FIGS_HitInfo();
};

