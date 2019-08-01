/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/01 12:07:15 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	klein(t_stack **a)
{
	t_stack *temp;

	temp = *a;
	if (temp->num > temp->next->num)
		ft_sa(a, 1);
}

void	tiny(t_stack **a)
{
	int		one;
	int		two;
	int		three;
	t_stack	*temp;

	temp = *a;
	one = temp->num;
	two = temp->next->num;
	three = temp->next->next->num;
	if (one > two && two < three && three > one)	
		ft_sa(a, 1);
	else if (one > two && two > three && three < one)
	{
		ft_sa(a, 1);
		ft_rra(a, 1);
	}
	else if (one > two && two < three && three < one)
		ft_ra(a, 1);
	else if (one < two && two > three && three > one)
	{
		ft_sa(a, 1);
		ft_ra(a, 1);
	}
	else if (one < two && two > three && three < one)
		ft_rra(a, 1);
}

void	small(t_stack **a, t_stack **b)
{
	int	size;
	int	pos;
	int	i;

	i = 0;
	size = stack_size(a);
	while (i < (size - 3))
	{
		pos = smallest_pos(a);
		print_stack(a, 'A');
		print_stack(b, 'B');
		ra_rra_pos(a, pos);
		print_stack(a, 'A');
		print_stack(b, 'B');
		ft_pb(a, b, 1);
		print_stack(a, 'A');
		print_stack(b, 'B');
		i++;
	}
	tiny(a);
	while (i > 0)
	{
		ft_pa(a, b, 1);
		i--;
	}
}

void	push_algo(t_stack **stacka, t_stack **stackb)
{
	int	size;

	size = stack_size(stacka);
	if (size == 2)
		klein(stacka);
	else if (size == 3)
		tiny(stacka);
	else if (size == 4 || size == 5)
	 	small(stacka, stackb);
	// else if (size > 5)
	// {
	// 	bigboy(stacka, stackb, find_correct_size(stacka));
	// }
}

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack *stackb;

	if (argc < 2)
		return (0);
	else
		check_errors(argc, argv);
	stacka = stack_fill(argc, argv);

	print_stack(&stacka, 'A'); //for checking
	print_stack(&stackb, 'B');

	push_algo(&stacka, &stackb);

	ft_putstr("\nSORTED LIST:\n\n"); //for shows :)
	print_stack(&stacka, 'A'); //for checking
	print_stack(&stackb, 'B');

	return (0);
}
