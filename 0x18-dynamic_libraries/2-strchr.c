#include "main.h"

/*
* _strchr: locates specific char in a string
*@s: the string
*@c: the char to search
*Return: pointer to the first occurence
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
