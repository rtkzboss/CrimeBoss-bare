#pragma once
#include "CoreMinimal.h"
#include "IGS_VirtualSightInfo.generated.h"

class USkeletalMeshComponent;
class USkeletalMeshSocket;
class UStaticMeshComponent;
class UStaticMeshSocket;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_VirtualSightInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    USkeletalMeshSocket* VirtualSightSkeletalSocket;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* VirtualSightSkeletalMesh;
    
    UPROPERTY()
    UStaticMeshSocket* VirtualSightStaticSocket;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* VirtualSightStaticMesh;
    
    FIGS_VirtualSightInfo();
};

