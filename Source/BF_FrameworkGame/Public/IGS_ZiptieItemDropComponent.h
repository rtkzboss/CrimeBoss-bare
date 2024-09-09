#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_ZiptieItemDropComponent.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PickupActorBase;

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

