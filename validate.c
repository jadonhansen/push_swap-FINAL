/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:49:57 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/13 10:50:05 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int i)
{
	if (i == 1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

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