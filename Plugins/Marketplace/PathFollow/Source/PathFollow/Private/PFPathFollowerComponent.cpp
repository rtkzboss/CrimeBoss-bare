#include "PFPathFollowerComponent.h"

UPFPathFollowerComponent::UPFPathFollowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SpeedDuration = 5.000000000e+01f;
    (*this).bFollowRotation = true;
    (*this).SpeedFactor = 1.000000000e+00f;
    (*this)._SpeedCurveCoef = 1.000000000e+00f;
    (*this).CurveDegree = 2.000000000e+00f;
    (*this).bStartAtPlay = true;
    (*this).RotationPointSteps = 10;
    (*this).RollSampleDistance = -1.000000000e+00f;
    (*this).RollAnglesClampMax = 9.000000000e+01f;
    (*this).RollAnglesClampMin = -9.000000000e+01f;
    (*this).RollIntepType = EPFRollInterpType::CubicClamped;
    (*this).RotationFactor.Pitch = 1.000000000e+00f;
    (*this).RotationFactor.Yaw = 1.000000000e+00f;
    (*this).RotationFactor.Roll = 1.000000000e+00f;
    (*this).RotationMaskLocal = true;
    (*this).RotationUpdateMask.X = 1;
    (*this).RotationUpdateMask.Y = 1;
    (*this).RotationUpdateMask.Z = 1;
    (*this).LocationUpdateMask.X = 1;
    (*this).LocationUpdateMask.Y = 1;
    (*this).LocationUpdateMask.Z = 1;
    (*this).bAlignToPathStart = true;
    (*this)._LastPassedEventIndex = -1;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UPFPathFollowerComponent::UpdateAutoRotationPoints() {
}

void UPFPathFollowerComponent::Stop() {
}

void UPFPathFollowerComponent::StartImpl() {
}

void UPFPathFollowerComponent::Start(float StartDelay) {
}

void UPFPathFollowerComponent::SetPathToFollow(USplineComponent* Spline) {
}

void UPFPathFollowerComponent::SetPathOwner(AActor* PathOwner) {
}

void UPFPathFollowerComponent::SetMaxFollowerSpeed(float MaxSpeed) {
}

void UPFPathFollowerComponent::SetCurrentDistance(float NewDistance) {
}

void UPFPathFollowerComponent::Reverse(bool Reverse) {
}

void UPFPathFollowerComponent::Pause() {
}

FRotator UPFPathFollowerComponent::ModifyFinalRotation_Implementation(const FRotator& NewRotation) {
    return FRotator{};
}

FVector UPFPathFollowerComponent::ModifyFinalLocation_Implementation(const FVector& NewLocation) {
    return FVector{};
}

bool UPFPathFollowerComponent::HasPath() const {
    return false;
}

float UPFPathFollowerComponent::GetSpeedAtSpeedPoint(int32 PointIndex) const {
    return 0.000000000e+00f;
}

float UPFPathFollowerComponent::GetSpeedAtDistance(float Distance) const {
    return 0.000000000e+00f;
}

FRotator UPFPathFollowerComponent::GetRotationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> Coord) const {
    return FRotator{};
}

UPFPathComponent* UPFPathFollowerComponent::GetPathToFollow() {
    return nullptr;
}

AActor* UPFPathFollowerComponent::GetPathOwner() const {
    return nullptr;
}

FVector UPFPathFollowerComponent::GetMoveDirection() const {
    return FVector{};
}

FVector UPFPathFollowerComponent::GetLocationAtDistance(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> Coord) const {
    return FVector{};
}

FPFEventPoints UPFPathFollowerComponent::GetEventPoints() {
    return FPFEventPoints{};
}

UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateByName(const FName& Name) {
    return nullptr;
}

UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateByIndex(int32 Index) {
    return nullptr;
}

UEventPointDelegateHolder* UPFPathFollowerComponent::GetEventPointDelegateAll() {
    return nullptr;
}

FEventPoint UPFPathFollowerComponent::GetEventPointByName(const FName& Name) {
    return FEventPoint{};
}

void UPFPathFollowerComponent::FollowPath(float FollowStep) {
}

bool UPFPathFollowerComponent::EventPointExistByName(const FName& Name) {
    return false;
}

FRotator UPFPathFollowerComponent::ComputeLookAtRotation_Implementation(USceneComponent* TargetComponent, const FVector& FollowerLocation) {
    return FRotator{};
}

void UPFPathFollowerComponent::ComputeAutoRotationPoints() {
}

void UPFPathFollowerComponent::ClearMaxFollowerSpeed() {
}

