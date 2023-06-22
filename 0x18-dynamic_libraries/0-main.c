#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str1[] = "Hello, world!";
	char str2[] = "world";
	char *result;

	printf("Length of string: %d\n", _strlen(str1));

	result = _strpbrk(str1, str2);
	if (result != NULL)
		printf("Substring found at position: %ld\n", result - str1);
	else
		printf("Substring not found\n");

	return (EXIT_SUCCESS);
}
