#include <stdio.h>
/**
*main - print if the number is postive, zero, or negative
*
*Description: using the main function
*This program prints the lowercase alphabet in reverse, followed by a new line
*Return: 0
*/
int main(void)
{
	char a;
	
	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
