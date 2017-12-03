/*
** EPITECH PROJECT, 2017
** my_strtok
** File description:
** cut fonction with delimiter
*/

# include <stdbool.h>

static bool is_into_string(char c, char *str)
{
	if (!c)
		return (true);

	for (int i = 0; str[i]; i++) {
		if (str[i] == c)
			return (true);
	}

	return (false);
}

static int count_parts(char *str, char *delimiter)
{
	int count = 0;

	for (int i = 0; str[i]; i++) {
		if (!is_into_string(str[i], delimiter) && is_into_string(str[i + 1], delimiter))
			count++;
	}

	return (count);
}

char **my_strtok(char *str, char *delimiter)
{
	int i = 0, j = 0, k = 0;
	char **ret = my_malloc(sizeof(*ret) * (count_parts(str, delimiter) + 1));

	for (int i = 0; str[i]; i++) {
		if (!is_into_string(str[i], delimiter))
			k++;

		if (!is_into_string(str[i], delimiter) && is_into_string(str[i + 1], delimiter)) {
			ret[j] = my_malloc(sizeof(**ret) * (k + 1));
			ret[j][0] = 0;
			ret[j] = my_strncat(ret[j], &str[i - (k - 1)], k);
			k = 0;
			j++;
		}
	}

	return (ret);
}