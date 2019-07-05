/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:39:46 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/05 14:22:28 by jhansen          ###   ########.fr       */
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
