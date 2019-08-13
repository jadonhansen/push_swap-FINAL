/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:55:08 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/13 17:23:20 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_fill(char **arg)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;

	i = 0;
	while ((ft_strequ(arg[i], "-v") || ft_strequ(arg[i], "-c")
			|| ft_strequ(arg[i], "-r")))
		i++;
	stack = create_node(ft_atoi(arg[i]));
	while (arg[++i] != '\0')
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
		node->normed = -1;
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

void	add_head_node(t_stack **stack, t_stack *node)
{
	t_stack	*temp;

	temp = *stack;
	if (temp)
	{
		temp->prev = node;
		node->prev = NULL;
		node->next = *stack;
		*stack = node;
	}
	else
	{
		node->next = NULL;
		node->prev = NULL;
		*stack = node;
	}
}
