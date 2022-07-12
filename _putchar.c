#include "main.h"

/**
 * _putchar - wites the character c to standout
 * @c: character
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

