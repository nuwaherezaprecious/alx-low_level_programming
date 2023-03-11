#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to the first string to be compared.
 * @s2: pointe to the second string to be compare.
 * Return: if str1 < str2, the negative difference of the first unmatched characters.
 * if str1 == str2, 0.
 * if str1 > str2, the postive difference of the unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
