#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortal.h"
#include "EIGS_SignificanceValue.h"
#include "IGS_AcousticPortal.generated.h"

class UIGS_SignificanceComponent;

UCLASS()
class BF_FRAMEWORKBASE_API AIGS_AcousticPortal : public AAkAcousticPortal {
    GENERATED_BODY()
public:
    AIGS_AcousticPortal(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnRep_IsOpened();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPostSignificance(const UIGS_SignificanceComponent* inObjectInfo, EIGS_SignificanceValue inSignificanceValue);
    
public:
    UPROPERTY()
    bool bOverrideShape;
    
protected:
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_IsOpened)
    bool mR_IsOpened;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCustomOcclusion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxOcclusionValue;
    
    UPROPERTY(EditAnywhere, Instanced)
    UIGS_SignificanceComponent* SignificanceComponent;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

