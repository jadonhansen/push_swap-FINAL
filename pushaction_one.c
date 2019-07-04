/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_manip_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:33:01 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/04 12:55:41 by jhansen          ###   ########.fr       */
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
		hold = stacka->next->num;
		stacka->num = hold;
		stacka->next->num = temp;
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
		hold = stackb->next->num;
		stackb->num = hold;
		stackb->next->num = temp;
	}
}

void	ft_ss(t_list *stacka, t_list *stackb)
{
	if (stacka != NULL && stackb != NULL)
	{
		ft_sa(stacka);
		ft_sb(stackb);
	}
}

void	ft_pa(t_list *stacka, t_list *stackb)
{
	t_list	*topb;
	t_list	*head;
	
	if (stacka != NULL)
		head = stacka;
	if (stackb->num != NULL)
	{
		topb = stackb;
		if (stackb->next == NULL)
		{
			free(stackb);
		}
		topb->next = *head;
		topb->prev = NULL;
		if ((*head) != NULL)
			(*head)->prev = topb;
		*head = topb;
		del_node();	//deleting from stack b
	}
}

void	ft_pb(t_list stacka, t_list stackb)
{
	t_list *topa;
	t_list *head;

	if (stackb != NULL)
		head = stackb;
	if (stacka->num != NULL)
	{
		topa = stacka;
		if (stacka->next == NULL)
		{
			free(stacka);
		}
		topa->next = *head;
		topa->prev = NULL;
		if ((*head) != NULL)
			(*head)->prev = topa;
		*head = topa;
		del_node(); //deleting fromm stack a
	}
}
