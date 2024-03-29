#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int btw, check;
	unsigned int num, k;

	check = 1;
	btw = n ^ m;
	num = 0;

	for (k = 0; k < (sizeof(unsigned long int) * 8); k++)
	{
		if (check == (btw & check))
			num++;
		check <<= 1;
	}
	return (num);
}
