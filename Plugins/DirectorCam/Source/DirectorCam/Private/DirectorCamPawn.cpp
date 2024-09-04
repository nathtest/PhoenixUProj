#include "DirectorCamPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatingPawnMovement -FallbackName=FloatingPawnMovement
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"

ADirectorCamPawn::ADirectorCamPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent0"));
    this->MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent0"));
    this->CollisionComponent = (USphereComponent*)RootComponent;
    this->CameraComponent = NULL;
    this->bUsePhotoMode = false;
    this->PhotoModeConfig = NULL;
}


bool ADirectorCamPawn::ShouldShowFilmGrainOption() const {
    return false;
}

bool ADirectorCamPawn::ShouldShowChromaticAberrationOption() const {
    return false;
}

bool ADirectorCamPawn::ShouldEnablePoseOption() const {
    return false;
}

void ADirectorCamPawn::SetUsePhotoModePose(bool bUsePhotoModePose, UAnimSequenceBase* PoseAnimation, bool bEquipWandForPose) {
}

void ADirectorCamPawn::SetUsePhotoModeExtraExposureCompensation(bool bUsePhotoModeValue) {
}

void ADirectorCamPawn::SetUsePhotoModeDisplaySaturation(bool bUsePhotoModeValue) {
}

void ADirectorCamPawn::SetUsePhotoModeDisplayContrast(bool bUsePhotoModeValue) {
}

void ADirectorCamPawn::SetUsePhotoMode(bool InUsePhotoMode) {
}

void ADirectorCamPawn::SetRoll(float InNewRoll) {
}

void ADirectorCamPawn::SetPhotoModeExtraExposureCompensationValue(float NewValue) {
}

void ADirectorCamPawn::SetPhotoModeDisplaySaturationValue(float NewValue) {
}

void ADirectorCamPawn::SetPhotoModeDisplayContrastValue(float NewValue) {
}

void ADirectorCamPawn::SetHidePlayer(bool bShouldHidePlayer) {
}

void ADirectorCamPawn::SetHideNPC(bool bShouldHideNPC) {
}

void ADirectorCamPawn::SetFOV(float InNewFOV) {
}

void ADirectorCamPawn::SetFocusDistance(float InFocusDistance) {
}

void ADirectorCamPawn::SetFocalLength(int32 InFocalLength) {
}


void ADirectorCamPawn::OnPhotoModeReset() {
}

void ADirectorCamPawn::LoadAsset(TSoftObjectPtr<UObject> Asset, FName ID, bool bUseBlockingLoad) {
}

bool ADirectorCamPawn::GetUsePhotoMode() const {
    return false;
}

FFloatRange ADirectorCamPawn::GetFOVRange() {
    return FFloatRange{};
}

int32 ADirectorCamPawn::GetFocalLength() const {
    return 0;
}

void ADirectorCamPawn::EnableCameraInput() {
}

void ADirectorCamPawn::ClosePhotoMode() {
}

void ADirectorCamPawn::ClearAndDisableCameraInput() {
}



