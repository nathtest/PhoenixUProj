#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DirectorCamSettings.generated.h"

class ADirectorCamController;
class ADirectorCamPawn;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UDirectorCamSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADirectorCamController> PlayerControllerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADirectorCamPawn> PawnClass;
    
    UDirectorCamSettings();

};

