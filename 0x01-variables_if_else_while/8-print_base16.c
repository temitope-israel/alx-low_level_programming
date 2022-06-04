#include <stdio.h>
#include <string.h>
/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{
		int num = 0;
		int letters;

		while (num < 10)
		{
			putchar(num + '0');
			num++;
		}
		for (letters = 'a'; letters <= 'f'; letters++)
			putchar(letters);
		putchar('\n');
		return (0);
}
