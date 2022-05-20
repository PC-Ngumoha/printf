#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* _putchar */
int _putchar(char c);


/* _printf */
int _printf(const char *format, ...);

/* Print character functions */
void _print_character(va_list);
void _print_string(va_list);
void _print_percent(va_list);

/* Print numbers */
void _print_decimal(va_list);

#endif /* MAIN_H_ */
