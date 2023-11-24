#include "main.h"
#include <stdio.h>

/**
 * _printf - to print the number of characters printed
 * @format: format string
 * Return: print with format
*/
int _printf(const char *format, ...)
{	int count = 0, index = 0;
	va_list list_args;

	if (!format)
		return (-1);
	va_start(list_args, format);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
			count++;
		}
		else
		{
			if ((format[index + 1] == '\0') || !format[index + 1])
			{
				break;
			}
			else if (format[index + 1] != '%' &&  format[index + 1] != 'c'
					&& format[index + 1] != 's' && format[index + 1] != 'd'
					&& format[index + 1] != 'i')
			{
				_putchar(format[index]);
				count++;
			}
			else
			{
				index++;
				get_print_func(format[index], list_args);
				if (format[index] == 's')
					va_arg(list_args, char *);
				if (format[index] == 'c' || format[index] == 'd' || format[index] == 'i')
					va_arg(list_args, int);
				count++;
			}
		}
		index++;
	}
	va_end(list_args);
	return (count);
}
