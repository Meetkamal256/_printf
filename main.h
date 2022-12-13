#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

/**
 * struct func - struct for specifier to pointer
 * @t: character to compare
 * @f: function that handle printing...
 *
 */
typedef struct func
{
    char *t;
    int (*f)(va_list);
} func_t;

int print_str(va_list args);
int print_cent(va_list args);
int print_char(va_list args);

#endif
