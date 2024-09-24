#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EIGS_TeamSideEnum.h"
#include "EBoolExecPin.h"
#include "EBuildConfigurationExecPin.h"
#include "EValidNotValidExecPin.h"
#include "Net/Core/PushModel/PushModel.h"
#include "IGS_BlueprintUtilities.generated.h"

class APawn;
class APlayerController;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_BlueprintUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_BlueprintUtilities();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo=LatentInfo, WorldContext=WorldContextObject))
    static void WaitForStreamingFinished(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);

    UFUNCTION(BlueprintCallable)
    static TArray<EIGS_TeamSideEnum> TeamSidesMaskToArray(int32 inValidTeamSides);

    UFUNCTION(BlueprintCallable)
    static void SetPlayerInputForInteraction(bool inEnabled, APlayerController* InController);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo=LatentInfo, WorldContext=WorldContextObject))
    static void PataFix(const UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);

    UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs=outBranches))
    static void IsValidClass(UClass* inClass, EValidNotValidExecPin& outBranches);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO, ExpandEnumAsExecs=outBranches))
    static void IsServerOrStandalone(UObject* inWCO, EBoolExecPin& outBranches);

    UFUNCTION(BlueprintPure)
    static bool IsLocallyControlledPlayerPawn(const APawn* inPawn);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO, ExpandEnumAsExecs = outBranches))
    static void IsinEditor(UObject* inWCO, EBoolExecPin& outBranches);

    UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs=outBranches))
    static void IsEditorBuild(EBoolExecPin& outBranches);

    UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs=outBranches))
    static void IsDedicatedServer(EBoolExecPin& outBranches);

    UFUNCTION(BlueprintPure)
    static void GetUniqueNetID(APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static APlayerController* GetLocalPlayerControllerForWorld(UObject* inWCO);

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static APlayerController* GetLocalPlayerController(UObject* inWCO);

    UFUNCTION(BlueprintPure)
    static FColor GetColorForTeamSide(EIGS_TeamSideEnum inTeamSide);

    UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs=outBranches))
    static void GetBuildConfiguration(EBuildConfigurationExecPin& outBranches);

    UFUNCTION(BlueprintCallable, CustomThunk, meta=(ArrayParm=TargetArray))
    static void Array_Shuffle_RandomStream(const TArray<int32>& TargetArray, const FRandomStream& inRandomStream);

public:
	DECLARE_FUNCTION(execArray_Shuffle_RandomStream)
	{
		Stack.MostRecentProperty = nullptr;
		Stack.StepCompiledIn<FArrayProperty>(NULL);
		void* ArrayAddr = Stack.MostRecentPropertyAddress;
		FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Stack.MostRecentProperty);
		if (!ArrayProperty)
		{
			Stack.bArrayContextFailed = true;
			return;
		}
		P_GET_STRUCT_REF(FRandomStream, RandomStream);

		P_FINISH;
		P_NATIVE_BEGIN;
		MARK_PROPERTY_DIRTY(Stack.Object, ArrayProperty);
		GenericArray_Shuffle_RandomStream(ArrayAddr, ArrayProperty, RandomStream);
		P_NATIVE_END;
	}
private:
	static void GenericArray_Shuffle_RandomStream(void* TargetArray, const FArrayProperty* ArrayProp, const FRandomStream& RS);
};
