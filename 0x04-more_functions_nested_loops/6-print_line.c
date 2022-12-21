#include "main.h"

/**
 * print_line - printing the function that draws line in the terminal.
 * @n: number of times
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
