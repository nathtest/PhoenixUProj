#pragma once
#include "CoreMinimal.h"
#include "ELogoPositionOption.generated.h"

UENUM(BlueprintType)
enum class ELogoPositionOption : uint8 {
    PhotoModeLogoPosTopLeft,
    PhotoModeLogoPosTopCentre,
    PhotoModeLogoPosTopRight,
    PhotoModeLogoPosBottomLeft,
    PhotoModeLogoPosBottomCentre,
    PhotoModeLogoPosBottomRight,
};

