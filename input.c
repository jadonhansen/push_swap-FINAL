/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:44:55 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/01 17:52:49 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize(t_stack **stacka)
{
	t_stack	*outer;
	t_stack	*inner;
	int		norm;

	outer = *stacka;
	while (outer)
	{
		norm = stack_size(stacka);
		outer->normed = norm;
		inner = *stacka;
		while (inner)
		{
			if (outer->num < inner->num)
				outer->normed--;
			inner = inner->next;
		}
		outer = outer->next;
	}
}

void	duplicate_check(char **arg)
{
	int	i;
	int	k;

	i = 1;
	k = 1;
	while (arg[i] != '\0')
	{
		k = i + 1;
		while (arg[k] != '\0')
		{
			if (ft_atoi(arg[i]) == ft_atoi(arg[k]))
			{
				write(1, "Error\n", 6);
				exit (1);
			}
			k++;
		}
		i++;
	}
}

void	check_errors(char **arg)
{
	int		i;

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
	i = 1;
	while (arg[i] != '\0')
	{
		if (ft_atoi(arg[i]) > MAX || ft_atoi(arg[i]) < MIN)   //will atoi work with converting a number bigger than MAX & MIN.
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	duplicate_check(arg);
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
