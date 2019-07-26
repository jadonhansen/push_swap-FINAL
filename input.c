/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:44:55 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/26 14:17:51 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*array_fill(int len, char **arg)
{
	int	i;
	int	j;
	int	*arr;

	i = 1;
	j = 0;
	arr = (int *)malloc(sizeof(int) * len);
	if (arr)
	{
		while (i < len)
		{
			arr[j++] = ft_atoi(arg[i]);
			i++;
		}
	}
	arr[j] = '\0';
	return (arr);
}

void	duplicate_checker(int *array)
{
	int	i;
	int	j;
	int	num;

	num = 0;
	i = 0;
	j = 0;
	if (array)
	{
		while (array[i] != '\0')
		{
			num = array[i];
			j = 1;
			while (array[j + i] != '\0')
			{
				if (array[j + i] == num)
				{
					write(1, "Error\n", 6);
					exit(1);
				}
				j++;
			}
			i++;
		}
	}
}

void	check_errors(int len, char **arg)
{
	int		i;
	int		*temp;

	i = 1;
	while (arg[i] != '\0')
	{
		if (ft_str_is_numeric(arg[i]) == 0)
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	i = 0;
	temp = array_fill(len, arg);
	if (temp)
	{
		while (temp[i] != '\0')
		{
			if (temp[i] > MAX || temp[i] < MIN)	
			{		
				write(1, "Error\n", 6);
				exit(1);
			}
			i++;
		}
	}
	duplicate_checker(temp);
}
void	do_op(char *command, t_stack **stacka, t_stack **stackb)
{
	if (ft_strequ(command, "sa"))
		ft_sa(stacka, 0);
	else if (ft_strequ(command, "sb"))
		ft_sb(stackb, 0);
	else if (ft_strequ(command, "ss"))
		ft_ss(stacka, stackb, 0);
	else if (ft_strequ(command, "pa"))
		ft_pa(stacka, stackb, 0);
	else if (ft_strequ(command, "pb"))
		ft_pb(stacka, stackb, 0);
	else if (ft_strequ(command, "ra"))
		ft_ra(stacka, 0);
	else if (ft_strequ(command, "rb"))
		ft_rb(stackb, 0);
	else if (ft_strequ(command, "rr"))
		ft_rr(stacka, stackb, 0);
	else if (ft_strequ(command, "rra"))
		ft_rra(stacka, 0);
	else if (ft_strequ(command, "rrb"))
		ft_rrb(stackb, 0);
	else if (ft_strequ(command, "rrr"))
		ft_rrr(stacka, stackb, 0);
	else
		ft_putstr("Wrong input commmand. Try again!\n");
}
