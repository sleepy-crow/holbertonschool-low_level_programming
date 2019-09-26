#include "holberton.h"

/**
 *print_diagonal - prints a diagonal to make one larger
 *@n: variable that give us the diagonal
 *
 *
 */

void print_diagonal(int n)
{
	int a = 0;

	char b = '\\';

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < n)
		{
			int c = 0;
			while (c < a)
			{
				_putchar(' ');
				c++;
			}
			_putchar(b);
			_putchar('\n');
			a++;
		}
	}
}
