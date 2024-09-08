#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_RoomSecurityType.h"
#include "EIGS_RoomType.h"
#include "EIGS_PlayerLockState.h"
#include "IGS_OnLockStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_LockComponent.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InventoryObjectFramework;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_RoomType KeyRoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_RoomSecurityType KeyRoomSecurityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqueKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText UniqueKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_InventoryObjectFramework> EmployeeKeyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_InventoryObjectFramework> SecurityKeyClass;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnLockStateChanged OnLockStateChanged;
    
    UIGS_LockComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLockState(bool inLocked);
    
    UFUNCTION(BlueprintPure)
    bool GetLockState() const;
    
    UFUNCTION(BlueprintCallable)
    void GetLockedStateForPlayer(AIGS_GameCharacterFramework* inInstigator, EIGS_PlayerLockState& outBranches);
    
};

