#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * author: Gerald
 * @y: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *y)
{
	int x;
	unsigned int num1;

	num1 = 0;
	if (!y)
		return (0);
	for (x = 0; y[x] != '\0'; x++)
	{
		if (y[x] != '0' && y[x] != '1')
			return (0);
	}
	for (x = 0; y[x] != '\0'; x++)
	{
		num1 <<= 1;
		if (y[x] == '1')
			num1 += 1;
	}
	return (num1);
}
