#include "main.h"
#include <stdio.h>

int _print_special_format(const char *format, int cp);
int _print_func(const char *format, format_t *func, va_list list_args, int cp);

/**
 * _printf - to print the number of characters printed
 * @format: format string
 * Return: print with format
*/
int _printf(const char *format, ...)
{	int cp = 0;
	va_list list_args;
	format_t *func = get_print_func();

	if (!format)
		return (-1);
	va_start(list_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			cp++;
		}
		else
		{
			if (*(format + 1) == '\0' || !*(format + 1))
			{
				break;
			}
			else
			{	format++;
				if (*format == '%' || (*format != 'c' && *format != 's'
					&& *format != 'd' && *format != 'i'))
					cp = _print_special_format(format, cp);
				else if (*format != 'c' && *format != 's'
						&& *format != 'd' && *format != 'i')
				{
					break;
				}
				else
					cp = _print_func(format, func, list_args, cp);
			}
		}
		format++;
	}
	va_end(list_args);
	return (cp);
}
/**
 * _print_special_format - print special format like %, !, K
 * @format: format string
 * @cp: number of character printed
 * Return: number of character printed
*/
int _print_special_format(const char *format, int cp)
{
	_putchar('%');
	cp++;
	if (*format != '%' && *format != 'q' && *format != 'z')
		_putchar(*format);
	cp++;
	return (cp);
}

/**
 * _print_func - print special function
 * @format: format string
 * @func: list of function
 * @list_args: list of argument
 * @cp: number of character printed
 * Return: number of character printed
*/
int _print_func(const char *format, format_t *func, va_list list_args, int cp)
{
	int index_function;

	for (index_function = 0; index_function < 4; index_function++)
	{
		if (*format == *(func[index_function].symbol))
		{
			func[index_function].print(list_args);
			cp++;
		}
	}
	return (cp);
}
