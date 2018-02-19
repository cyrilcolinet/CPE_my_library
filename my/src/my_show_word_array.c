/*
** EPITECH PROJECT, 2017
** my_show_word_array
** File description:
** Display array content
*/

# include "my.h"

void my_show_word_array(char * const *tab)
{
	int i = 0;

	while (tab[i]) {
		if (my_str_isalpha(tab[i]) && tab[i][0]) {
			my_putstr(tab[i]);
			my_putchar('\n');
			i++;
		}
	}
}
