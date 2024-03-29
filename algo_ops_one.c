/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_ops_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 11:02:23 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/15 10:58:01 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		smallest_pos(t_stack **head)
{
	int		pos;
	int		smallest;
	int		i;
	t_stack	*temp;

	i = 0;
	pos = 0;
	temp = *head;
	smallest = temp->normed;
	while (temp)
	{
		if (smallest > temp->normed)
		{
			smallest = temp->normed;
			pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (pos);
}

int		biggest_pos(t_stack **head)
{
	int		pos;
	int		biggest;
	int		i;
	t_stack	*temp;

	i = 0;
	pos = 0;
	temp = *head;
	biggest = temp->normed;
	while (temp)
	{
		if (biggest < temp->normed)
		{
			biggest = temp->normed;
			pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (pos);
}

void	ra_rra_pos(t_stack **a, int pos)
{
	int	size;

	size = stack_size(a);
	if (pos > size / 2)
	{
		pos = size - pos;
		while (pos != 0)
		{
			ft_rra(a, 1);
			pos--;
		}
	}
	else if (pos <= size / 2)
	{
		while (pos != 0)
		{
			ft_ra(a, 1);
			pos--;
		}
	}
}

void	rb_rrb_pos(t_stack **b, int pos)
{
	int	size;

	size = stack_size(b);
	if (pos > size / 2)
	{
		pos = size - pos;
		while (pos != 0)
		{
			ft_rrb(b, 1);
			pos--;
		}
	}
	else if (pos <= size / 2)
	{
		while (pos != 0)
		{
			ft_rb(b, 1);
			pos--;
		}
	}
}

void	pushback_all(t_stack **a, t_stack **b)
{
	int	pos;
	int	i;

	i = stack_size(b);
	pos = 0;
	while (*b && i)
	{
		pos = biggest_pos(b);
		rb_rrb_pos(b, pos);
		ft_pa(a, b, 1);
		i--;
	}
}
