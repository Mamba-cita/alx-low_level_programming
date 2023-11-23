#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int data, i = 0;
	unsigned long int original;

	for (data = 63; data >= 0; data--)
	{
		original = n >> data;

		if (original & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
