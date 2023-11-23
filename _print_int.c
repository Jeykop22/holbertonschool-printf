#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _print_int - print the arguments with only integers
 * @list_args: list of arguments
 *
 * Return: integers
*/
void _print_int(va_list list_args)
{
	char last_digit;
	int reversed;
	int num = va_arg(list_args, int);

	if (num < 0)
	{
		_putchar('-');
		last_digit = (char)('0' - (num % 10));
		num /= -10;
	}
	else
	{
		last_digit = (char)((num % 10) + '0');
		num /= 10;
	}

	reversed = 0;
	while (num > 0)
	{
		reversed = reversed * 10 + (num % 10);
		num /= 10;
	}
	while (reversed > 0)
	{
		char c = (char)((reversed % 10) + '0');

		_putchar(c);
		reversed /= 10;
	}
	_putchar(last_digit);
}
