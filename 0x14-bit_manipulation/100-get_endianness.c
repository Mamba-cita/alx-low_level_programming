#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if big endian & 1 if littleendian
 */
int get_endianness(void)
{
	unsigned int data = 1;
	char *b = (char *) &data;

	return (*b);
}
