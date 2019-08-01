/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigboy_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:08:44 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/01 13:06:31 by jhansen          ###   ########.fr       */
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

int		find_correct_size(t_stack **list)
{
}

void	bigboy(t_stack **a, t_stack **b, int chunk)
{
}