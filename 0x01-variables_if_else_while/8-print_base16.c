#include <stdio.h>
/**
*main - print if the number is postive, zero, or negative
*
*Description: using the main function
*This program prints all the numbers of base 16 in lowercase
*Return: 0
*/
int main(void)
{
	char z;
	
	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
