#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a: is the name of the string
 * a8: is the number of rows and columns
*/

void print_chessboard(char (*a)[8])
{
	int row = 0, col;

	while (row < 8)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		row++;
	}
	_putchar('\n');
}
