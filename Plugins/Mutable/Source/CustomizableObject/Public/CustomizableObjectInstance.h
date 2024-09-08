#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CustomizableObjectBoolParameterValue.h"
#include "CustomizableObjectFloatParameterValue.h"
#include "CustomizableObjectIntParameterValue.h"
#include "CustomizableObjectProjectorParameterValue.h"
#include "CustomizableObjectTextureParameterValue.h"
#include "CustomizableObjectVectorParameterValue.h"
#include "ECustomizableObjectProjectorType.h"
#include "IGS_CustomizationArchive.h"
#include "ObjectInstanceUpdatedDelegateDelegate.h"
#include "CustomizableObjectInstance.generated.h"

class UCustomizableInstancePrivateData;
class UCustomizableObject;
class UCustomizableObjectInstance;
class USkeletalMesh;
class UTexture2D;

UCLASS(BlueprintType)
class CUSTOMIZABLEOBJECT_API UCustomizableObjectInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UCustomizableObject* CustomizableObject;
    
    UPROPERTY(Transient, VisibleAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FCustomizableObjectBoolParameterValue> BoolParameters;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FCustomizableObjectIntParameterValue> IntParameters;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FCustomizableObjectFloatParameterValue> FloatParameters;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FCustomizableObjectTextureParameterValue> TextureParameters;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FCustomizableObjectVectorParameterValue> VectorParameters;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bBuildParameterDecorations;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FObjectInstanceUpdatedDelegate UpdatedDelegate;
    
    UPROPERTY()
    FString SkeletalMeshStatus;
    
private:
    UPROPERTY(Transient)
    UCustomizableInstancePrivateData* PrivateData;
    
public:
    UCustomizableObjectInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterSelectedOption(const FString& VectorParamName, FLinearColor VectorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomValues();
    
    UFUNCTION(BlueprintCallable)
    void SetProjectorValue(const FString& ProjectorParamName, const FVector& Pos, const FVector& Direction, const FVector& Up, const FVector& Scale, float Angle, int32 RangeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetIntParameterSelectedOption(const FString& ParamName, const FString& SelectedOptionName, int32 RangeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameterSelectedOption(const FString& FloatParamName, float FloatValue, int32 RangeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomizationFromArchive(FIGS_CustomizationArchive inArchive);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    void SetColorParameterSelectedOption(const FString& ColorParamName, FLinearColor ColorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolParameterSelectedOption(const FString& BoolParamName, bool BoolValue);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveValueFromProjectorRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveValueFromIntRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveValueFromFloatRange(const FString& ParamName);
    
    UFUNCTION(BlueprintPure)
    bool IsParamMultidimensional(const FString& ParamName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsParameterRelevant(const FString& ParamName) const;
    
    UFUNCTION(BlueprintPure)
    void GetProjectorValue(const FString& ProjectorParamName, FVector& Pos, FVector& Direction, FVector& Up, FVector& Scale, float& Angle, ECustomizableObjectProjectorType& Type, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetProjectorUp(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetProjectorScale(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetProjectorPosition(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    ECustomizableObjectProjectorType GetProjectorParameterType(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetProjectorDirection(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetProjectorAngle(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetParameterDescription(const FString& ParamName, int32 DescIndex);
    
    UFUNCTION(BlueprintPure)
    FString GetIntParameterSelectedOption(const FString& ParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetFloatParameterSelectedOption(const FString& FloatParamName, int32 RangeIndex) const;
    
    UFUNCTION(BlueprintPure)
    FIGS_CustomizationArchive GetCustomizationArchive();
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetColorParameterSelectedOption(const FString& ColorParamName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoolParameterSelectedOption(const FString& BoolParamName) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindVectorParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindProjectorParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindIntParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindFloatParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindBoolParameterNameIndex(const FString& ParamName) const;
    
    UFUNCTION(BlueprintPure)
    int32 CurrentParamRange(const FString& ParamName) const;
    
    UFUNCTION(BlueprintCallable)
    UCustomizableObjectInstance* CloneStatic(UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    UCustomizableObjectInstance* Clone();
    
    UFUNCTION(BlueprintCallable)
    int32 AddValueToProjectorRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 AddValueToIntRange(const FString& ParamName);
    
    UFUNCTION(BlueprintCallable)
    int32 AddValueToFloatRange(const FString& ParamName);
    
};

