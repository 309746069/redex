/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include "Pass.h"

class BridgePass : public Pass {
 public:
  BridgePass() : Pass("BridgePass") {}

  void run_pass(DexStoresVector&, ConfigFiles&, PassManager&) override;

};
