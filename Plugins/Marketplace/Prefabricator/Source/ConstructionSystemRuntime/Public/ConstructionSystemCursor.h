#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConstructionSystemCursor.generated.h"

class APrefabActor;
class UMaterialInterface;
class UPrefabricatorConstructionSnapComponent;

UCLASS()
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemCursor : public UObject {
    GENERATED_BODY()
public:
    UConstructionSystemCursor();

private:
    UPROPERTY(Transient)
    APrefabActor* CursorGhostActor;

    UPROPERTY(Transient)
    int32 CursorSeed;

    UPROPERTY(Transient)
    UMaterialInterface* CursorMaterial;

    UPROPERTY(Transient)
    UMaterialInterface* CursorInvalidMaterial;

    UPROPERTY(Instanced, Transient)
    TArray<UPrefabricatorConstructionSnapComponent*> SnapComponents;

    UPROPERTY(Transient)
    int32 ActiveSnapComponentIndex;

};
