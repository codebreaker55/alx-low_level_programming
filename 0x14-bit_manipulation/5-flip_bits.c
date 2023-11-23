#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 *	to flip to get from one number to another
 *
 * @n: is the first integer number
 * @m:is the second integer number
 *
 * Return: the number of bits you would need to flip a number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_num = 0;
	unsigned long int xor_valu = n ^ m;

	while (xor_valu)
	{
		if (xor_valu & 1ul)
		{
			bits_num++;
		}
		xor_valu = xor_valu >> 1;
	}
	return (bits_num);
}
