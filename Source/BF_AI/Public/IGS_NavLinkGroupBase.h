#pragma once
#include "CoreMinimal.h"
#include "IGS_NavLinksBreachInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "EIGS_SmartLinkAnimVariant.h"
#include "EIGS_TeamSideEnum.h"
#include "Templates/SubclassOf.h"
#include "IGS_NavLinkGroupBase.generated.h"

class UAnimMontage;
class UBoxComponent;
class UChildActorComponent;
class UIGS_NavLinkComponent;
class UNavArea;
class USceneComponent;

UCLASS(Deprecated, NotPlaceable)
class BF_AI_API ADEPRECATED_IGS_NavLinkGroupBase : public AActor, public IIGS_NavLinksBreachInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NavLinkCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LinksDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<EIGS_TeamSideEnum> CharacterTypes;
    
    UPROPERTY(EditAnywhere)
    float Cooldown;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavLinkDirection::Type> LinkDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_SmartLinkAnimVariant CommonAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_SmartLinkAnimVariant LeftAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LeftAnimationAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_SmartLinkAnimVariant RightAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* RightAnimationAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Left;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Right;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* GroupRootComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UChildActorComponent* FrontBreachingPoints;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UChildActorComponent* BackBreachingPoints;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* helpersBox;
    
protected:
    UPROPERTY(Instanced)
    TArray<UIGS_NavLinkComponent*> NavLinks;
    
public:
    ADEPRECATED_IGS_NavLinkGroupBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnableArea(TSubclassOf<UNavArea> NavArea);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableArea(TSubclassOf<UNavArea> NavArea);
    

    // Fix for true pure virtual functions not being implemented
};

