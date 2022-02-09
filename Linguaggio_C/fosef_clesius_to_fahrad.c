/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   fosef_celsius_to_fahr.c                            :+:      :+:    :+:   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

/*
** prints a table Fahrenheit - Celsius with step + 20, untile 300 max fahrenheit 
*/

#include <stdio.h>

#define UPPER	300
#define LOWER	0
#define STEP	20	

void	fosef_celsius_to_fahr(void)
{
	float	fahrad;
	float	celsius;

	fahrad = LOWER;
	while (fahrad <= UPPER)
	{
		celsius = 5 * (fahrad - 32) / 9;
		printf("\tfahrad: %3.2f\tcelsius: %3.2f\n", fahrad, celsius);
		fahrad = fahrad + STEP;
	}
}

int	main(void)
{
	fosef_celsius_to_fahr();
	return (0);
}
