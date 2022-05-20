#include "main.h"

/**
 * main - main entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int large_num = 1000000000;
	int num = 100000;

	_printf("Large Number: [%d, %i]\n", INT_MAX, large_num);
	printf("Large Number: [%d, %i]\n", INT_MAX, large_num);
	_printf("The world is waiting for %s\n", "Chukwuemeka");
	_printf("Give me %c helping hand\n", 'a');
	_printf("Binary of %d is %b\n", 98, 98);
	_printf("Hexadecimal of %d is %x or %X\n", num, num, num);
	_printf("Octal of %d is %o\n", num, num);

	return (0);
}
