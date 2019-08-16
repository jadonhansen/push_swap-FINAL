/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:16:53 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/16 14:13:54 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		flag_value(int v, int c, int r)
{
	if (v == 1 && c == 2 && r == 3)
		return (7);
	else if (v == 1 && c == 2)
		return (4);
	else if (v == 1 && r == 3)
		return (5);
	else if (r == 3 && c == 2)
		return (6);
	else if (r == 0 && c == 0 && v == 1)
		return (1);
	else if (v == 0 && r == 0 && c == 2)
		return (2);
	else if (v == 0 && c == 0 && r == 3)
		return (3);
	return (0);
}

int		flag_check(char **arr)
{
	int	i;
	int	v;
	int	c;
	int	r;
	int	value;

	i = 1;
	v = 0;
	c = 0;
	r = 0;
	while (arr[i] != '\0')
	{
		if (ft_strequ(arr[i], "-v"))
			v = 1;
		if (ft_strequ(arr[i], "-c"))
			c = 2;
		if (ft_strequ(arr[i], "-r"))
			r = 3;
		i++;
	}
	value = flag_value(v, c, r);
	return (value);
}

int		string_input(char **str)
{
	int	i;
	int	j;
	int	check;

	check = 0;
	i = 0;
	j = 0;
	while (((ft_strequ(str[i], "-v") || ft_strequ(str[i], "-c")
		|| ft_strequ(str[i], "-r")) && str[i] != '\0'))
		i++;
	if (str[i])
	{
		while (str[i][j] != '\0')
		{
			if (str[i][j] == ' ')
			{
				check = 1;
				break ;
			}
			j++;
		}
	}
	else
		exit(1);
	return (check);
}

void	check_for_content(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			return ;
		i++;
	}
	exit(1);
}

char	**fill_from_string(char **arg)
{
	int		i;
	char	**arr;

	i = 0;
	while (((ft_strequ(arg[i], "-v") || ft_strequ(arg[i], "-c")
		|| ft_strequ(arg[i], "-r")) && arg[i] != '\0'))
		i++;
	check_for_content(arg[i]);
	arr = ft_strsplit(arg[i], ' ');
	return (arr);
}
