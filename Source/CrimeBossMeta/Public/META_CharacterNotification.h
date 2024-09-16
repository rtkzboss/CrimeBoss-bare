#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_CharacterNotification.generated.h"

class UMETA_Character;

UCLASS()
class CRIMEBOSSMETA_API UMETA_CharacterNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
    UMETA_CharacterNotification();

    UFUNCTION(BlueprintCallable)
    void SetCharacter(UMETA_Character* inCharacter, FText inOption);

    UFUNCTION(BlueprintPure)
    UMETA_Character* GetCharacter() const;

private:
    UPROPERTY()
    UMETA_Character* m_Character;

};
