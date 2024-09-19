#include "IGS_AnimNode_ModifyBones.h"

FIGS_AnimNode_ModifyBones::FIGS_AnimNode_ModifyBones() {
    (*this).BonesToModify = TArray<FIGS_ModifyBonesInfo>{};
    (*this).BoneTransforms = TArray<FTransform>{};
}
