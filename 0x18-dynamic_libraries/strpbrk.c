#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The string containing the characters to match.
 *
 * Return: A pointer to the first occurrence in s of any of the bytes in accept
 *         or NULL if no matching byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);

		s++;
	}

	return (NULL);
}
