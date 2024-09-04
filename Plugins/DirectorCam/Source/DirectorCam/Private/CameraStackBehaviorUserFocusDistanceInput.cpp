#include "CameraStackBehaviorUserFocusDistanceInput.h"

UCameraStackBehaviorUserFocusDistanceInput::UCameraStackBehaviorUserFocusDistanceInput() {
    this->FocusDistanceSpeed = 200.00f;
    this->InputMappingCurve = NULL;
    this->MinGamepadInputForAcceleration = 0.90f;
    this->AccelerationSpeedFactor = 2.75f;
    this->AccelerationEaseSpeed = 2.00f;
    this->DecelerationEaseSpeed = 27.50f;
    this->FilterFrequency = 0.00f;
    this->FilterDampingRatio = 1.00f;
}


