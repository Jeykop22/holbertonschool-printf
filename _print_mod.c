#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_mod - print the %
 * @list_args: list of arguments
 *
 * Return: %
*/
int _print_mod(__attribute__((unused))va_list list_args)
{
	return (_putchar('%'));
}
