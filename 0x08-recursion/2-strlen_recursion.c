#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 *
 * @s: the string whose length is going to be returned
 *
 * Return: An integer length of @s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
