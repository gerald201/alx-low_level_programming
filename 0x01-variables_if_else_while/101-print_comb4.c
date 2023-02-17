#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (l = 0; l < 10; l++)
			{
				if (l > m && m > n)
				{
					putchar((n % 10) + '0');
					putchar((m % 10) + '0');
					putchar((l % 10) + '0');
					if (n != 98 || m != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

