#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomArea.generated.h"

UENUM()
enum class EIGS_RoomArea {
    Unknown,
    Backdrop,
    NonPlayable,
    Playable,
};

