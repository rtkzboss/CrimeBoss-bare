#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_SniperAimData.h"
#include "IGS_SniperAimComponent.generated.h"

class AActor;
class AIGS_AIControllerBase;
class AIGS_WieldableBase;
class UIGS_WieldableInventoryObjectBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SniperAimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_SniperAimComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);

    UFUNCTION()
    void OnRep_SniperAimData();

    UFUNCTION()
    void OnAggroTargetChanged(AIGS_AIControllerBase* InController, AActor* inAggroTarget);

    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ReportFire(bool inIsHit);

    UPROPERTY(ReplicatedUsing=OnRep_SniperAimData)
    FIGS_SniperAimData mR_SniperAimData;

    UPROPERTY(Replicated)
    bool mR_IsLocked;

    UPROPERTY(EditAnywhere)
    FFloatInterval HorizontalOffset;

    UPROPERTY(EditAnywhere)
    FFloatInterval VerticalOffset;

    UPROPERTY(EditAnywhere)
    FFloatInterval HorizontalSpeed;

    UPROPERTY(EditAnywhere)
    FFloatInterval VerticalSpeed;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
