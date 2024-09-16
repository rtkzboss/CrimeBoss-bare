#include "META_DetectiveNotification.h"
#include "Templates/SubclassOf.h"

UMETA_DetectiveNotification::UMETA_DetectiveNotification() {
}

void UMETA_DetectiveNotification::SetData(TSubclassOf<UMETA_DetectiveID> inDetective, EMETA_Gang inGang, UMapTile* inTile) {
}

UMapTile* UMETA_DetectiveNotification::GetTile() const {
    return nullptr;
}

TSubclassOf<UMETA_DetectiveID> UMETA_DetectiveNotification::GetDetective() const {
    return nullptr;
}

