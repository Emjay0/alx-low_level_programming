#include "main.h"

/**
*_strspn - prints consec char os s1 in s2
*@s: the sourse string
*@accept: searc string
*
*Return: return new string
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s = accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
