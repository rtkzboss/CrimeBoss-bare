#pragma once
#include "CoreMinimal.h"
#include "EMutableCompileMeshType.generated.h"

UENUM()
enum class EMutableCompileMeshType {
    Full,
    Local,
    LocalAndChildren,
    AddWorkingSetNoChildren,
    AddWorkingSetAndChildren,
};

