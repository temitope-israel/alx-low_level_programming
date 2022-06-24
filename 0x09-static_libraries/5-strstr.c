#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a
 * substring
 *
 * @haystack: string to be examined.
 *
 * @needle: sub-string to be searched
 * in haystack string.
 *
 * Return: returns a pointer that points
 * to the first character of the found
 * needle in haystack otherwise a
 * null pointer if needle is not present
 * in haystack. If needle points to an
 * empty string, haystack is returned.
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
