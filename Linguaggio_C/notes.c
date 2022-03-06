/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   notes                                              :+:      :+:    :+:   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

################################################################################
#		GENERAL INTRODUCTION					       #
################################################################################
	

VARIABLE AND ARITMETIC EXPRESSION. SYMBOLIC CONSTANTS
	
	void	foset_clesius_to_fahr(void);

printf does not belongs to C language, but is defined in the stadard ANSI

	- %(3)(.)(2)(d)(f) prints a number in a field of 3 characters and with two decimanl numbers after the "."
	- %o prints the ottale
	- %x prints the hexadecimal
	- %s prints the string of characters
	- %% prints the same

#define	NAME	value, is the same then declare constants inside a function

INPUT/OUTPUT OF CHARACTERS

	void	fosef_getchar_to_putchar(void);

in <stdio.h>
EOF end of file, end of the text. its value is different from any one char.
getchar() when does not find input returns a particular value whish has not to be confused which any real character, the EOF!. so it must have an int ad argument not char so that can contains any value which getchar can return, even EOF.

the relational operator != is strongher than the assignment =

CHARACTERS COUNTER

	void	fosef_characters_counter(void);

long have at least 32 bit
int have 16 bit i.e. 32767 possible values.so an int counter can go easily overflow respect long
the conversion %f of the printf works both for double thant float.
%.0f erase the decimal part

LINES COUNTER
	void	fosef_lines_counter(void);

a character 'character', i.e. 'a', reppresents an integer value. it is the numerical value of the character int the set of characters of the machine. it is a type numeric constant -> it is a DIFFERENT WAY TO WRITE LITTLE INTEGERS. i.e. 'a' is a type character constant: in the ASCII code its numeric value is 65, the inner reppresentation is -a-
write -a- means 65.

'\n' reppresent the value of the character of newline, 10 in the ASCII.
it is a single character.
"\n" is a constant string which contains only one character.

	void	fosef_lines_counter(void);
	void	fosef_substitution_with_t_b_slash(void);
################################################################################
