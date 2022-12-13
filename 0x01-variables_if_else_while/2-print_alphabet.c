#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Program that prints the alphabet in lowercase
 * code by Tohluh122
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
