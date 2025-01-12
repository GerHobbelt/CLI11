// Copyright (c) 2017-2025, University of Cincinnati, developed by Henry Schreiner
// under NSF AWARD 1414736 and by the respective contributors.
// All rights reserved.
//
// SPDX-License-Identifier: BSD-3-Clause

#include <CLI/CLI.hpp>
#include <cstring>
#include <iostream>
#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main cli11_ensure_utf8_example_main
#endif

extern "C"
int main(int argc, const char **argv) {
    CLI::App app{"App description"};
    const char **original_argv = argv;
    char **argve = const_cast<char **>(argv);
    argve = app.ensure_utf8(argve);

#ifdef _WIN32
    for(int i = 0; i < argc; i++) {
        if(std::strcmp(argve[i], original_argv[i]) != 0) {
            std::cerr << argve[i] << "\n";
            std::cerr << original_argv[i] << "\n";
            return i + 1;
        }
        argve[i][0] = 'x';  // access it to check that it is accessible
    }

#else
    (void)argc;

    if(original_argv != argve) {
        return -1;
    }
#endif

    return 0;
}
