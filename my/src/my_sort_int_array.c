/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** Sort int array
*/

# include "my.h"

void my_sort_int_array(int *array, int size)
{
	int i;
	int pass = 0;
	while (pass < size) {
		i = 0;
		while (i < size - 1) {
			if (array[i] > array[i + 1])
				my_swap(&array[i], &array[i + 1]);
			i++;
		}
		pass++;
	}
}
