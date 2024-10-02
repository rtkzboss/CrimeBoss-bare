#include "PlayerDeathAnimationDatabase.h"

UPlayerDeathAnimationDatabase::UPlayerDeathAnimationDatabase() {
    (*this).BodyPlayRateRange.X = 1.000000000e+00f;
    (*this).BodyPlayRateRange.Y = 1.000000000e+00f;
    (*this).CrouchBodyPlayRateRange.X = 1.000000000e+00f;
    (*this).CrouchBodyPlayRateRange.Y = 1.000000000e+00f;
    (*this).HeadPlayRateRange.X = 1.000000000e+00f;
    (*this).HeadPlayRateRange.Y = 1.000000000e+00f;
    (*this).CrouchHeadPlayRateRange.X = 1.000000000e+00f;
    (*this).CrouchHeadPlayRateRange.Y = 1.000000000e+00f;
    (*this).RunPlayRateRange.X = 1.000000000e+00f;
    (*this).RunPlayRateRange.Y = 1.000000000e+00f;
    (*this).ExplosionPlayRateRange.X = 1.000000000e+00f;
    (*this).ExplosionPlayRateRange.Y = 1.000000000e+00f;
    (*this).StandHeavyPlayRateRange.X = 1.000000000e+00f;
    (*this).StandHeavyPlayRateRange.Y = 1.000000000e+00f;
    (*this).CrouchHeavyPlayRateRange.X = 1.000000000e+00f;
    (*this).CrouchHeavyPlayRateRange.Y = 1.000000000e+00f;
    (*this).BluntPlayRateRange.X = 1.000000000e+00f;
    (*this).BluntPlayRateRange.Y = 1.000000000e+00f;
    (*this).CutPlayRateRange.X = 1.000000000e+00f;
    (*this).CutPlayRateRange.Y = 1.000000000e+00f;
    (*this).SpecialBoxerPlayRateRange.X = 1.000000000e+00f;
    (*this).SpecialBoxerPlayRateRange.Y = 1.000000000e+00f;
    (*this).StabPlayRateRange.X = 1.000000000e+00f;
    (*this).StabPlayRateRange.Y = 1.000000000e+00f;
    (*this).DownstatePlayRateRange.X = 1.000000000e+00f;
    (*this).DownstatePlayRateRange.Y = 1.000000000e+00f;
    (*this).RunVelocityThreshold = 2.800000000e+02f;
    (*this).SleepBodyInstanceVelocityThreshold = 1.000000000e+01f;
    (*this).ThresholdIncrement = 1.000000000e+01f;
    (*this).ThresholdIncrementLimit = 3.000000000e+02f;
    (*this).WakeTimeRB = 2.000000030e-01f;
    (*this).SleepTimeRB = 3.000000119e-01f;
    (*this).FinishingImpulseStrength = 1.000000000e+04f;
    (*this).ConstrainProfileName = TEXT("AnimationEnd");
    (*this).ZiptieConstrainProfileName = TEXT("Ziptie");
    (*this).VehicleVelocityThreshold = 1.000000000e+01f;
    (*this).RagdollVelocityLimit = 1.000000000e+03f;
    (*this).DoorCollisionPushVelocity = 2.500000000e+02f;
    (*this).EventInterval = 1.500000000e+00f;
    (*this).MaxEventCalls = 10;
}

