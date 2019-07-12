/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:55:08 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/12 15:55:16 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack **stacka)
{
	int	i;

	i = 0;
	while (*stacka)
	{
		ft_putnbr((*stacka)->num);
		ft_putendl("");
		*stacka = (*stacka)->next;
	}
}

t_stack	*stack_fill(int arc, char **arg)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;

	i = 1;
	stack = create_node(ft_atoi(arg[1]));
	while (++i < arc)
	{
		node = create_node(ft_atoi(arg[i]));
		add_tail_node(&stack, node);
	}
	return (stack);
}

t_stack	*create_node(int num)
{
	t_stack	*node;
	
	node = (t_stack *)malloc(sizeof(t_stack));
	if (node)
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

void	add_head_node(t_stack **stacka, t_stackb *node)
{
	
}
