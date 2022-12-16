#include "main.h"

/**
*_memset - fills the first byte of a memory with constant byte
*@s:the address to memory block
*@b: the character to be used
*@n: the num of bytes to be used
*
*Return: returns pointer to mem block
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
