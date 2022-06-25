#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies
 * two numbers.
 *
 * @argc: The number of command
 * line arguments
 *
 * @argv: Array containing the
 * program command line arguments.
 *
 * Return: return 0 on success and
 * 1 on error.
 *
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
