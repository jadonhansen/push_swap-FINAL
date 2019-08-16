/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:06:33 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/16 12:07:40 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	klein(t_stack **a)
{
	t_stack *temp;

	temp = *a;
	if (temp->num > temp->next->num)
		ft_sa(a, 1);
}

void	tiny(t_stack **a)
{
	int		one;
	int		two;
	int		three;
	t_stack	*temp;

	temp = *a;
	one = temp->num;
	two = temp->next->num;
	three = temp->next->next->num;
	if (one > two && two < three && three > one)
		ft_sa(a, 1);
	else if (one > two && two > three && three < one)
	{
		ft_sa(a, 1);
		ft_rra(a, 1);
	}
	else if (one > two && two < three && three < one)
		ft_ra(a, 1);
	else if (one < two && two > three && three > one)
	{
		ft_sa(a, 1);
		ft_ra(a, 1);
	}
	else if (one < two && two > three && three < one)
		ft_rra(a, 1);
}

void	small(t_stack **a, t_stack **b)
{
	int	size;
	int	pos;
	int	i;

	i = 0;
	size = stack_size(a);
	while (i < (size - 3))
	{
		pos = smallest_pos(a);
		ra_rra_pos(a, pos);
		ft_pb(a, b, 1);
		i++;
	}
	tiny(a);
	while (i > 0)
	{
		ft_pa(a, b, 1);
		i--;
	}
}
