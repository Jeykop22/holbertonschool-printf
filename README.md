<div align="center"> 
  <h1>Project C - printf</h1>
</div>

# _printf

The project is a creation of Holbertonschool and the program is a pseudo-recreation of the C standard library function, `printf`.

## Compilation

Run this command for check if your code is right:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Flowchart

<img src="https://cdn.discordapp.com/attachments/1164887132893106208/1176526563710357544/printf.png?ex=656f30bf&is=655cbbbf&hm=5ef72784e3d1dc190926848fde96fb97ffa31e228efee03a0fcee6e44a504806&">
         <alt="Flowchart">

## Authorized functions and macros

The following functions and macros are authorized for use in this project:

  - write (man 2 write)
  - malloc (man 3 malloc)
  - free (man 3 free)
  - va_start (man 3 va_start)
  - va_end (man 3 va_end)
  - va_copy (man 3 va_copy)
  - va_arg (man 3 va_arg)

## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 20.04 LTS machine with `gcc` version 11.4.0

## Function Prototype

The prototype for the _printf function is:

  - **int _printf(const char *format, ...);***

The function returns the number of characters printed (excluding the null byte used to end output to strings) and writes output to stdout, the standard output stream.

The format argument is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail.

## Man Page For _printf

Run this command to get the man :
`man ./man_3_printf`

## Conversion Specifiers to Handle

The following conversion specifiers need to be handled:

| Indicator  | Data type | Description |
| ------------- |:-------------:|:-------------:|
| %c      | int    | Convert an int to an unsigned character and print the resulting character  |
| %s      | char * | Print a string pointed to by a char *  |
| %%      | char   | Print a single % character  |
| %d      | int    | Print integer in decimal |
| %i      | int    | Print integer in decimal and other base like octal or hexa|

  The c, s, and % conversion specifiers are standard and are included in the C library printf function. The remaining conversion specifiers need to be implemented.

### Format of the Argument String

The `format` string argument is a constant character string composed of zero or more directives.
