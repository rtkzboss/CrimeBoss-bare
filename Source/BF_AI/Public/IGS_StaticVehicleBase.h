#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_StaticVehicleBase.generated.h"

class UNavModifierComponent;
class UStaticMeshComponent;

UCLASS()
class BF_AI_API AIGS_StaticVehicleBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_StaticVehicleBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void Server_SetColor(FColor InColor);

protected:
    UFUNCTION()
    void OnRep_OnColorChanged() const;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* VehicleMesh;

    UPROPERTY(Instanced, VisibleAnywhere)
    UNavModifierComponent* NavModifier;

    UPROPERTY(ReplicatedUsing=OnRep_OnColorChanged)
    FColor mR_Color;

    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool ClearCanAffectNavigationFlag;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
