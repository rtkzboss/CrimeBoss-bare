#pragma once
#include "CoreMinimal.h"
#include "FBPWorkshopFileType.generated.h"

UENUM(BlueprintType)
enum class FBPWorkshopFileType : uint8 {
    k_EWorkshopFileTypeCommunity UMETA(DisplayName="E Workshop File Type Community"),
    k_EWorkshopFileTypeMicrotransaction UMETA(DisplayName="E Workshop File Type Microtransaction"),
    k_EWorkshopFileTypeCollection UMETA(DisplayName="E Workshop File Type Collection"),
    k_EWorkshopFileTypeArt UMETA(DisplayName="E Workshop File Type Art"),
    k_EWorkshopFileTypeVideo UMETA(DisplayName="E Workshop File Type Video"),
    k_EWorkshopFileTypeScreenshot UMETA(DisplayName="E Workshop File Type Screenshot"),
    k_EWorkshopFileTypeGame UMETA(DisplayName="E Workshop File Type Game"),
    k_EWorkshopFileTypeSoftware UMETA(DisplayName="E Workshop File Type Software"),
    k_EWorkshopFileTypeConcept UMETA(DisplayName="E Workshop File Type Concept"),
    k_EWorkshopFileTypeWebGuide UMETA(DisplayName="E Workshop File Type Web Guide"),
    k_EWorkshopFileTypeIntegratedGuide UMETA(DisplayName="E Workshop File Type Integrated Guide"),
    k_EWorkshopFileTypeMerch UMETA(DisplayName="E Workshop File Type Merch"),
    k_EWorkshopFileTypeControllerBinding UMETA(DisplayName="E Workshop File Type Controller Binding"),
    k_EWorkshopFileTypeSteamworksAccessInvite UMETA(DisplayName="E Workshop File Type Steamworks Access Invite"),
    k_EWorkshopFileTypeSteamVideo UMETA(DisplayName="E Workshop File Type Steam Video"),
    k_EWorkshopFileTypeMax UMETA(DisplayName="E Workshop File Type Max"),
};
