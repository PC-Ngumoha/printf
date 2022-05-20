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
int  _print_char(va_list);
int  _print_str(va_list);
int  _print_percent(va_list);

/* Print numbers */
int  _print_dec(va_list);

/* Helper functions */
void print_number(int n);

#endif /* MAIN_H_ */
