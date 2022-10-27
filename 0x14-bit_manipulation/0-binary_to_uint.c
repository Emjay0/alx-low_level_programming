#include "main.h"

/**
*binary_to_uint - Converts a binary number to an unsigned int.
*@b: A pointer to a string of 0 and 1 chars.
*
*Return: If b is NULL or contains chars not 0 or 1 - 0.
*Otherwise - the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned long int printbit = 1ul << 63;
	char c = '0';

	while (!(printbit & n) && printbit != 0)
		printbit = printbit >> 1;
	if (printbit == 0)
		write(1, &c, 1);
	while (printbit)
	{
		if (printbit & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		printbit = printbit >> 1;
	}
}
