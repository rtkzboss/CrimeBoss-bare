#include "META_NodesColorData.h"

UMETA_NodesColorData::UMETA_NodesColorData() {
    (*this).STORY_ACTIVE_NODE_COLOR = FLinearColor(0.000000000e+00f, 9.100000262e-01f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).STORY_NODES_COLORS = TMap<EMETA_NodeType, FLinearColor>{};
    (*this).STORY_NODES_BODY_COLORS = TMap<EMETA_NodeType, FLinearColor>{};
    (*this).END_NODE_COLOR_BY_RESULT = TMap<EMETA_GoalStatus, FLinearColor>{};
}

