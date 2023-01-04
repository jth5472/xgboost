/*!
 * Copyright 2022 by XGBoost Contributors
 */
#include "threading_utils.h"

#include <fstream>
#include <string>

#include "xgboost/logging.h"

namespace xgboost {
namespace common {
/**
 * \brief Get thread limit from CFS
 *
 * Modified from
 * github.com/psiha/sweater/blob/master/include/boost/sweater/hardware_concurrency.hpp
 *
 * MIT License: Copyright (c) 2016 Domagoj Šarić
 */
int32_t GetCfsCPUCount() noexcept {
  return -1;
}
}  // namespace common
}  // namespace xgboost
