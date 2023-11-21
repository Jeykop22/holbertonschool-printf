<div align="center"> 
  <h1>Project C - printf</h1>
</div>

# _printf

The project is a creation of Holbertonschool and the program is a pseudo-recreation of the C standard library function, `printf`.

## Flowchart

<img src="https://cdn.discordapp.com/attachments/1164887132893106208/1176453456542834689/printf_final.png?ex=656eeca9&is=655c77a9&hm=f9319bff4ed30bb50446e588ba644189efc334a349ca7b43bdea860209b8d01c&">
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

## Conversion Specifiers to Handle

The following conversion specifiers need to be handled:

| Indicator  | Data type | Description |
| ------------- |:-------------:|:-------------:|
| %c      | int    | Convert an int to an unsigned character and print the resulting character  |
| %s      | char * | Print a string pointed to by a char *  |
| %%      | char   | Print a single % character  |

  The c, s, and % conversion specifiers are standard and are included in the C library printf function. The remaining conversion specifiers need to be implemented.

### Format of the Argument String

The `format` string argument is a constant character string composed of zero or more directives.

Authors:

:computer: Tuyen H

:computer: Nolan B

:computer: Gwenael B