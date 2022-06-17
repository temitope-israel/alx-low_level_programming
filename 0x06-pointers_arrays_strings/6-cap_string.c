#include "main.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @str: string to be capitalized
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i, c;
	int trigger;
	char syms[] = ",;.!?(){}\n\t\" ";

	for (i = 0, trigger = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (c = 0; syms[c] != '\0'; c++)
		{
			if (syms[c] == str[i])
				trigger = 1;
		}

		if (trigger)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				trigger = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				trigger = 0;
			else if (str[i] > 47 && str[i] < 58)
				trigger = 0;
		}
	}
	return (str);
}
