#include "IGS_StealthSettings.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"

UIGS_StealthSettings::UIGS_StealthSettings() {
    (*this).DefaultDetectionUpTime = 2.000000000e+00f;
    (*this).DetectionUpMuliplierCiv = 6.000000238e-01f;
    (*this).VisionConeMaxDistanceCiv = 1.200000000e+03f;
    (*this).VisionHalfAngleDegCiv = 4.500000000e+01f;
    (*this).DetectionUpMuliplierEmployee = 6.000000238e-01f;
    (*this).VisionConeMaxDistanceEmployee = 1.200000000e+03f;
    (*this).VisionHalfAngleDegEmployee = 4.500000000e+01f;
    (*this).DetectionUpFirstStageMultiplierGuard = 1.000000000e+00f;
    (*this).DetectionUpSecondStageMultiplierGuard = 1.000000000e+00f;
    (*this).VisionConeMaxDistanceGuard = 1.200000000e+03f;
    (*this).VisionHalfAngleDegGuard = 4.500000000e+01f;
    (*this).OffenceReactionDelayPlayerGuard.Min = 8.999999762e-01f;
    (*this).OffenceReactionDelayPlayerGuard.Max = 1.200000048e+00f;
    (*this).OffenceReactionDelayActorGuard.Min = 6.999999881e-01f;
    (*this).OffenceReactionDelayActorGuard.Max = 1.100000024e+00f;
    (*this).DetectionUpFirstStageMultiplierCop = 1.000000000e+00f;
    (*this).DetectionUpSecondStageMultiplierCop = 1.000000000e+00f;
    (*this).VisionConeMaxDistanceCop = 1.200000000e+03f;
    (*this).VisionHalfAngleDegCop = 4.500000000e+01f;
    (*this).OffenceReactionDelayPlayerCop.Min = 8.999999762e-01f;
    (*this).OffenceReactionDelayPlayerCop.Max = 1.200000048e+00f;
    (*this).OffenceReactionDelayActorCop.Min = 6.999999881e-01f;
    (*this).OffenceReactionDelayActorCop.Max = 1.100000024e+00f;
    (*this).DetectionUpFirstStageMultiplierGangster = 1.000000000e+00f;
    (*this).DetectionUpSecondStageMultiplierGangster = 1.000000000e+00f;
    (*this).VisionConeMaxDistanceGangster = 1.200000000e+03f;
    (*this).VisionHalfAngleDegGangster = 4.500000000e+01f;
    (*this).OffenceReactionDelayPlayerGangster.Min = 6.999999881e-01f;
    (*this).OffenceReactionDelayPlayerGangster.Max = 8.999999762e-01f;
    (*this).OffenceReactionDelayActorGangster.Min = 3.000000119e-01f;
    (*this).OffenceReactionDelayActorGangster.Max = 6.999999881e-01f;
    (*this).DetectionDownTime = 5.000000000e+00f;
    (*this).CrouchDetectionMultiplier = 6.000000238e-01f;
    (*this).SprintDetectionMultiplier = 2.000000000e+00f;
    FRichCurveKey gen;
    gen.InterpMode = RCIM_Linear;
    gen.TangentMode = RCTM_Auto;
    gen.TangentWeightMode = RCTWM_WeightedNone;
    gen.Time = 0.000000000e+00f;
    gen.Value = 1.000000000e+00f;
    gen.ArriveTangent = 0.000000000e+00f;
    gen.ArriveTangentWeight = 0.000000000e+00f;
    gen.LeaveTangent = 0.000000000e+00f;
    gen.LeaveTangentWeight = 0.000000000e+00f;
    FRichCurveKey gen2;
    gen2.InterpMode = RCIM_Linear;
    gen2.TangentMode = RCTM_Auto;
    gen2.TangentWeightMode = RCTWM_WeightedNone;
    gen2.Time = 5.000000000e-01f;
    gen2.Value = 1.000000000e+00f;
    gen2.ArriveTangent = 0.000000000e+00f;
    gen2.ArriveTangentWeight = 0.000000000e+00f;
    gen2.LeaveTangent = 0.000000000e+00f;
    gen2.LeaveTangentWeight = 0.000000000e+00f;
    FRichCurveKey gen3;
    gen3.InterpMode = RCIM_Linear;
    gen3.TangentMode = RCTM_Auto;
    gen3.TangentWeightMode = RCTWM_WeightedNone;
    gen3.Time = 1.000000000e+00f;
    gen3.Value = 5.000000000e-01f;
    gen3.ArriveTangent = 0.000000000e+00f;
    gen3.ArriveTangentWeight = 0.000000000e+00f;
    gen3.LeaveTangent = 0.000000000e+00f;
    gen3.LeaveTangentWeight = 0.000000000e+00f;
    (*this).DistanceDetectionSpeedCurve.EditorCurveData.Keys = {MoveTemp(gen), MoveTemp(gen2), MoveTemp(gen3)};
    (*this).DistanceDetectionSpeedCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).DistanceDetectionSpeedCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).DistanceDetectionSpeedCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    FRichCurveKey gen4;
    gen4.InterpMode = RCIM_Linear;
    gen4.TangentMode = RCTM_Auto;
    gen4.TangentWeightMode = RCTWM_WeightedNone;
    gen4.Time = 0.000000000e+00f;
    gen4.Value = 1.000000000e+00f;
    gen4.ArriveTangent = 0.000000000e+00f;
    gen4.ArriveTangentWeight = 0.000000000e+00f;
    gen4.LeaveTangent = 0.000000000e+00f;
    gen4.LeaveTangentWeight = 0.000000000e+00f;
    FRichCurveKey gen5;
    gen5.InterpMode = RCIM_Linear;
    gen5.TangentMode = RCTM_Auto;
    gen5.TangentWeightMode = RCTWM_WeightedNone;
    gen5.Time = 5.000000000e-01f;
    gen5.Value = 1.000000000e+00f;
    gen5.ArriveTangent = 0.000000000e+00f;
    gen5.ArriveTangentWeight = 0.000000000e+00f;
    gen5.LeaveTangent = 0.000000000e+00f;
    gen5.LeaveTangentWeight = 0.000000000e+00f;
    FRichCurveKey gen6;
    gen6.InterpMode = RCIM_Linear;
    gen6.TangentMode = RCTM_Auto;
    gen6.TangentWeightMode = RCTWM_WeightedNone;
    gen6.Time = 1.000000000e+00f;
    gen6.Value = 5.000000000e-01f;
    gen6.ArriveTangent = 0.000000000e+00f;
    gen6.ArriveTangentWeight = 0.000000000e+00f;
    gen6.LeaveTangent = 0.000000000e+00f;
    gen6.LeaveTangentWeight = 0.000000000e+00f;
    (*this).AngleDetectionSpeedCurve.EditorCurveData.Keys = {MoveTemp(gen4), MoveTemp(gen5), MoveTemp(gen6)};
    (*this).AngleDetectionSpeedCurve.EditorCurveData.DefaultValue = 3.402823466e+38f;
    (*this).AngleDetectionSpeedCurve.EditorCurveData.PreInfinityExtrap = RCCE_Constant;
    (*this).AngleDetectionSpeedCurve.EditorCurveData.PostInfinityExtrap = RCCE_Constant;
    (*this).BotDetectionMuliplier = 2.000000030e-01f;
    (*this).CombatStateDetectionMuliplier = 4.000000000e+00f;
    (*this).FootstepDetectionMuliplier = 8.999999762e-01f;
    (*this).CameraDetectionUpTime = 3.000000000e+00f;
    (*this).CameraDetectionDownTime = 2.000000000e+00f;
    (*this).CameraDetectionPlayerIdleCoef = 6.600000262e-01f;
    (*this).DetectionIncreaseThreshold = 9.999999776e-03f;
    (*this).DetectedCooldown = 3.000000000e+00f;
    (*this).DetectionMidPoint = 5.000000000e-01f;
    (*this).UseFootstepDetection = true;
    (*this).HQSuspcionDelay.Min = 5.000000000e+00f;
    (*this).HQSuspcionDelay.Max = 6.000000000e+00f;
    (*this).HQSuspcionStartValue.Min = 1.000000000e+02f;
    (*this).HQSuspcionStartValue.Max = 1.000000000e+02f;
    (*this).HQSuspcionAdditionalOffenceIncrease.Min = 1.500000000e+01f;
    (*this).HQSuspcionAdditionalOffenceIncrease.Max = 2.500000000e+01f;
    (*this).StrikeAddedCooldown = 5.000000000e+00f;
    (*this).CivEscapedDelay = 1.000000000e+01f;
    (*this).CivEscapedStrikes = 1;
    (*this).ShoutCooldown.Value = 1.250000000e+00f;
    (*this).StealthRangedDamageMult.Value = 2.000000000e+00f;
    (*this).StealthTakedownRangeMult.Value = 1.500000000e+00f;
    (*this).StealthTakedownDamageMult.Value = 1.000000000e+01f;
    (*this).MaxFollowerCount = 3;
    (*this).TimeToForgetTarget = 5.000000000e+00f;
    (*this).VisionCapsuleRadius = 4.000000000e+02f;
}

