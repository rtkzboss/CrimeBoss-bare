#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_AISettingsComponent.generated.h"

class UIGS_AIMeleeWeaponDef;
class UIGS_AIPrimaryWeaponDef;
class UIGS_AISecondaryWeaponDef;
class UIGS_SettingsID;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AISettingsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MeleeActivationDistance;
    
    UPROPERTY(VisibleAnywhere)
    float PrimaryBashActivationDistance;
    
    UPROPERTY(VisibleAnywhere)
    float SecondaryBashActivationDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval CombatRangeUnarmed;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval MeleeCooldown;
    
protected:
    UPROPERTY()
    UIGS_AIPrimaryWeaponDef* m_PrimaryWeaponData;
    
    UPROPERTY()
    UIGS_AISecondaryWeaponDef* m_SecondaryWeaponData;
    
    UPROPERTY()
    UIGS_AIMeleeWeaponDef* m_MeleeWeaponData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UIGS_SettingsID>> SettingsIDs;
    
    UPROPERTY()
    TSubclassOf<UIGS_SettingsID> m_ActiveSettingsID;
    
public:
    UIGS_AISettingsComponent(const FObjectInitializer& ObjectInitializer);

};

