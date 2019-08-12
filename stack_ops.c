/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:55:08 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/12 18:20:45 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack **stacka, t_stack **stackb, char c, char b)
{
	t_stack *node;
	t_stack	*node_two;

	node = *stacka;
	node_two = *stackb;
	if (node)
	{
		printf("---- Stack %c ----\n", c);
		while (node)
		{
			ft_putnbr(node->num);
			ft_putchar('\t');
			ft_putnbr(node->normed);
			ft_putendl("");
			node = node->next;
		}
		printf("-----------------\n");
	}
	if (node_two)
	{
		printf("---- Stack %c ----\n", b);
		while (node_two)
		{
			ft_putnbr(node_two->num);
			ft_putchar('\t');
			ft_putnbr(node_two->normed);
			ft_putendl("");
			node_two = node_two->next;
		}
		printf("-----------------\n");
		ft_putstr("\n\n");
	}
}

t_stack	*stack_fill(char **arg)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;

	i = 0;
	while (ft_strequ(arg[i], "-v") || ft_strequ(arg[i], "-c"))
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
