#include "CLI/CLI.hpp"
#include <iostream>
#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main cli11_intro_book_example_main
#endif

extern "C"
int main(int argc, const char **argv) {
    CLI::App app{"App description"};

    // Define options
    int p = 0;
    app.add_option("-p", p, "Parameter");

    CLI11_PARSE(app, argc, argv);

    std::cout << "Parameter value: " << p << std::endl;
    return 0;
}
