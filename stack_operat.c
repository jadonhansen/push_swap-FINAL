/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:55:17 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/05 13:33:47 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack **stacka)
{
	int	i;

	i = 0;
	if ((*stacka) != NULL)
	{
		while ((*stacka)->next != NULL)
		{
			i = (*stacka)->num;
			ft_putnbr(i);
			write(1, "\n", 1);
			*stacka = (*stacka)->next;
		}
	}
}

t_stack	*stack_fill(int arc, char **arg)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;

	i = 1;
	stack = create_node(ft_atoi(arg[1]));
	while (i++ < arc)
	{
		node = create_node(ft_atoi(arg[1]));
		add_node_tail(&stack, node);
	}
	return (stack);
}

t_stack	create_node(int num)
{
	t_stack	*node;

	if (node = ((t_stack *)malloc(sizeof(t_stack))))
	{
		node->num = num;
		node->next = NULL;
		node->prev = NULL;
	}
	return (node);
}

void	add_tail_node(t_stack **stack, t_stack *node)
{
	t_stack	*temp;

	temp = *stack;
	if (temp)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
	}
}
