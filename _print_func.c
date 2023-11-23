#include "main.h"

/**
 * get_print_func - function to get the array of function pointer format_t
 * Return: array of func
*/

format_t *get_print_func(void)
{
	static format_t func[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_int},
		{"i", _print_int}
	};
return (func);
}
