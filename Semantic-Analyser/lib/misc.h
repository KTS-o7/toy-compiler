/* ANSI colour library codes
 * {@link https://github.com/shiena/ansicolor/blob/master/README.md}
 *
 * Usage: printf(FORE_BLU "This is blue text" RESET);
 *        printf(FORE_RED "This is %s text" RESET, "red");
 *
 */

#ifndef _MISC_LIB
#define _MISC_LIB

// Resets All colour attributes to initial terminal state
#define RESET "\x1B[0m"

// Foreground Colours
#define FORE_RED "\x1B[31m"
#define FORE_GRN "\x1B[32m"
#define FORE_YEL "\x1B[33m"
#define FORE_BLU "\x1B[34m"
#define FORE_MAG "\x1B[35m"
#define FORE_CYN "\x1B[36m"
#define FORE_WHT "\x1B[37m"

// Background Colours
#define BACK_YEL "\x1b[43m"

// Other Attributes
#define ATTR_BOLD "\x1b[1m"

// Symbols
#define SYMBOL_TICK "\xE2\x9C\x93"
#define SYMBOL_CROSS "✘"

#define DASHES "=============================================================================================================================\n"

void trace(char *s);
void multiline_comment();
void yyerror(const char *s);
void check_redeclaration_error();
void check_void_parameter_error();
void check_array_dimension_error();
void check_array_subscript_error();
void check_scope_error();
void parameter_check();
void is_function();
#endif
