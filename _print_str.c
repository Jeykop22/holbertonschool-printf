#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_str - print the arguments with only string
 * @list_args: list of arguments
 *
 * Return: string
*/
void _print_str(va_list list_args)
{
	char *str = va_arg(list_args, char *);
	int index = 0;

	if (str == NULL)
		str = "(null)";
	while (str[index] != '\0')
		index++;
	write(1, str, index);
}
