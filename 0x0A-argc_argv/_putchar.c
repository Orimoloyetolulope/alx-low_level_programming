#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * ON error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (writ(1, &c, 1));
}
