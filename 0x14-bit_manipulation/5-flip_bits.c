#include "main.h"

/**
*flip_bits - gets the num of bits to flip to get from n to m
*@n: initial num
*@m: final num
*
*Return: the numb of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int num = 0;

	while (flipped)
	{
		if (flipped & 1)
			num++;
		flipped >>= 1;
	}
	return (num);
}
