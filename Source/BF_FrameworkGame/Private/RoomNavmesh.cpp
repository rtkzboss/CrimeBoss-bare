#include "RoomNavmesh.h"
#include "AI/Navigation/NavigationTypes.h"

ARoomNavmesh::ARoomNavmesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = TBaseStructure<FNavDataConfig>::Get()->FindPropertyByName("NavDataClass");
    (*gen->ContainerPtrToValuePtr<TSoftClassPtr<AActor>>(&(*this).NavDataConfig, 0)) = FSoftObjectPath(TEXT("/Script/NavigationSystem.RecastNavMesh"), TEXT(""));
    (*this).bCanBeMainNavData = false;
}

