/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_manip_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:33:01 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/03 12:59:28 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list *stacka)
{
	int temp;
	int	hold;

	hold = 0;
	temp = stacka->num;
	if (stacka->next != NULL)
	{
		stacka = stacka->next;
		hold = stack->num;
		stacka->num = temp;
		stacka = stacka->prev;
		stacka->num = hold;
	}
}

void	ft_sb(t_list *stackb)
{
	int temp;
	int hold;

	hold = 0;
	temp = stackb->num;
	if (stackb->next != NULL)
	{
		stackb = stackb->next;
		hold = stackb->num;
		stackb->num = temp;
		stackb = stack->prev;
		stackb->num = hold;
	}
}

void	ft_ss(t_list *stacka, t_list *stackb)
{
	if (stacka != NULL && stackb != NULL)
	{
		ft_sa(&stacka);
		ft_sb(&stackb);
	}
}

void	ft_pa(t_list *stacka, t_list *stackb)
{
	t_list	*topb;
	t_list	*head;
	
	head = stacka;
	if (stackb->num != NULL)
	{
		topb = stackb;
		if (stackb->next != NULL)
		{

		}
		topb->next = *head;
		topb->prev = NULL;
		if ((*head) != NULL)
			(*head)->prev = topb;
		*head = topb;
	}
}

void	ft_pb(t_list stacka, t_list stackb)
{
	int topa;

	if (stacka->num != NULL)
	{
		topa = stacka->num;
	}
}
