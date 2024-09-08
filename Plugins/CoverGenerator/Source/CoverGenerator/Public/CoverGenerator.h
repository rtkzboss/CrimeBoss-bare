#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CoverGenerator.generated.h"

class AController;
class ACoverGenerator;
class AIGS_CoverZone;
class ANavigationData;
class UCoverPoint;
class UObject;

UCLASS(Transient, Config=Inherit)
class COVERGENERATOR_API ACoverGenerator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool ForceRefresh;
    
public:
    UPROPERTY(EditAnywhere)
    bool bUseCoverZones;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bRegenerateAtBeginPlay;
    
    UPROPERTY(EditAnywhere)
    bool bRegenerateAtNavigationRebuilt;
    
    UPROPERTY(EditAnywhere)
    float SegmentLength;
    
    UPROPERTY(EditAnywhere)
    float CharWidth;
    
    UPROPERTY(EditAnywhere)
    float CharHeight;
    
    UPROPERTY(EditAnywhere)
    float StepDistTrace;
    
    UPROPERTY(EditAnywhere)
    float TraceLength;
    
    UPROPERTY(EditAnywhere)
    float MinSpaceBetweenValidPoints;
    
    UPROPERTY(EditAnywhere)
    float SphereSize;
    
    UPROPERTY(EditAnywhere)
    float WidthMaxAgent;
    
    UPROPERTY(EditAnywhere)
    float HeightMinCrouching;
    
    UPROPERTY(EditAnywhere)
    float HeightMaxCrouching;
    
    UPROPERTY(EditAnywhere)
    float HeightMaxStanding;
    
    UPROPERTY(EditAnywhere)
    float OffsetWhenLeaningSides;
    
    UPROPERTY(EditAnywhere)
    float OffsetWhenLeaningUp;
    
    UPROPERTY(EditAnywhere)
    float OffsetWhenStandingUp;
    
    UPROPERTY(EditAnywhere)
    float OffsetFrontAim;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDraw1AllSegmentPointsTested;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDraw2SegmentPointsWithinBounds;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDraw3SimpleCoverGeometryTest;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDraw4SecondPassTracesSides;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDraw4SecondPassTracesSidesFrontAndBottom;
    
public:
    UPROPERTY(EditAnywhere, Transient)
    bool DebugDrawAllPoints;
    
protected:
    UPROPERTY(EditAnywhere, Transient)
    bool DebugDrawAllBusyPoints;
    
    UPROPERTY(EditAnywhere)
    bool DebugDisplayLog;
    
    UPROPERTY(EditAnywhere)
    float DebugDistance;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDrawOctreeBounds;
    
private:
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    TArray<UCoverPoint*> AllCoverPoints;
    
    UPROPERTY(Transient)
    TArray<UCoverPoint*> CoverPointsCurrentlyUsed;
    
    UPROPERTY(Transient)
    TArray<AIGS_CoverZone*> m_CoverZones;
    
public:
    ACoverGenerator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReleaseCover(UCoverPoint* CoverPoint);
    
private:
    UFUNCTION()
    void OnNavigationGenerationFinished(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OccupyCover(UCoverPoint* CoverPoint, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool IsFreeCoverPoint(const UCoverPoint* CoverPoint);
    
    UFUNCTION(BlueprintCallable)
    TArray<UCoverPoint*> GetCoverWithinBox(const FBox& BoxIn);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=WorldContextObject))
    static ACoverGenerator* GetCoverGenerator(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool CoverExistWithinBox(const FBox& BoxIn);
    
};

