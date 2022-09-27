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
	unsigned int sum = 0;
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
		{
			sum++;
			s++;
			ptr = accept;
		}
		else
			ptr++;
		if (*ptr == 0)
		return (sum);
	}
	return (sum);
}
