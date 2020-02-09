/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hana <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 19:28:19 by hana              #+#    #+#             */
/*   Updated: 2020/02/09 10:59:54 by hana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"
#include <unistd.h>

void	key_to_value_print(t_dict *dict, int pw)
{
	int i;
	int j;

	if (pw == 987)
		write(1, "Error\n", 6);
	else
	{
		while (dict[pw].value[i] != 0)
		{
			write(1, &dict[pw].value[i], 1);
			i++;
		}
	}
}

int		ft_strcmp(t_dict *dict, char *converted_nbr)
{
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	while (dict[i].key != 0)
	{
		j = 0;
		while (dict[i].key[j] != converted_nbr[j] 
				|| dict[i].key[j] == 0 || converted_nbr[j] == 0)
		{
			j++;
		}
		i++;
	}
	if (dict[i].key[j] == 0 && converted_nbr[j] == 0)
		flag = 1;
	if (flag == 1)
		return (i);
	else
		return (987);
}

void	find_key(t_dict *dict, char **converted_nbr)
{
	int		i;

	i = 0;
	while (converted_nbr[i] != 0)
	{
		key_to_value_print(dict, ft_strcmp(dict, converted_nbr[i]));
		if (converted_nbr[i + 1] != 0)
			write(1, " ", 1);
		i++;
	}
}

int		main(void)
{
	t_dict	*dict;

	find_key(dict_to_struct(dict), mk_arr());	
}
