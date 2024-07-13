#include "AnimAsset_TickAssetPlayerProxy.h"

UAnimAsset_TickAssetPlayerProxy::UAnimAsset_TickAssetPlayerProxy() {
    this->ActorMoveDeltaWeight = 0.00f;
}


void UAnimAsset_TickAssetPlayerProxy::Serialize(FArchive& Ar)
{
    //Super::Serialize(Ar);
}

void UAnimAsset_TickAssetPlayerProxy::PostLoad()
{
    //Super::PostLoad();
}

void UAnimAsset_TickAssetPlayerProxy::SetPreviewMesh(USkeletalMesh* PreviewMesh, bool bMarkAsDirty)
{
}

USkeletalMesh* UAnimAsset_TickAssetPlayerProxy::GetPreviewMesh(bool bFindIfNotSet)
{
    return nullptr;
}

USkeletalMesh* UAnimAsset_TickAssetPlayerProxy::GetPreviewMesh() const
{
    return nullptr;
}

void UAnimAsset_TickAssetPlayerProxy::RemapTracksToNewSkeleton(USkeleton* NewSkeleton, bool bConvertSpaces)
{
}

void UAnimAsset_TickAssetPlayerProxy::RefreshParentAssetData()
{
}

