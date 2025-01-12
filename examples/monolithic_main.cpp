
//implement your copy of `#include "monolithic_main_defs.h"`:
#include "monolithic_examples.h"

// define a name for the monolith
#define USAGE_NAME   "cli11_examples"

// load the monolithic definitions which you need for the dispatch table:
#include "monolithic_main_internal_defs.h"

// declare your own monolith dispatch table:
MONOLITHIC_CMD_TABLE_START()

{ "flags_book", { .fa = cli11_flags_book_example_main } },
{ "geet_book", { .fa = cli11_geet_book_example_main } },
{ "intro_book", { .fa = cli11_intro_book_example_main } },
{ "simplest_book", { .fa = cli11_simplest_book_example_main } },

{ "arg_capture", { .fa = cli11_arg_capture_example_main } },
{ "callback_passthrough", { .fa = cli11_callback_passthrough_example_main } },
{ "config_app", { .fa = cli11_config_app_example_main } },
{ "custom_parse", { .fa = cli11_custom_parse_example_main } },
{ "digit_args", { .fa = cli11_digit_args_example_main } },
{ "enum", { .fa = cli11_enum_example_main } },
{ "enum_ostream", { .fa = cli11_enum_ostream_example_main } },
{ "formatter", { .fa = cli11_formatter_example_main } },
{ "groups", { .fa = cli11_groups_example_main } },
{ "help_usage", { .fa = cli11_help_usage_example_main } },
{ "inter_argument_order", { .fa = cli11_inter_argument_order_example_main } },
{ "json", { .fa = cli11_json_example_main } },
{ "modhelp", { .fa = cli11_modhelp_example_main } },
{ "nested", { .fa = cli11_nested_example_main } },
{ "option_groups", { .fa = cli11_option_groups_example_main } },
{ "positional_arity", { .fa = cli11_positional_arity_example_main } },
{ "positional_validation", { .fa = cli11_positional_validation_example_main } },
{ "prefix_command", { .fa = cli11_prefix_command_example_main } },
{ "ranges", { .fa = cli11_ranges_example_main } },
{ "retired", { .fa = cli11_retired_example_main } },
{ "shapes", { .fa = cli11_shapes_example_main } },
{ "simple", { .fa = cli11_simple_example_main } },
{ "subcommands", { .fa = cli11_subcommands_example_main } },
{ "subcommand_help", { .fa = cli11_subcommand_help_example_main } },
{ "subcommand", { .fa = cli11_subcommand_example_main } },
{ "subcommand_partitioned", { .fa = cli11_subcommand_partitioned_example_main } },
{ "test_exe", { .fa = cli11_test_exe_example_main } },
{ "validators", { .fa = cli11_validators_example_main } },

{ "ensure_utf8", { .fa = cli11_ensure_utf8_example_main }},
{ "ensure_utf8_twice", { .fa = cli11_ensure_utf8_twice_example_main }},
{ "meson", { .fa = cli11_meson_example_main } },
{ "informational_test", { .f = cli11_informational_test_main } },

MONOLITHIC_CMD_TABLE_END();

// load the monolithic core dispatcher
#include "monolithic_main_tpl.h"
