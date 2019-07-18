/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:44:55 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/18 15:20:13 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*array_fill(int len, char **arg)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof(int) * len);
	if (arr)
	{
		while (arg[i] != '\0')
		{
			arr[i] = ft_atoi(arg[i]);
			i++;
		}
	}
	arr[i] = '\0';
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
			j = 0;
			while (array[j] != '\0')
			{
				if (array[j] == num)
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

	i = 0;
	temp = array_fill(len, arg);
	if (temp)
	{
		while (temp[i] != '\0')
		{
			if (i > MAX || i < MIN)
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			i++;
		}
		duplicate_checker(temp);
	}
}

void	do_op(char *command, t_stack **stacka, t_stack **stackb)
{
	if (ft_strequ(command, "sa"))
		ft_sa(stacka);
	else if (ft_strequ(command, "sb"))
		ft_sb(stackb);
	else if (ft_strequ(command, "ss"))
		ft_ss(stacka, stackb);
	else if (ft_strequ(command, "pa"))
		ft_pa(stacka, stackb);
	else if (ft_strequ(command, "pb"))
		ft_pb(stacka, stackb);
	else if (ft_strequ(command, "ra"))
		ft_ra(stacka);
	else if (ft_strequ(command, "rb"))
		ft_rb(stackb);
	else if (ft_strequ(command, "rr"))
		ft_rr(stacka, stackb);
	else if (ft_strequ(command, "rra"))
		ft_rra(stacka);
	else if (ft_strequ(command, "rrb"))
		ft_rrb(stackb);
	else if (ft_strequ(command, "rrr"))
		ft_rrr(stacka, stackb);
	else
		ft_putstr("Wrong input commmand. Try again!\n");
}
