// Copyright (c) 2017-2024, University of Cincinnati, developed by Henry Schreiner
// under NSF AWARD 1414736 and by the respective contributors.
// All rights reserved.
//
// SPDX-License-Identifier: BSD-3-Clause

#include <CLI/CLI.hpp>
#include <iostream>
#include <map>
#include <string>
#include "monolithic_examples.h"

enum class Level : int { High, Medium, Low };

// Defining operator<<() for your enum class (in this case for 'Level') overrides CLI11's enum streaming
inline std::ostream &operator<<(std::ostream &os, const Level &level) {
    switch(level) {
    case Level::High:
        os << "High";
        break;
    case Level::Medium:
        os << "Medium";
        break;
    case Level::Low:
        os << "Low";
        break;
    }
    os << " (ft rom custom ostream)";
    return os;
}

#if defined(BUILD_MONOLITHIC)
#define main cli11_enum_ostream_example_main
#endif

extern "C"
int main(int argc, const char **argv) {
    CLI::App app;

    Level level{Level::Low};
    // specify string->value mappings
    std::map<std::string, Level> map{{"high", Level::High}, {"medium", Level::Medium}, {"low", Level::Low}};
    // CheckedTransformer translates and checks whether the results are either in one of the strings or in one of the
    // translations already
    app.add_option("-l,--level", level, "Level settings")
        ->required()
        ->transform(CLI::CheckedTransformer(map, CLI::ignore_case));

    CLI11_PARSE(app, argc, argv);

    // CLI11's built in enum streaming can be used outside CLI11 like this:
    using CLI::enums::operator<<;
    std::cout << "Enum received: " << level << '\n';

    return 0;
}
