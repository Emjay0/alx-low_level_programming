#include <unistd.h>

/**
*_putchar - writes char into stdout
*@c: the character to print
*
*Return: Returns 1 on success
*on error, it will return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
