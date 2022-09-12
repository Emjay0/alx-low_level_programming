#include <stdio.h>
/**
*main - print if the number is postive, zero, or negative
*
*Description: using the main function
*This program prints  the alphabet in lowercase, followed by a new line.
*Return: 0
*/
int main(void)
{
	char mj;

	for (mj = 'a' ; mj <= 'z' ; mj++)
	{
		if (mj != 'e' && mj != 'q')
		{
			putchar(mj);
		}
	}
	putchar('\n');
	return (0);
}
