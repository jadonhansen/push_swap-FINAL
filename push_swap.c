/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/26 11:32:00 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	klein(t_stack **a)
{
	t_stack *temp;

	if (temp->num > temp->next->num)
		ft_sa(a);
}

void	tiny(t_stack **a, t_stack **b)
{
	int		one;
	int		two;
	int		three;
	t_stack	temp;

	temp = *a;
	one = a->num;
	two = a->next->num;
	three = a->next->next->num;
	if (one > two && two < three && three > one)	
		sa(a);
	else if (one > two && two > three && three < one)
	{
		sa(a);
		rra(a);
	}
	else if (one > two && two < three && three < one)
		ft_ra(a);
	else if (one < two && two > three && three > one)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (one < two && two > three && three < one)
		ft_rra(a);
}

void	small(t_stack **a, t_stack **b)
{

}

void	push_algo(t_stack **stacka, t_stack **stackb)
{
	int	size;

	size = stack_size(stacka);
	if (size == 2)
		klein(stacka);
	else if (size == 3)
		tiny(stacka, stackb);
	else if (size == 4 || size == 5)
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
