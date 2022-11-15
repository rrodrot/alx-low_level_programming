#include "main.h"

/**
 * _abs - Code entry point
 *
 * @number: number is positive or negative integer
 *
 * Description: A function that prints the absolute value of an integer
 *
 * Return: int
 */

int _abs(int number)
{
	int result;

	if (number < 0)
	{
		result = number * -1;
		return (result);
	}
	else
	{
		result = number;
		return (result);
	}
}

