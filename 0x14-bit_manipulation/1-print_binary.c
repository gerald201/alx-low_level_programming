#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * author: Gerald
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num1;
	unsigned int x;

	num1 = 1;
	for (x = 1; x <= power; x++)
		num1 *= base;
	return (num1);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int devise, checker;
	char flag;

	flag = 0;
	devise = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (devise != 0)
	{
		checker = n & devise;
		if (checker == devise)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || devise == 1)
		{
			_putchar('0');
		}
		devise >>= 1;
	}
}
