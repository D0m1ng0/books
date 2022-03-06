/*
** lines counter
*/

#include <stdio.h>

void	fosef_lines_counter(void)
{
	int	c;
	int	lines_counter;

	lines_counter = 0;
	c = getchar();
	while (c != EOF)
	{
		if (c == '\n')
		{
			++lines_counter;
		}
		c = getchar();
	}
	printf("you have %d\n", lines_counter);
}

int	main(void)
{
	foset_lines_counter();
	return (0);
}
