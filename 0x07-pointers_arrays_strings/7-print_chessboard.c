#include "main.h"

/**
 * print_chessboard - a function that prints a chess board
 *
 * @a: pointer to sting
 * Return: Always (0)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i % 8 == 0 && i != 0)
				_putchar('\n');
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
