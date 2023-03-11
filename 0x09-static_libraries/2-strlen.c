#include <stdio.h>

/**
 * _strlen - Return the length of the string.
 * @s: string to get the length of
 * Return: the length of the str
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}


