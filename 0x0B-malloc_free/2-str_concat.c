#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * str_concat - entry point
 * str_concat: concatenat two strings of any size
 * @s1: First string to concatenate
 * @s2: second string to concatenate
 *
 * Return : the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	d = a + b;
	s = malloc((sizeof(char) * d) + 1);

	if (s == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			s[c] = s1[c];

		if (c >= a)
		{
			s[c] = s[b];
		}

		c++;
	}

	s[c] = '\0';
	return (s);
}
