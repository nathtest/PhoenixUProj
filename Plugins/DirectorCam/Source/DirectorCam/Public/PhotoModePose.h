#pragma once
#include "CoreMinimal.h"
#include "PhotoModePose.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FPhotoModePose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> PoseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEquipWand;
    
    DIRECTORCAM_API FPhotoModePose();
};

