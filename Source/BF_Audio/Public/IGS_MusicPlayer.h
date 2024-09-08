#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_MusicPlayer.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class UAkSwitchValue;
class UIGS_MusicSongDataAsset;
class UStaticMeshComponent;

UCLASS(Abstract, Config=Inherit)
class BF_AUDIO_API AIGS_MusicPlayer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* PlayerMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* StartSongAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* StopSongAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* StreamerModeAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDestroyable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PlayOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopScenicMusicOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopWhenAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkSwitchValue* PlayerTypeSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UIGS_MusicSongDataAsset*> Playlist;
    
    UPROPERTY(ReplicatedUsing=OnRep_PlayerDestroyed)
    bool mR_bIsDestroyed;
    
public:
    AIGS_MusicPlayer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopMusic();
    
    UFUNCTION(BlueprintCallable)
    void StartMusic();
    
protected:
    UFUNCTION()
    void OnSongDuration(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION()
    void OnRep_PlayerDestroyed();
    
};

