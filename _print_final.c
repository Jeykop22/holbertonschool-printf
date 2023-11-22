#include "main.h"
#include <stdarg.h>
#include <unistd.h>

void _print_char(va_list list_args);
void _print_str(va_list list_args);
void _print_int(va_list list_args);

/**
 * _printf - to print the number of characters printed
 * @format: format string
 * Return: print with format
*/
int _printf(const char *format, ...)
{
	int index_function = 0;
	va_list list_args;
	format_t func[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_int},
		{"i", _print_int}
	};

	if (!format)
		return (-1);
	va_start(list_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		else
		{
			format++;
			if (index_function == 4)
				index_function = 0;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
			}
			else
			{
				while (index_function < 4)
				{
					if (*format == *(func[index_function].symbol))
					{
						func[index_function].print(list_args);
					}
					index_function++;
				}
			}
		}
		format++;
	}
	va_end(list_args);
	return (0);
}
