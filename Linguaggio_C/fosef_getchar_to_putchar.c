/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   fosef_getchar_to_putchar.c                         :+:      :+:    :+:   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

/*COPy INPUT to OUTPUT: similar to ECHO
**read a character
**while the charater is different from newline
**	print the character just read
**	read a character
*/

#include <stdio.h>

void	fosef_getchar_to_putchar(void)
{
	char	c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}

int	main(void)
{
	fosef_getchar_to_putchar();
	return (0);
}
