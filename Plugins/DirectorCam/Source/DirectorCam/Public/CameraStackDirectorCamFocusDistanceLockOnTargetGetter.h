#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CameraStack -ObjectName=CameraStackSecondaryTargetGetterBlend -FallbackName=CameraStackSecondaryTargetGetterBlend
#include "CameraStackDirectorCamFocusDistanceLockOnTargetGetter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCameraStackDirectorCamFocusDistanceLockOnTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
    GENERATED_BODY()
public:
    UCameraStackDirectorCamFocusDistanceLockOnTargetGetter();

};

