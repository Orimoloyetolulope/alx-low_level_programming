#include "main.h"

/**
 * _islower - check for lowercase character.
 * @c: is the char checked for.
 * code by Tohluh122
 * Return: 1 if char is lowercasem, otherwise 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
