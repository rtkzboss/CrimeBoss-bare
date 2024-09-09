#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterDataInterface.h"
#include "IGS_AIGameCharacter.h"
#include "IGS_HeisterNumberInterface.h"
#include "IGS_AICharacterPlayerBot.generated.h"

class UIGS_ListInventory;
class UIGS_LootBagInteractiveComponent;
class UIGS_NetworkComponentCharacter;
class UIGS_PlayerLoadoutComponent;
class UIGS_PlayerMetaTransferComponent;
class UIGS_SuppressionHandlerComponent;

UCLASS(Deprecated, NotPlaceable)
class BF_AI_API ADEPRECATED_IGS_AICharacterPlayerBot : public AIGS_AIGameCharacter, public IIGS_HeisterNumberInterface, public IIGS_HeisterDataInterface {
    GENERATED_BODY()
public:
    ADEPRECATED_IGS_AICharacterPlayerBot(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerLoadoutComponent* PlayerLoadoutComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ListInventory* BotInventory;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_PlayerMetaTransferComponent* PlayerMetaTransferComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_SuppressionHandlerComponent* BotSuppressionHandlerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_LootBagInteractiveComponent* LootBagInteractiveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_NetworkComponentCharacter* NetworkCharacter;
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void SetHeisterNumber(int32 inHeisterNumber) override PURE_VIRTUAL(SetHeisterNumber,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeisterNumber() const override PURE_VIRTUAL(GetHeisterNumber, return 0;);
    
};

