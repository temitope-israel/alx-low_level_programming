#include <stdio.h>
#include <string.h>
/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{

	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		/**putchar((x) + '0');*/
		for (y = x; y <= 9; y++)
		{
			for (z = y; z <= 9; z++)
			{
				if (y != x && z != y)
				{
					putchar((x) + '0');
					putchar((y) + '0');
					putchar((z) + '0');
					if (x < 7)
					{
						putchar(',');
						putchar(' ');
						}
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
