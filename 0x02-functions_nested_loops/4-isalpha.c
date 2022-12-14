#include "main.h"

/**
 * _isalpha - function that checks for lowercase and uppercase
 * @c: c is the char to check for.
 * code by Tohluh122
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
