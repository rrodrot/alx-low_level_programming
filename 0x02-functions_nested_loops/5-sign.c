#include "main.h"

/**
 * print_sign - Code entry
 *
 * Description: A function that checks if a number is a
 * positive, negative or zero integer
 *
 * @n: The nteger value it receives
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}

