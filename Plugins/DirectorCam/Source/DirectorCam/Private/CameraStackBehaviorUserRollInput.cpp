#include "CameraStackBehaviorUserRollInput.h"

UCameraStackBehaviorUserRollInput::UCameraStackBehaviorUserRollInput() {
    this->RollSpeed = 180.00f;
    this->InputMappingCurve = NULL;
    this->MinGamepadInputForAcceleration = 0.90f;
    this->AccelerationSpeedFactor = 2.75f;
    this->AccelerationEaseSpeed = 2.00f;
    this->DecelerationEaseSpeed = 27.50f;
}


