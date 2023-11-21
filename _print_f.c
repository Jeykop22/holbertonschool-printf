#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - to print the number of characters printed
 * @format: format string
 * Return: print with format
*/
int _printf(const char *format, ...)
{
	va_list list_args;

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
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
			}
			else if (*format == 'c')
			{
				char c = va_arg(list_args, int);

				write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_args, char *);
				int index = 0;

				while (str[index] != '\0')
					index++;
				write(1, str, index);
			}
		} format++;
	}
	va_end(list_args);
	return (0);
}
