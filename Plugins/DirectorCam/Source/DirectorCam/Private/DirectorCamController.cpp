#include "DirectorCamController.h"
#include "InputCoreTypes.h" // Add this line

ADirectorCamController::ADirectorCamController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->bShouldPerformFullTickWhenPaused = true;
}


