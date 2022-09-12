#include <stdio.h>
/**
*main - print if the number is postive, zero, or negative
*
*Description: using the main function
*This program prints all single digit numbers of base 10 starting from 0
*Return: 0
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
