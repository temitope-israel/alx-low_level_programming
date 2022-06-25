#include "main.h"
#include <stdio.h>

/**
 * main - program entry point.
 *
 * @argc: The number of command
 * line arguments
 *
 * @argv: The number of command
 * line arguments
 *
 * Return: return 0.
 *
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
