#include <stdlib.h>

void	error(void);
void	f_help(char *str);
void	parse_input(char *str, int *error_flag);

int	main(int argc, char *argv[])
{
	int	error_flag;

	error_flag = 0;
	if (argc == 2)
	{
		parse_input(argv[1], &error_flag);
	}
	else
		error();
	if (error_flag)
		error();
	return (0);
}
