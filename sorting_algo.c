/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:42:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/02 12:23:30 by jhansen          ###   ########.fr       */
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

void	mediumrare(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		chunk;
	int		pos;
	int		size;
	int		i;

	i = 0;
	chunk = 5;
	temp = *a;
	size = stack_size(a);
	pos = smallest_pos(a);
	while (temp && *a)
	{
		if (i == pos)
		{
			ft_putnbr(chunk); //
			ft_putchar(' ');
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putnbr(pos);
			ft_putchar(' '); //
			if (temp->normed <= chunk)
			{
				ra_rra_pos(a, pos);
				ft_pb(a, b, 1);
				pos = smallest_pos(a);
				i = 0;
				temp = *a;
			}
			else
				chunk = chunk + 5;
		}
		else
		{
			temp = temp->next;
			i++;
		}
		if (pos == 0)
			break ;
	}
}

/*void	welldone(t_stack **a, t_stack **b)
{
	return ;
}

void	overcooked(t_stack **a, t_stack **b)
{
	return ;
}*/
