#include "main.h"
/**
* clear_bit - sets the value of a bit
* @index: index of the bit to clear
* @n: pointer to the number to change
* Return: -1 unsuccess & 1 sucess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
