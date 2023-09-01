#include "main.h"

/**
 * get_bit - get a value of a bit at given index
 * @n: the num of unsigned
 * @index: index starting from 0 of the bit expected
 *
 * Return: The converted value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
