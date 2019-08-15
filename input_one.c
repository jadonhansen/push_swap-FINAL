/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:44:55 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/15 13:09:04 by jhansen          ###   ########.fr       */
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

void	duplicate_check(char **arg, int flag)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (((ft_strequ(arg[i], "-v") || ft_strequ(arg[i], "-c")
		|| ft_strequ(arg[i], "-r")) && arg[i] != '\0'))
		i++;
	while (arg[i] != '\0')
	{
		k = i + 1;
		while (arg[k] != '\0')
		{
			if (ft_atoi(arg[i]) == ft_atoi(arg[k]))
				ft_error(flag);
			k++;
		}
		i++;
	}
}

void	check_errors(char **arg, int flag)
{
	int		i;
	int		j;

	i = 0;
	while (((ft_strequ(arg[i], "-v") || ft_strequ(arg[i], "-c")
		|| ft_strequ(arg[i], "-r")) && arg[i] != '\0'))
		i++;
	j = i;
	while (arg[i] != '\0')
	{
		if (ft_str_is_numeric(arg[i]) == 0)
			ft_error(flag);
		i++;
	}
	while (arg[j] != '\0')
	{
		if (ft_atol(arg[j]) > MAX || ft_atol(arg[j]) < MIN)
			ft_error(flag);
		j++;
	}
	duplicate_check(arg, flag);
}

void	do_op(int flag, char *command, t_stack **stacka, t_stack **stackb)
{
	if (ft_strequ(command, "sa"))
		ft_sa(stacka, flag);
	else if (ft_strequ(command, "sb"))
		ft_sb(stackb, flag);
	else if (ft_strequ(command, "ss"))
		ft_ss(stacka, stackb, flag);
	else if (ft_strequ(command, "pa"))
		ft_pa(stacka, stackb, flag);
	else if (ft_strequ(command, "pb"))
		ft_pb(stacka, stackb, flag);
	else if (ft_strequ(command, "ra"))
		ft_ra(stacka, flag);
	else if (ft_strequ(command, "rb"))
		ft_rb(stackb, flag);
	else if (ft_strequ(command, "rr"))
		ft_rr(stacka, stackb, flag);
	else if (ft_strequ(command, "rra"))
		ft_rra(stacka, flag);
	else if (ft_strequ(command, "rrb"))
		ft_rrb(stackb, flag);
	else if (ft_strequ(command, "rrr"))
		ft_rrr(stacka, stackb, flag);
	else
		ft_error(flag);
}
