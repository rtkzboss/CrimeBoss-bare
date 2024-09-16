#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelBuilder_LevelScriptActor.h"
#include "IGS_Streaming_LevelScriptActor.generated.h"

UCLASS()
class BF_LEVELGENERATOR_API AIGS_Streaming_LevelScriptActor : public AIGS_LevelBuilder_LevelScriptActor {
    GENERATED_BODY()
public:
    AIGS_Streaming_LevelScriptActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LevelGenerationFinished() const;

private:
    UPROPERTY(EditAnywhere)
    bool bRegenerateRoomNavmesh;

    UPROPERTY(EditAnywhere)
    bool bUpdateLevelGenerator_Default;

    UPROPERTY(EditAnywhere)
    bool bUpdateLevelGenerator_OnPlayBegin;

};
