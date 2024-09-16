#pragma once
#include "CoreMinimal.h"
#include "IGS_FPS2Meta_Data.h"
#include "IGS_SharedMetaTransfer_Data.h"
#include "PaybackFPS2MetaDataRequestedDynamicSignature.generated.h"

UDELEGATE()
DECLARE_DYNAMIC_DELEGATE_TwoParams(FPaybackFPS2MetaDataRequestedDynamicSignature, UPARAM(Ref) FIGS_SharedMetaTransfer_Data&, inSharedData, UPARAM(Ref) FIGS_FPS2Meta_Data&, inFPSData);
