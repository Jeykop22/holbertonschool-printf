#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - my fonction printf
 * @format: format is a string of character with "%" in specifier
 * @...: argument for my "%" specifier
 * Return: number of charaters printed
*/

int _printf(const char *format, ...)
{
	va_list list_args;
	int count_char = 0, index, specifical;
	const char *symbol;
	format_t func[] = {
		{'c', print_char}, {'s', print_str}, {'%', print_percent},
		{'d', print_int}, {'i', print_int}, {'\0', NULL} };
	va_start(list_args, format);
	if (!format)
		return (-1);
	for (symbol = format; *symbol != '\0'; symbol++)
	{
		if (*symbol == '%')
		{
			if (*(symbol + 1) == '\0')
				return (-1);
			index = 0;
			specifical = 0;
			while (func[index].func != '\0')
			{
				if (func[index].func == *(symbol + 1))
				{
					count_char += func[index].print(list_args);
					symbol++;
					specifical = 1;
					break;
				}
				index++;
			}
			if (!specifical)
			{
				count_char += _putchar('%');
			}
		}
		else
			count_char += _putchar(*symbol);
	}
	va_end(list_args);
	return (count_char);
}
