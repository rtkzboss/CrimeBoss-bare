#pragma once
#include "CoreMinimal.h"
#include "IGS_AISpawnPoint.h"
#include "IGS_AISpawnPointVIP.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_AISpawnPointVIP : public AIGS_AISpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<AIGS_GameCharacterFramework>> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpawnUnique;
    
    AIGS_AISpawnPointVIP(const FObjectInitializer& ObjectInitializer);

};

