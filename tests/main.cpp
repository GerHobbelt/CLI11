// Copyright (c) 2017-2026, University of Cincinnati, developed by Henry Schreiner
// under NSF AWARD 1414736 and by the respective contributors.
// All rights reserved.
//
// SPDX-License-Identifier: BSD-3-Clause

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#ifdef CLI11_CATCH3

#include <catch2/catch_session.hpp>
#include <catch2/internal/catch_compiler_capabilities.hpp>
#include <catch2/internal/catch_config_wchar.hpp>
#include <catch2/internal/catch_leak_detector.hpp>
#include <catch2/internal/catch_platform.hpp>

#include <iostream>

namespace Catch {
CATCH_INTERNAL_START_WARNINGS_SUPPRESSION
CATCH_INTERNAL_SUPPRESS_GLOBALS_WARNINGS
static LeakDetector leakDetector;
CATCH_INTERNAL_STOP_WARNINGS_SUPPRESSION
}  // namespace Catch

// Standard C/C++ main entry point
extern "C"
int main(int argc, const char **argv) {

    // We want to force the linker not to discard the global variable
    // and its constructor, as it (optionally) registers leak detector
    (void)&Catch::leakDetector;

    Catch::Session session;  // There must be exactly one instance

#if 0
  session.ignoreStartupExceptions();
#endif

    // Let Catch2 (using Clara) parse the command line
    int returnCode = session.applyCommandLine(argc, argv);
    if(returnCode != 0)  // Indicates a command line error
        return returnCode;

    // if set on the command line then 'height' is now set at this point
    std::cerr << "Start running CLI11 tests...\n\n";

    return session.run();
}

#endif // CLI11_CATCH3
