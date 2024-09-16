#pragma once
#include "CoreMinimal.h"
#include "IGS_PaybackSaveGameBase.h"
#include "IGS_SaveData_Career.h"
#include "IGS_PaybackSaveGameCareer.generated.h"

UCLASS(BlueprintType)
class COMMON_SAVE_API UIGS_PaybackSaveGameCareer : public UIGS_PaybackSaveGameBase {
    GENERATED_BODY()
public:
    UIGS_PaybackSaveGameCareer();

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FIGS_SaveData_Career SaveData_Career;

};
