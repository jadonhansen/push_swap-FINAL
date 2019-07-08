/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 10:19:28 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/08 10:33:42 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_errors(t_stack **stacka, char *arg)
{
	int		i;
	t_stack	*temp = NULL;

	i = ft_atoi(arg);
	temp = *stacka;
	if (temp != NULL)
	{
		if (i > MAX || i < MIN)
		{
			write(1, "Error\n", 6);
			exit (0);
		}
		while (temp->prev != NULL)
		{
			if (i == temp->prev->num)
			{
				write(1, "Error\n", 6);
				exit (0);
			}
			temp = temp->prev;
		}
	}
}

void	check_sorted(t_stack **stacka, **t_stackb)
{
	t_stack	head;

	head = *stacka;
	if (stack_size(stackb) > 0)
		return ("KO\n");
	while (head->next != NULL)
	{
		if (head->value > head->next->value)
			return ("KO\n");
		head = head->next;
	}
	return ("OK\n");
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
		list = list->next;
	}
	return (i);
}
