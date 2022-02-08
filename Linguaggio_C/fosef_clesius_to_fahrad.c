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

int	main(void)
{
	float	fahrad;
	float	celsius;
	int	lower;
	int	upper;
	int	step;

	lower = 0;
	upper = 300;
	step = 20;
	fahrad = lower;
	while (fahrad <= 300)
	{
		celsius = 5 * (fahrad - 32) / 9;
		printf("\tfahrad: %f\tcelsius: %f\n", fahrad, celsius);
		fahrad = fahrad + step++;
	}
	return (0);
}
