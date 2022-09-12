#include <stdio.h>
/**
*main - print if the number is postive, zero, or negative
*
*Description: using the main function
*this program prints  the alphabet in lowercase, and then in uppercase
*Return: 0
*/
int main(void)
{
	char mj;

	for (mj = 'a' ; mj <= 'z' ; mj++)
	{
		putchar(mj);
	}
	for (mj = 'A' ; mj <= 'Z' ; mj++)
	{
		putchar(mj);
	}
	putchar('\n');
	return (0);
}
