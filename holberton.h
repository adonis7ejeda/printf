#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int f_character(va_list char_list);
int f_string(va_list char_list);
int f_integer(va_list char_list);
int print_integer(long num);
/**
 * struct call_function - character and function
 * @sp_char: character that specifies the
 * format of the variable that will be printed.
 * @f: function that returns the variable in a
 * string with the new format.
 *
 * Description: match the char with the function
 */
typedef struct call_function
{
char *sp_char;
int (*f)();
} c_f;
#endif
