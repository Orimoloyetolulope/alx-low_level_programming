#include <stdio.h>

/**
 * main - main block
 * Description: Prints the lowercase alphabet in reverse.
 * code by Tohluh122
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
