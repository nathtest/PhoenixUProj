#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CameraStack -ObjectName=CameraStackSecondaryTargetGetterBlend -FallbackName=CameraStackSecondaryTargetGetterBlend
#include "CameraStackSecondaryTargetGetterBlend.h"
#include "CameraStackDirectorCamArmOriginLockOnTargetGetter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCameraStackDirectorCamArmOriginLockOnTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
    GENERATED_BODY()
public:
    UCameraStackDirectorCamArmOriginLockOnTargetGetter();

};

