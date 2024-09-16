#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnRegularGlassStateChanged.generated.h"

class AActor;

UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRegularGlassStateChanged, FVector, HitLocation, bool, IsFirstFracture, AActor*, Instigator);
