#pragma once
#include "CoreMinimal.h"
#include "IGS_CoverPointBase.h"
#include "GameFramework/Actor.h"
#include "NavAreas/NavArea.h"
#include "EIGS_WallLength.h"
#include "EIGS_WallShape.h"
#include "EIGS_WallType.h"
#include "IGS_MaterialVariantType.h"
#include "Templates/SubclassOf.h"
#include "IGS_DynamicWallBase.generated.h"

class ANavModifierVolume;
class ANavigationData;
class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_DynamicWallBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_DynamicWallBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnGenerationFinished(ANavigationData* inNavData);

public:
    UFUNCTION(BlueprintPure)
    bool IsBreachable() const;

    UFUNCTION(BlueprintCallable)
    void ApplyMaterials();

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EIGS_WallLength WallLength;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EIGS_WallType WallType;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    EIGS_WallShape WallShape;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bCornerL;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bCornerR;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bTrimTop;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bTrimBottom;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bLowerTrim;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Error_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_1m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_2m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_4m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_half_2m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_half_4m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_shaft_1m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Door_2m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Door_4m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Window_2m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Window_4m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Elevator_4m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Shaft_1m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Shaft_2m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Arch_2m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Arch_4m_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_1m_trim_top_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_2m_trim_top_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_4m_trim_top_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_1m_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_2m_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_4m_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_2m_arc_trim_top_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_4m_arc_trim_top_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_2m_arc_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_4m_arc_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_door_1m_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_door_2m_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_door_4m_trim_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_left_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_right_bottom_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_left_top_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_right_top_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_left_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_right_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_halfwall_left_mesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* Wall_corner_halfwall_right_mesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* WallRootComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallTopTrimMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallBottomTrimMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallLeftCornerMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallRightCornerMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallTopLeftTrimCornerMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallBottomLeftTrimCornerMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallTopRightTrimCornerMesh;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* WallBottomRightTrimCornerMesh;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FIGS_MaterialVariantType> MaterialVariantTypes;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialVariant;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavArea> navAreaClass;

    UPROPERTY(EditInstanceOnly)
    TSubclassOf<AIGS_CoverPointBase> CoverPointClass;

    UPROPERTY()
    TArray<AIGS_CoverPointBase*> CoverPoints;

protected:
    UPROPERTY()
    TArray<ANavModifierVolume*> m_NavModifiers;

};
