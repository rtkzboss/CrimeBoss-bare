#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.h"
#include "IGS_SecurityTierChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIGS_SecurityTierChangedSignature, EIGS_RoomSecurityType, outSecurity, EIGS_RoomSecurityType, outPreviousSecurity);

