#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PhotoModeFrame.h"
#include "PhotoModeLogo.h"
#include "PhotoModePose.h"
#include "PhotoModePostProcessEntry.h"
#include "PhotoModeConfig.generated.h"

UCLASS(Blueprintable)
class DIRECTORCAM_API UPhotoModeConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModePostProcessEntry> PostProcessFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeFrame> Frames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModeLogo> Logos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModePose> MalePoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotoModePose> FemalePoses;
    
    UPhotoModeConfig();

};

