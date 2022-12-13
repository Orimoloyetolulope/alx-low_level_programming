#include <stdio.h>

/**
 * main - main block
 * Description: Prints all single digit numbers of base 10 starting from 0, f
 * followed by a new line
 * code by Tohluh122
 * Return: 0
 */

int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
