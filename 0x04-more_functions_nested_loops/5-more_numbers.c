#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints 10 times thenumbers from 0 to 14.
 * No parameter
 *
 * Return: Always nothing.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if ((i / 10) > 0)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
