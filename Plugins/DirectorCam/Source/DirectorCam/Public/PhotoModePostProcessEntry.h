#pragma once
#include "CoreMinimal.h"
#include "PhotoModePostProcessEntry.generated.h"

class UPhotoModePostProcess;

USTRUCT(BlueprintType)
struct FPhotoModePostProcessEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPhotoModePostProcess> Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideFilterStrengthSlider;
    
    DIRECTORCAM_API FPhotoModePostProcessEntry();
};

