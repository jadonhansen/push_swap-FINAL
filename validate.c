/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:49:57 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/13 17:15:45 by jhansen          ###   ########.fr       */
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

void	validate(int flag, t_stack **a, t_stack **b)
{
	if (flag == 3 || flag == 5 || flag == 6 || flag == 7)
	{
		if (stack_check(a, b) > 0)
			ft_putstr_colour(RED, "KO\n");
		else
			ft_putstr_colour(GREEN, "OK\n");
	}
	else
	{
		if (stack_check(a, b) > 0)
			ft_putstr("KO\n");
		else
			ft_putstr("OK\n");
	}
}
