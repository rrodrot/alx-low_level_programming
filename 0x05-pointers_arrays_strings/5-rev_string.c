#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + 1))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + 1) = *(str + j);
		j++;
		i--;
	}
}
