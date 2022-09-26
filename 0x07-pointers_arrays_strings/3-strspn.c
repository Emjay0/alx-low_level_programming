#include "main.h"

/**
*_strspn - prints consec char os s1 in s2
*@s: the sourse string
*@accept: searc string
*
*Return: return new string
*/

unsigned int _strspn(char *s, char *accept);
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++;)
	{
		for (i = 0; *(accept + i); i++;)
		{
			if (*(s + j) == *(accept + i)
			break;
		}
	if (*(accept + i) == '\0')
	break;
	}
	return (j);
}
