/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:46:57 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/11 13:18:45 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		stack_check(t_stack **stacka, t_stack **stackb)
{
	t_stack	*head;

	head = *stacka;
	if (stack_size(stackb) > 0)
		return (1);
	while (head->next != NULL)
	{
		if (head->num > head->next->num)
			return (1);
		head = head->next;
	}
	return (0);
}

int		stack_size(t_stack **head)
{
	int		i;
	t_stack	*stack;

	i = 0;
	stack = *head;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
