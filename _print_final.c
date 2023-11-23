#include "main.h"
/**
 * _printf - to print the number of characters printed
 * @format: format string
 * Return: print with format
*/
int _printf(const char *format, ...)
{	int index_function = 0, char_print = 0;
	va_list list_args;
	format_t *func = get_print_func();

	if (!format)
		return (-1);
	va_start(list_args, format);
	while (*format)
	{
		if (*format != '%')
		{	write(1, format, 1);
			char_print++;	}
		else
		{
		if (*(format + 1) == '\0')
			break;
		if (*(format + 1) != '\0')
		{
			if (*(format + 1) != 'c' && *(format + 1) != 's'
			&& *(format + 1) != 'd' && *(format + 1) != 'i' && *(format + 1) != '%')
			{	_putchar('%');
				char_print++;	}
			else
			{	format++;
				if (*format == '%')
				{	_putchar('%');
					char_print++;	}
				for (index_function = 0; index_function < 4; index_function++)
				{
				if (*format == *(func[index_function].symbol))
				{	func[index_function].print(list_args);
					char_print++;	}
				}
			}
		}
		} format++;
	} va_end(list_args);
	return (char_print);
}
