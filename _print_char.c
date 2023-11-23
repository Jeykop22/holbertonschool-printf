#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_char - print the arguments with only character
 * @list_args: list of arguments
 *
 * Return: characters
*/
void _print_char(va_list list_args)
{
	char cha = va_arg(list_args, int);

	write(1, &cha, 1);
}
