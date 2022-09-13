#include "main.h"
/**
*print_alphabet - function to print abc
*Description: programm datprints the alphabet, in lowercase followed by newline
*Return: 0
*/
void print_alphabet(void)
{
	char d;
	
	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}
	putchar('\n');
}
