#include "CLI/CLI.hpp"
#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main cli11_simplest_book_example_main
#endif

extern "C"
int main(int argc, const char **argv) {
    CLI::App app;

    // Add new options/flags here

    CLI11_PARSE(app, argc, argv);

    return 0;
}
