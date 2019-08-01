/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:42:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/01 17:04:51 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		smallest_pos(t_stack **head)
{
	int	pos;
	int	smallest;
	int	i;
	t_stack *temp;

	i = 0;
	pos = 0;
	temp = *head;
	smallest = temp->num;
	while (temp)
	{
		if (smallest > temp->num)
		{
			smallest = temp->num;
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

/*void	mediumrare(t_stack **a, t_stack **b)
{
	int		chunk;
	int		i;
	int		pos;
	int		size;

	i = 1;
	chunk = 5;
	size = stack_size(a);
	while (i < size - i)
	{
		chunk = chunk + 5;
		if (!(*a))
			break ;
		while ((*a))
		{
			if ((*a)->normed <= chunk && (*a)->normed > chunk - 5)
			{
				pos = smallest_pos(a);
				ra_rra_pos(a, pos);
				ft_pb(a, b, 1);
				i++;
			}
			*a = (*a)->next;
		}
	}
}*/

/*void	welldone(t_stack **a, t_stack **b)
{
	return ;
}

void	overcooked(t_stack **a, t_stack **b)
{
	return ;
}*/
