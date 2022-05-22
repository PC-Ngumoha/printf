#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/* Flags struct */
typedef struct flags
{
	int plus;
	int space;
	int hash;
}flag_t;

/* identifiers struct */
typedef struct identifiers
{
	char symbol;
	int (*func)(va_list, flag_t *);
} id;



/* Write functions*/
int _putchar(char c);
int _puts(char *str);


/* _printf */
int _printf(const char *format, ...);

/* Print character functions */
int _print_char(va_list, flag_t *);
int _print_str(va_list, flag_t *);
int _print_specifier(va_list, flag_t *);

/* Print numbers in decimal */
int  _print_dec(va_list, flag_t *);

/* Print numbers in other bases */
int _print_binary(va_list, flag_t *);
int _print_hexa_upper(va_list, flag_t *);
int _print_hexa_lower(va_list, flag_t *);
int _print_octal(va_list, flag_t *);
int _print_unsigned(va_list, flag_t *);
int _print_address(va_list, flag_t *);

/* Print addresses in hexadecimal format */
int _print_address(va_list, flag_t *);

/* Helper functions */
void print_number(int n);
int count_digits(int n);
char *convert(unsigned long num, int base, int lowercase);

/* Function Pointer Generator */
int (*get_func(char c))(va_list, flag_t *);

/* Sets flags */
int get_flags(char elem, flag_t *);

#endif /* MAIN_H_ */
