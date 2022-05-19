#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _print_string(const char *str);
void _print_decimal(int i);
int *_realloc_int(int *old_mem, int newsize, int oldsize);

#endif /* MAIN_H_ */
