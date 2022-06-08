#include <unistd.h>

/**
 * _putchar - functuon that writes
 * to stdout
 *
 *@c: printable character
 *
 * Return: Always 1 (Success)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
