#pragma once
#include "CoreMinimal.h"
#include "FBPSteamResult.h"
#include "FBPWorkshopFileType.h"
#include "BPSteamWorkshopItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FBPSteamWorkshopItemDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBPSteamResult ResultOfRequest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBPWorkshopFileType FileType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CreatorAppID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ConsumerAppID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ItemUrl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 VotesUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 VotesDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CalculatedScore;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBanned;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAcceptedForUse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTagsTruncated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CreatorSteamID;
    
    ADVANCEDSTEAMSESSIONS_API FBPSteamWorkshopItemDetails();
};

