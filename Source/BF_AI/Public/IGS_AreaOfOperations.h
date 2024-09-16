#pragma once
#include "CoreMinimal.h"
#include "IGS_AreaOfOperations.generated.h"

class AIGS_RoomBase;

USTRUCT()
struct FIGS_AreaOfOperations {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<AIGS_RoomBase*> AreaOfOperation;

    UPROPERTY(VisibleAnywhere)
    TArray<AIGS_RoomBase*> AllowedPath;

    UPROPERTY(VisibleAnywhere)
    AIGS_RoomBase* LastStartingRoom;

    UPROPERTY(VisibleAnywhere)
    int32 LastDepth;

    UPROPERTY(VisibleAnywhere)
    bool Enabled;

    BF_AI_API FIGS_AreaOfOperations();
};
