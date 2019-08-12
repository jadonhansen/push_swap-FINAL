/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:16:53 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/12 17:53:48 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		flag_check(char **arr)
{
	int	i;
	int	v;
	int	c;

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
	return (0);
}

int		string_input(char **str)
{
	int	i;
	int	j;
	int	check;

	check = 0;
	i = 0;
	j = 0;
	while (((ft_strequ(str[i], "-v") || ft_strequ(str[i], "-c"))
		&& str[i] != '\0'))
		i++;
	while (str[i][j] != '\0')
	{
		if (str[i][j] == ' ')
		{
			check = 1;
			break ;
		}
		j++;
	}
	return (check);
}

char	**fill_from_string(char **arg)
{
	int		i;
	char	**arr;

	i = 0;
	while (((ft_strequ(arg[i], "-v") || ft_strequ(arg[i], "-c"))
		&& arg[i] != '\0'))
		i++;
	arr = ft_strsplit(arg[i], ' ');
	return (arr);
}
