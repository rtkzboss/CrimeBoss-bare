#pragma once
#include "CoreMinimal.h"
#include "IGS_SubControllerCommon.h"
#include "IGS_SubControllerMountable.generated.h"

class IIGS_SubControllerMountableInterface;
class UIGS_SubControllerMountableInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SubControllerMountable : public UIGS_SubControllerCommon {
    GENERATED_BODY()
public:
    UIGS_SubControllerMountable(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY()
    TScriptInterface<IIGS_SubControllerMountableInterface> m_Mountable;

};
