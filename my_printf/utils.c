/*
** EPITECH PROJECT, 2018
** libmy_printf
** File description:
** utils functions
*/

# include "my_printf.h"

pf *flag_functions(pf **arr)
{
	*arr = (pf*)malloc(sizeof(pf) * 17);

	if (*arr == NULL) {
		write(2, "Malloc failed. Aborded.\n", 24);
		return (NULL);
	}

	/*for (int i = 0; i < 17; i++)
		(*arr)[i] = set_function(i);*/

	(*arr)[0] = flag_d;
	(*arr)[1] = flag_d;
	(*arr)[2] = flag_s;
	(*arr)[3] = flag_S;
	(*arr)[4] = flag_c;
	(*arr)[5] = flag_p;
	(*arr)[6] = flag_x;
	(*arr)[7] = flag_X;
	(*arr)[8] = flag_o;
	(*arr)[9] = flag_b;
	(*arr)[10] = flag_m;
	(*arr)[11] = flag_u;
	(*arr)[12] = flag_n;
	(*arr)[13] = flag_percent;
	(*arr)[14] = flag_d;
	(*arr)[15] = flag_d;
	//(*arr)[16] = flag_l;

	return (*arr);
}

void configure(param_t *param, char *flags)
{
	pf *func = flag_functions(&func);

	while (*flags) {
		param->flag = *flags;
		param->fct = *func;
		flags++;
		func++;
		param++;
	}
}