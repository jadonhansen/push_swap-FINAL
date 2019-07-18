/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulations_two.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:38:00 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/18 13:54:19 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stacka)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*stacka) || (stack_size(stacka) < 2))
		return ;
	first = *stacka;
	last = *stacka;
	while (last->next != NULL)
		last = last->next;
	*stacka = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
}

void	ft_rb(t_stack **stackb)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*stackb) || (stack_size(stackb) < 2))
		return ;
	first = *stackb;
	last = *stackb;
	while (last->next != NULL)
		last = last->next;
	*stackb = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
}

void	ft_rr(t_stack **stacka, t_stack **stackb)
{
	ft_ra(stacka);
	ft_rb(stackb);
}

void	ft_rra(t_stack **stacka)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!(*stacka) || (stack_size(stacka) < 2))
		return ;
	last = *stacka;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->prev = NULL;
	last->next = *stacka;
	*stacka = last;
}

void	ft_rrb(t_stack **stackb)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!(*stackb) || (stack_size(stackb) < 2))
		return ;
	last = *stackb;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->prev = NULL;
	last->next = *stackb;
	*stackb = last;
}
