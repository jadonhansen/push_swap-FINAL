/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulations_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:37:41 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/18 14:15:00 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **stacka)
{
	int temp;
	int	hold;

	hold = 0;
	if (!(*stacka) || (stack_size(stacka) < 2))
		return ;
	temp = (*stacka)->num;
	if ((*stacka)->next != NULL)
	{
		hold = (*stacka)->next->num;
		(*stacka)->num = hold;
		(*stacka)->next->num = temp;
	}
}

void	ft_sb(t_stack **stackb)
{
	int temp;
	int hold;

	hold = 0;
	if (!(*stackb) || (stack_size(stackb) < 2))
		return ;
	temp = (*stackb)->num;
	if ((*stackb)->next != NULL)
	{
		hold = (*stackb)->next->num;
		(*stackb)->num = hold;
		(*stackb)->next->num = temp;
	}
}

void	ft_ss(t_stack **stacka, t_stack **stackb)
{
	if (stacka && stackb)
	{
		ft_sa(stacka);
		ft_sb(stackb);
	}
}

void	ft_pa(t_stack **stacka, t_stack **stackb)
{
	t_stack	*temp;

	if (!*stackb)
		return ;
	if (stackb != NULL)
	{
		temp = *stackb;
		if ((*stackb)->next)
			*stackb = (*stackb)->next;
		else
			*stackb = NULL;
		if (*stackb)
			(*stackb)->prev = NULL;
		if (stacka == NULL)
			add_head_node(stacka, temp);
		else if (stacka != NULL)
			add_head_node(stacka, temp);
	}
}

void	ft_pb(t_stack **stacka, t_stack **stackb)
{
	t_stack *temp;

	if (!*stacka)
		return ;
	if (stacka != NULL)
	{
		temp = *stacka;
		if ((*stacka)->next)
			*stacka = (*stacka)->next;
		else
			*stacka = NULL;
		if (*stacka)
			(*stacka)->prev = NULL;
		if (stackb == NULL)
			add_head_node(stackb, temp);
		else if (stackb != NULL)
			add_head_node(stackb, temp);
	}
}
