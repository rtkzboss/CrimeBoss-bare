#include "GenericGraphNode.h"

UGenericGraphNode::UGenericGraphNode() {
}

void UGenericGraphNode::RefreshValuesOnSaveGraph() {
}

bool UGenericGraphNode::IsLeafNode() const {
    return false;
}

int32 UGenericGraphNode::GetNodeId() const {
    return 0;
}

UGenericGraph* UGenericGraphNode::GetGraph() const {
    return nullptr;
}

UGenericGraphEdge* UGenericGraphNode::GetEdge(UGenericGraphNode* ChildNode) {
    return nullptr;
}

FText UGenericGraphNode::GetDescription_Implementation() const {
    return FText::GetEmpty();
}

