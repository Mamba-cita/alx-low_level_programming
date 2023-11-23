#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
* @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int data;
	unsigned int current_state = 0;

	if (!b)
		return (0);

	for (data = 0; b[data]; data++)
	{
		if (b[data] < '0' || b[data] > '1')
			return (0);
		current_state = 2 * current_state + (b[data] - '0');
	}

	return (current_state);
}
