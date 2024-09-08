#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/BodyInstance.h"
#include "EIGS_BoxSphereShape.h"
#include "IGS_ActiveStateChangedDynamicSignatureDelegate.h"
#include "IGS_BoxSphere.generated.h"

class UIGS_CustomBoxComponent;
class UIGS_CustomSphereComponent;
class USceneComponent;
class UShapeComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_BoxSphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_ActiveStateChangedDynamicSignature OnActiveStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_BoxSphereShape Shape;
    
    UPROPERTY(EditDefaultsOnly)
    FColor Color;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_IsActive)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ExtentOrRadius)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_ExtentOrRadius)
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bGenerateOverlapEvents: 1;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY()
    bool bDisableShapeSelection;
    
private:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UIGS_CustomBoxComponent* BoxCollisionComponent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UIGS_CustomSphereComponent* SphereCollisionComponent;
    
public:
    AIGS_BoxSphere(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool Inactive);
    
protected:
    UFUNCTION()
    void OnRep_IsActive();
    
private:
    UFUNCTION()
    void OnRep_ExtentOrRadius();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInShape(FVector InLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_BoxSphereShape GetShapeType() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGenerateOverlapEvents() const;
    
    UFUNCTION(BlueprintPure)
    UShapeComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

