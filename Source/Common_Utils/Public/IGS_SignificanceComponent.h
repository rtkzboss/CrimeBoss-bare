#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EIGS_SignificanceValue.h"
#include "IGS_PostSignificanceDelegateDelegate.h"
#include "IGS_SignificanceComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMMON_UTILS_API UIGS_SignificanceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_PostSignificanceDelegate OnPostSignificance;
    
protected:
    UPROPERTY(VisibleAnywhere)
    EIGS_SignificanceValue CurrentSignificanceValue;
    
    UPROPERTY(EditAnywhere)
    bool bIsEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bEventOnlyOnChanged;
    
    UPROPERTY(EditAnywhere)
    TMap<float, EIGS_SignificanceValue> SignificanceDistanceMap;
    
public:
    UIGS_SignificanceComponent(const FObjectInitializer& ObjectInitializer);

};

