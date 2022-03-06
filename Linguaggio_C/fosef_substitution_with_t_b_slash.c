/*
**substitutes tabs with \t, backspaces with\b and slashes with \\ 
*/
#include <stdio.h>

void	fosef_sp_t_nl_counter(void);

void	fosef_substitution_with_sp(void)
{
	int	c;

	c = getchar();
	while (c != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
			c = getchar();
			while (c == '\t')
			{
				c = getchar();
			}
		}
		if (c == '\b')
		{
			putchar('\\');
			putchar('b');
			c = getchar();
			while (c == '\b')
			{
				c = getchar();
			}
		}
		if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
			c = getchar();
			while (c == '\\')
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
