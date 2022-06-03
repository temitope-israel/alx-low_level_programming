#include <stdio.h>

/**
 *  * main - Entry Point
 *   ******Print the size of various types
 *   *************on the computer it is compiled and run on.
 *    ************
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int m;
	long long int n;
	float f;

	printf("Size Of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size Of an int is: %u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size Of a long int is: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size Of a long long int is: %llu byte(s)\n", (unsigned long long)sizeof(n));
	printf("Size Of a float is: %f byte(s)\n", (float)sizeof(f));

	return (0);
}
