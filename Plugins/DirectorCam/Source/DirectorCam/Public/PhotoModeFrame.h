#pragma once
#include "CoreMinimal.h"
#include "PhotoModeFrame.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPhotoModeFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FrameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FrameImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LogoVerticalPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LogoHorizontalPadding;
    
    DIRECTORCAM_API FPhotoModeFrame();
};

