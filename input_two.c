/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:16:53 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/06 13:00:57 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		flag_check(char **arr)
{
	int	i;
	int	v;
	int	c;
	int	count;

	count = 0;
	v = 0;
	c = 0;
	i = 1;
	while (arr[i] != '\0')
	{
		if (ft_strequ(arr[i], "-v"))
			v = 1;
		if (ft_strequ(arr[i], "-c"))
			c = 2;
		i++;
	}
	if (v == 1 && c == 2)
		return (3);
	else if (v == 1 && c == 0)
		return (1);
	else if (v == 0 && c == 2)
		return (2);
	return (count);
}

int		string_input(char *str)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			check = 1;
			break ;
		}
		i++;
	}
	return (check);
}

char	**fill_from_string(char **arg) //need to do
{
	int		i;
	int		flagcount;
	char	**arr;

	flagcount = 0;
	i = 1;
	while (ft_strequ(arg[i], "-v") || ft_strequ(arg[i], "-c"))
	{
		i++;
		flagcount++;
	}
	return (arr);
}
