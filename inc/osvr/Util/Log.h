/** @file
    @brief Header

    @date 2016

    @author
    Sensics, Inc.
    <http://sensics.com>

*/

// Copyright 2016 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// 	http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef INCLUDED_Log_h_GUID_B6053E2B_593D_4ECA_8C3B_2C55D0FE6A49
#define INCLUDED_Log_h_GUID_B6053E2B_593D_4ECA_8C3B_2C55D0FE6A49

// Internal Includes
#include <osvr/Util/Export.h>
#include <osvr/Util/LineLogger.h>
#include <osvr/Util/LogLevel.h>
#include <osvr/Util/Logger.h>

// Library/third-party includes
// - none

// Standard includes
#include <memory>
#include <string>
#include <vector>

namespace osvr {
namespace util {
    namespace log {

        /// @brief Attempt to initialize the logging system with the indicated
        /// base filename (will be stripped of all characters outside of
        /// [a-zA-Z0-9_]). If it succeeds (because you called it before any
        /// logging calls occurred), it returns true.
        OSVR_UTIL_EXPORT bool
        tryInitializingLoggingWithBaseName(std::string const &baseName);

        OSVR_UTIL_EXPORT LoggerPtr make_logger(const std::string &logger_name);

        /// @brief For implementations with a centralized logger registry, flush
        /// all logger sinks.
        OSVR_UTIL_EXPORT void flush();

        OSVR_UTIL_EXPORT std::string getLoggingDirectory(bool make_dir = false);

    } // end namespace log
} // end namespace util
} // end namespace osvr

#endif // INCLUDED_Log_h_GUID_B6053E2B_593D_4ECA_8C3B_2C55D0FE6A49