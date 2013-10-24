/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#include <xenia/hid/nop/nop_input_driver.h>

#include <xenia/hid/hid-private.h>


using namespace xe;
using namespace xe::hid;
using namespace xe::hid::nop;


NopInputDriver::NopInputDriver(InputSystem* input_system) :
    InputDriver(input_system) {
}

NopInputDriver::~NopInputDriver() {
}

X_STATUS NopInputDriver::Setup() {
  return X_STATUS_SUCCESS;
}

// TODO(benvanik): spoof a device so that games don't stop waiting for
//     a controller to be plugged in.

XRESULT NopInputDriver::GetCapabilities(
    uint32_t user_index, uint32_t flags, X_INPUT_CAPABILITIES& out_caps) {
  return X_ERROR_DEVICE_NOT_CONNECTED;
}

XRESULT NopInputDriver::GetState(
    uint32_t user_index, X_INPUT_STATE& out_state) {
  return X_ERROR_DEVICE_NOT_CONNECTED;
}

XRESULT NopInputDriver::SetState(
    uint32_t user_index, X_INPUT_VIBRATION& vibration) {
  return X_ERROR_DEVICE_NOT_CONNECTED;
}
