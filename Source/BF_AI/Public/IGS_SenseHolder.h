#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_SenseHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SenseHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastSeenLocation;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector OwnerLocationWhenLastSeen;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastHeardLocation;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastShotLocation;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastShotDirection;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastDamageTakenLocation;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LastKnowLocation;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SeenTimestamp;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float HeardTimestamp;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ShotTimestamp;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FootstepHearedTimestamp;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool FootstepTowardsPlayer;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DamageTakenTimestamp;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SensedFromFriends;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastDamageTakenSum;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DamageTakenSum;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LastSeenStrength;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 IsSeen: 1;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 IsSeenAndInCone: 1;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 WasHeard: 1;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 WasShotHeard: 1;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 WasDamageTaken: 1;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 StrongStimulusReceived: 1;

    BF_AI_API FIGS_SenseHolder();
};
