#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomType.h"
#include "IGS_RoomTypeChangedSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_RoomTypeChangedSignature, EIGS_RoomType, outRoomType, EIGS_RoomType, outPreviousRoomType);
