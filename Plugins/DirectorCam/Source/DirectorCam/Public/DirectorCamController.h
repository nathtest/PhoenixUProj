#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "InputCoreTypes.h"
#include "DirectorCamController.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ADirectorCamController : public APlayerController {
    GENERATED_BODY()
public:
    ADirectorCamController(const FObjectInitializer& ObjectInitializer);

};

