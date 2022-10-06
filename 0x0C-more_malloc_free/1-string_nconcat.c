#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - this concat two strings
*@s1: first string to be copied
*@s2: the second string to be copied
*@n: number of s2 (bytes) to be copied
*
*Return: to allocated places in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i], i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j], j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k] = s2[k];
	s[i + j] = '\0';
	return (s);
}
