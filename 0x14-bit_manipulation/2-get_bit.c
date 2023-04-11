#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divise, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divise = 1 << index;
	checker = n & divise;
	if (checker == divise)
		return (1);
	return (0);
}
