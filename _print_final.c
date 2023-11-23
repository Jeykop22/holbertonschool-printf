#include "main.h"
/**
 * _printf - to print the number of characters printed
 * @format: format string
 * Return: print with format
*/
int _printf(const char *format, ...)
{
	int index_function = 0, char_print = 0;
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
			char_print++;
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
				char_print++;
			}
			else
			{
				while (index_function < 4)
				{
					if (*format == *(func[index_function].symbol))
					{
						func[index_function].print(list_args);
						char_print++;
					} index_function++;
				}
			}
		} format++;
	} va_end(list_args);
	return (char_print);
}
