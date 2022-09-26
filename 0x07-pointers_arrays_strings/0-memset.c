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
	while (n)
	{
		s[n - 1] = b;
		n--
	}
	return (s);
}
