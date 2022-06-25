#include "main.h"
#include <stdio.h>

/**
 * main - program entry point.
 *
 * @argc: The number of command
 * line arguments
 *
 * @argv: Array containing the
 * program command line arguments.
 *
 * Return: return 0.
 *
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
