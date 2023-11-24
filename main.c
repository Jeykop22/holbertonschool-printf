#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
	_printf("String:[%s] %% %s %c %% %d zougi\n", "I am a string !", "beau", 'H', 1);
    printf("String:[%s] %% %s %c %% %d zougi\n", "I am a string !", "beau", 'H', 1);
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", 38);
    printf("Len:[%d]\n", 38);
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%c\n", '\0');
    _printf("%d\n", INT_MIN);
    _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("%c\n", '\0');
    printf("%d\n", INT_MIN);
    printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    return (0);
}
