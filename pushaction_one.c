/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_manip_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:33:01 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/04 15:53:28 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **stacka)
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

void	ft_sb(t_list **stackb)
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

void	ft_ss(t_list **stacka, t_list **stackb)
{
	if (stacka != NULL && stackb != NULL)
	{
		ft_sa(*stacka);
		ft_sb(*stackb);
	}
}

void	ft_pa(t_list **stacka, t_list **stackb)
{
	t_list	*topb;
	
	if (*stackb != NULL)
	{
		topb = stackb;
		topb->next = *stacka;
		topb->prev = NULL;
		if ((*stacka) != NULL)
			(*stacka)->prev = topb;
		*stacka = topb;
		stackb = stackb->next;
		return (*stacka);
	}
	return ;
}

void	ft_pb(t_list **stacka, t_list **stackb)
{
	t_list *topa;

	if (*stacka != NULL)
	{
		topa = *stacka;
		topa->next = *stackb;
		topa->prev = NULL;
		if ((*stackb) != NULL)
			(*stackb)->prev = topa;
		*stackb = topa;
		*stacka = (*stacka)->next;
		return (*stackb);
	}
	return ;
}
