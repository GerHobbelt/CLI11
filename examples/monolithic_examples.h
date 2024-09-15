
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int cli11_flags_book_example_main(int argc, const char** argv);
int cli11_geet_book_example_main(int argc, const char** argv);
int cli11_intro_book_example_main(int argc, const char** argv);
int cli11_simplest_book_example_main(int argc, const char** argv);
int cli11_callback_passthrough_example_main(int argc, const char** argv);
int cli11_config_app_example_main(int argc, const char** argv);
int cli11_custom_parse_example_main(int argc, const char** argv);
int cli11_digit_args_example_main(int argc, const char** argv);
int cli11_arg_capture_example_main(int argc, const char **argv);
int cli11_enum_example_main(int argc, const char** argv);
int cli11_enum_ostream_example_main(int argc, const char** argv);
int cli11_formatter_example_main(int argc, const char** argv);
int cli11_groups_example_main(int argc, const char** argv);
int cli11_inter_argument_order_example_main(int argc, const char** argv);
int cli11_json_example_main(int argc, const char** argv);
int cli11_modhelp_example_main(int argc, const char** argv);
int cli11_nested_example_main(int argc, const char** argv);
int cli11_option_groups_example_main(int argc, const char** argv);
int cli11_positional_arity_example_main(int argc, const char** argv);
int cli11_positional_validation_example_main(int argc, const char** argv);
int cli11_prefix_command_example_main(int argc, const char** argv);
int cli11_ranges_example_main(int argc, const char** argv);
int cli11_retired_example_main(int argc, const char** argv);
int cli11_shapes_example_main(int argc, const char** argv);
int cli11_simple_example_main(int argc, const char** argv);
int cli11_subcommands_example_main(int argc, const char** argv);
int cli11_subcommand_help_example_main(int argc, const char** argv);
int cli11_subcommand_example_main(int argc, const char** argv);
int cli11_subcommand_partitioned_example_main(int argc, const char** argv);
int cli11_test_exe_example_main(int argc, const char** argv);
int cli11_validators_example_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
