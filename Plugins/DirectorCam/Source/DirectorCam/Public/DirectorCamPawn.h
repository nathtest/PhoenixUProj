#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "DirectorCamPawn.generated.h"


class UAnimSequenceBase;
class UCameraComponent;
class UObject;
class UPawnMovementComponent;
class UPhotoModeConfig;
class USphereComponent;

UCLASS(Blueprintable)
class DIRECTORCAM_API ADirectorCamPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePhotoMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhotoModeConfig* PhotoModeConfig;
    
public:
    ADirectorCamPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOptionsMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowFilmGrainOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowChromaticAberrationOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEnablePoseOption() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUsePhotoModePose(bool bUsePhotoModePose, UAnimSequenceBase* PoseAnimation, bool bEquipWandForPose);
    
    UFUNCTION(BlueprintCallable)
    void SetUsePhotoModeExtraExposureCompensation(bool bUsePhotoModeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUsePhotoModeDisplaySaturation(bool bUsePhotoModeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUsePhotoModeDisplayContrast(bool bUsePhotoModeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUsePhotoMode(bool InUsePhotoMode);
    
    UFUNCTION(BlueprintCallable)
    void SetRoll(float InNewRoll);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeExtraExposureCompensationValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeDisplaySaturationValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeDisplayContrastValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHidePlayer(bool bShouldHidePlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetHideNPC(bool bShouldHideNPC);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float InNewFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusDistance(float InFocusDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalLength(int32 InFocalLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleRuleOfThirds();
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeReset();
    
    UFUNCTION(BlueprintCallable)
    void LoadAsset(TSoftObjectPtr<UObject> Asset, FName ID, bool bUseBlockingLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsePhotoMode() const;
    
    UFUNCTION(BlueprintCallable)
    FFloatRange GetFOVRange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocalLength() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableCameraInput();
    
    UFUNCTION(BlueprintCallable)
    void ClosePhotoMode();
    
    UFUNCTION(BlueprintCallable)
    void ClearAndDisableCameraInput();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAssetLoaded(UObject* Asset, FName ID);
    
};

