#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print_functions - Structure for correspondence between
 *                          char specifier and function to print.
 * @specifier: Char specifier for conversion
 * @f: The function print associated
 */
typedef struct format_type
{
	char func;
	int (*print)(va_list);
} format_t;

int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int _printf(const char *format, ...);
int print_int(va_list args);

#endif /* MAIN_H */
