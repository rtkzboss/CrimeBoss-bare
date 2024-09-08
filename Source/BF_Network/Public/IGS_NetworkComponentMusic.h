#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_MusicMissionState.h"
#include "IGS_NetworkComponentMusic.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_NETWORK_API UIGS_NetworkComponentMusic : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_MusicMissionState)
    EIGS_MusicMissionState mR_MusicMissionState;
    
    UPROPERTY(ReplicatedUsing=OnRep_MusicPackIndex)
    int32 mR_MusicPackIndex;
    
    UPROPERTY(ReplicatedUsing=OnRep_MusicCustomPackName)
    FName mR_MusicCustomPackName;
    
public:
    UIGS_NetworkComponentMusic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_MusicPackIndex() const;
    
    UFUNCTION()
    void OnRep_MusicMissionState() const;
    
    UFUNCTION()
    void OnRep_MusicCustomPackName() const;
    
};

