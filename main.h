#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
void _print_char(va_list list_args);
void _print_str(va_list list_args);
void _print_int(va_list list_args);
void _print_percent(void);
int _printf(const char *format, ...);

/**
 * struct format_type - structure for format type
 * @symbol: special symbol to print
 * @print: function pointer
*/
typedef struct format_type
{
	char *symbol;
	void (*print)(va_list list_args);
} format_t;

format_t *get_print_func(void);

#endif
