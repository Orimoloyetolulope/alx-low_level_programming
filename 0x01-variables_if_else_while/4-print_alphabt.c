#include <stdio.h>
/**
 * main - main block
 *Description: Prints alphabet in lowercase
 *code by Tohluh122
 *Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
