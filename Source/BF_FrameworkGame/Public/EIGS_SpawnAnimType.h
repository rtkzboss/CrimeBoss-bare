#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpawnAnimType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SpawnAnimType : uint8 {
    SA_None UMETA(DisplayName=None),
    SA_Window UMETA(DisplayName=Window),
    SA_Wall UMETA(DisplayName=Wall),
    SA_Rope UMETA(DisplayName=Rope),
    SA_Ceiling UMETA(DisplayName=Ceiling),
    SA_RappelWindow UMETA(DisplayName="Rappel Window"),
    SA_CeilingDrop_3 UMETA(DisplayName="Ceiling Drop 3"),
    SA_CeilingDrop_3_5 UMETA(DisplayName="Ceiling Drop 3 5"),
    SA_CeilingDrop_4 UMETA(DisplayName="Ceiling Drop 4"),
    SA_CeilingDrop_3_Roll_4 UMETA(DisplayName="Ceiling Drop 3 Roll 4"),
    SA_Rappel_5_Roll_4 UMETA(DisplayName="Rappel 5 Roll 4"),
    SA_Ledge_1 UMETA(DisplayName="Ledge 1"),
    SA_Ledge_1_Repel_8 UMETA(DisplayName="Ledge 1 Repel 8"),
    SA_Ledge_1_Repel_12 UMETA(DisplayName="Ledge 1 Repel 12"),
    SA_Ledge_1_Repel_16 UMETA(DisplayName="Ledge 1 Repel 16"),
    SA_Wall_2 UMETA(DisplayName="Wall 2"),
    SA_Wall_3 UMETA(DisplayName="Wall 3"),
    SA_Vaulting_1 UMETA(DisplayName="Vaulting 1"),
    SA_RappelWindowArcBig UMETA(DisplayName="Rappel Window Arc Big"),
    SA_Helicopter_Left UMETA(DisplayName="Helicopter Left"),
    SA_Helicopter_Right UMETA(DisplayName="Helicopter Right"),
};
