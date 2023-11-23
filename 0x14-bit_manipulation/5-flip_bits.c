#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int data, num = 0;
	unsigned long int initial;
	unsigned long int diff = n ^ m;

	for (data = 63; data >= 0; data--)
	{
		initial = diff >> data;
		if (initial & 1)
			num++;
	}

	return (num);
}
