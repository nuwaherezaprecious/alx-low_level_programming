#include <unistd.h>

/**
 * _putchar  - writes the character c to the stdout
 * Return on Success 1
 *on error return 1 , errno is set appropriately
 */

int _putchar(char c)
{
	return (write (1, &c, 1));

}
