#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int _print_char(va_list list_args);
int _print_str(va_list list_args);
int _print_int(va_list list_args);
int _printf(const char *format, ...);
int _print_mod(__attribute__((unused))va_list list_args);
int get_print_func(char character, va_list list_args);

/**
 * struct format_type - structure for format type
 * @symbol: special symbol to print
 * @print: function pointer
*/
typedef struct format_type
{
	char *symbol;
	int (*print)(va_list list_args);
} format_t;

#endif
