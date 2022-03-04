/*
** substitutes a string with spaces with a single space
*/
#include <stdio.h>

void	fosef_sp_t_nl_counter(void);

void	fosef_substitution_with_sp(void)
{
	int	c;

	c = getchar();
	while (c != EOF)
	{
		if (c == ' ')
		{
			putchar(c);
			c = getchar();
			while (c == ' ')
			{
				c = getchar();
			}
		}
		putchar(c);
		c = getchar();
	}
}

int	main(void)
{
	fosef_substitution_with_sp();
	return (0);
}
