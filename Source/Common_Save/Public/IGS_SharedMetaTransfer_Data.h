#pragma once
#include "CoreMinimal.h"
#include "CommonHeisterData.h"
#include "EIGS_MPLobbyType.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_LobbyVisibilityType.h"
#include "CommonDetectiveData.h"
#include "IGS_MetaTransferDataBase.h"
#include "META_PlayedPresets.h"
#include "IGS_SharedMetaTransfer_Data.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SharedMetaTransfer_Data : public FIGS_MetaTransferDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid MissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCommonHeisterData> Heisters;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCommonDetectiveData> Detectives;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_PlayedPresets PlayedPresets;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_UserDifficulty UserDifficulty;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_LobbyVisibilityType LobbyVisibility;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MPLobbyType MPLobbyType;

    FIGS_SharedMetaTransfer_Data();
};
