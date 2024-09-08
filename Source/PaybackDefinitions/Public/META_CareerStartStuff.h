#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "EMETA_Gang.h"
#include "EMETA_Partner.h"
#include "EMETA_RespectLvl.h"
#include "META_Interval.h"
#include "META_StartupWeaponDefinition.h"
#include "META_CareerStartStuff.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_CareerStartStuff {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StartDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Cash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_RespectLvl RespectLvl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_StartupWeaponDefinition> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EIGS_CharacterID> Heisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Partner, int32> PartnersCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Gang, int32> GangsCash;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FMETA_Interval BalanceLimit;
    
    FMETA_CareerStartStuff();
};

