#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_ZiptieItemDropComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ZiptieItemDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ZiptieItemDropComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<AIGS_PickupActorBase>> ItemsClassesToDrop;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_GameCharacterFramework* CharacterOwner;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ItemSpawnPointTransform;

};
