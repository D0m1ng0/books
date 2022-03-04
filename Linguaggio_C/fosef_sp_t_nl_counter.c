/*
** counts spaces, tabs and newlines
*/
#include <stdio.h>

void	foset_sp_t_nl(void)
{
	int	sp_t_nl_counter;
	int	c;

	sp_t_nl_counter = 0;
	c = getchar();
	while (c != EOF)
	{
		if (c == ' ')
			++sp_t_nl_counter;
		if (c == '\t')
			++sp_t_nl_counter;
		if (c == '\n')
			++sp_t_nl_counter;
		c = getchar();
	}
	printf("spaces, tabs, and new lines are %d", sp_t_nl_counter);
}

int	main(void)
{
	foset_sp_t_nl();
	return (0);
}
