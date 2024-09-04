#pragma once
#include "CoreMinimal.h"
#include "PhotoModeLogo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPhotoModeLogo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FLogoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> LogoImage;
    
    DIRECTORCAM_API FPhotoModeLogo();
};

