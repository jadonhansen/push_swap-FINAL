/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/25 16:51:24 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_correct_size(t_stack **a)
{
	
}

void	tiny(t_stack **a, t_stack **b)
{

}

void	small(t_stack **a, t_stack **b)
{

}

void	push_algo(t_stack **stacka, t_stack **stackb)
{
	int	size;

	size = stack_size(stacka);
	if (size > 1 && size <= 3)
		tiny(stacka, stackb);
	else if (size > 3 && size <= 5)
		small(stacka, stackb);
	else if (size > 5)
	{
		bigboy(stacka, stackb, find_correct_size(stacka));
	}
}

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack *stackb;

	if (argc < 2)
		exit (1);
	else
		stacka = stack_fill(argc, argv);
	check_errors(argc, argv);
	push_algo(&stacka, &stackb);
	return (0);
}
