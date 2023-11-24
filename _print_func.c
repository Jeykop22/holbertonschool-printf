#include "main.h"

/**
 * get_print_func - function to get the array of function pointer format_t
 * @character: character special
 * @list_args: list of arguments
 * Return: array of func
*/

int get_print_func(char character, va_list list_args)
{
	int index_function;
	format_t func[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"%", _print_mod},
		{"d", _print_int},
		{"i", _print_int}
	};

	for (index_function = 0; index_function < 5; index_function++)
	{
		if (character == *(func[index_function].symbol))
		{
			func[index_function].print(list_args);
		}
	}
	return (0);
}
