/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_ops_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 10:57:53 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/15 11:32:38 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		begin_pos(t_stack **node, int chunk)
{
	t_stack	*begin;
	int		pos_begin;
	int		i;

	i = 0;
	begin = *node;
	pos_begin = 0;
	while (begin)
	{
		if (begin->normed <= chunk)
		{
			pos_begin = i;
			break ;
		}
		begin = begin->next;
		i++;
	}
	return (pos_begin);
}

int		compare_smallest_pos(t_stack **node, int chunk)
{
	t_stack	*end;
	int		pos_begin;
	int		pos_end;
	int		j;

	j = stack_size(node);
	pos_end = 0;
	end = *node;
	while (end->next)
		end = end->next;
	pos_begin = begin_pos(node, chunk);
	while (end)
	{
		if (end->normed <= chunk)
		{
			pos_end = j - 1;
			break ;
		}
		end = end->prev;
		j--;
	}
	if (pos_begin <= (stack_size(node) - pos_end))
		return (pos_begin);
	return (pos_end);
}
