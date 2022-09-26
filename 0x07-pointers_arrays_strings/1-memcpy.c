#include "main.h"

/*
*@_memcpy - fills memory with a new buffer
*@dest: the source string
*@src: string that will be used to fill
*@n: Lenght of the buffer
*Return: returns new string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
