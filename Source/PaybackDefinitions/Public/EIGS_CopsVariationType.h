#pragma once
#include "CoreMinimal.h"
#include "EIGS_CopsVariationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CopsVariationType : uint8 {
    US_None UMETA(DisplayName=None),
    US_Specnaz UMETA(DisplayName=Specnaz),
    US_Contras UMETA(DisplayName=Contras),
    US_Vietcong UMETA(DisplayName=Vietcong),
    US_Detective UMETA(DisplayName=Detective),
    US_Russians UMETA(DisplayName=Russians),
    US_ParkRangers UMETA(DisplayName="Park Rangers"),
    US_Advanced UMETA(DisplayName=Advanced),
    US_Metahuman UMETA(DisplayName=Metahuman),
    US_Elite UMETA(DisplayName=Elite),
    US_Robot UMETA(DisplayName=Robot),
    US_CagnaliRobot UMETA(DisplayName="Cagnali Robot"),
    US_Cagnali UMETA(DisplayName=Cagnali),
    US_Detective1 = 101 UMETA(DisplayName="Detective 1"),
    US_Detective2 UMETA(DisplayName="Detective 2"),
    US_Detective3 UMETA(DisplayName="Detective 3"),
    US_Detective4 UMETA(DisplayName="Detective 4"),
    US_Detective5 UMETA(DisplayName="Detective 5"),
    US_Detective6 UMETA(DisplayName="Detective 6"),
    US_Detective7 UMETA(DisplayName="Detective 7"),
    US_Detective8 UMETA(DisplayName="Detective 8"),
    US_Detective9 UMETA(DisplayName="Detective 9"),
    US_Detective10 UMETA(DisplayName="Detective 10"),
    US_FPSMaxIndex = 128 UMETA(DisplayName="FPS Max Index"),
    US_STO_ParkRanger UMETA(DisplayName="STO Park Ranger"),
    US_STO_Jupiter5 UMETA(DisplayName="STO Jupiter 5"),
    US_Unknown = 255 UMETA(DisplayName=Unknown),
};
