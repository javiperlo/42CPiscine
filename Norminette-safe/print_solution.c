#include <unistd.h>

int	ft_check(int **board, int pos, int **ref, int size);

int	print_board(int **board, int size, int **conditions)
{
	int	col;
	int	row;

	if (ft_check(board, (size * size) - 1, conditions, size) == 2)
	{
			col = 0;
		while (col < size)
		{
			row = 0;
			while (row < size)
			{
				write(1, &(char){board[col][row] + '0'}, 1);
				if (((row + 1) % size) == 0)
					write(1, "\n", 1);
				else
					write(1, " ", 1);
				row++;
			}
			col++;
		}
		return (1);
	}
	return (0);
}
