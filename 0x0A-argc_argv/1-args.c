#include "main.h"
#include <stdio.h>

/**
 * main - Entry poinnt
 * main: Print the number of arguments
 * @argc: Argument count
 * @argv: argument vector
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
