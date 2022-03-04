/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   fosef_charcters_counter.c                          :+:      :+:    :+:   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

/*
**counts the characters
*/

#include <unistd.h>
#include <stdio.h>

void	fosef_characters_counter(void)
{
	long	nbr_chars_long;
	double	nbr_chars_double;

	nbr_chars_long = 0;
	nbr_chars_double = 0;
	while (getchar() != EOF)
	{
		++nbr_chars_long;
		printf("the number in long is %ld\n", nbr_chars_long);
		++nbr_chars_double;
		printf("the number in double is %f\n", nbr_chars_double);
		printf("%%.0f erase the decimal part\n");
		printf("the number in double is %.0f\n", nbr_chars_double);
		getchar();
	}
}

int	main(void)
{
	fosef_characters_counter();
	return (0);
}
