/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/06 13:02:41 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	klein(t_stack **a)
{
	t_stack *temp;

	temp = *a;
	if (temp->num > temp->next->num)
		ft_sa(a, 0);
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
		ft_sa(a, 0);
	else if (one > two && two > three && three < one)
	{
		ft_sa(a, 0);
		ft_rra(a, 0);
	}
	else if (one > two && two < three && three < one)
		ft_ra(a, 0);
	else if (one < two && two > three && three > one)
	{
		ft_sa(a, 0);
		ft_ra(a, 0);
	}
	else if (one < two && two > three && three < one)
		ft_rra(a, 0);
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
		ra_rra_pos(a, pos);
		ft_pb(a, b, 0);
		i++;
	}
	tiny(a);
	while (i > 0)
	{
		ft_pa(a, b, 0);
		i--;
	}
}

void	allocate_algo(t_stack **stacka, t_stack **stackb)
{
	int	size;

	size = stack_size(stacka);
	if (size == 2)
		klein(stacka);
	else if (size == 3)
		tiny(stacka);
	else if (size == 4 || size == 5)
	 	small(stacka, stackb);
	else if (size > 5 && size < 21)
		mediumrare(stacka, stackb);
	else if (size >= 21 && size < 50)
		welldone(stacka, stackb);
	else if (size >=  50 && size <= 100)
		overcooked(stacka, stackb);
	//else if (size > 100 && size <= 500)
		//bigboy(stacka, stackb);
}

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack *stackb;

	if (argc < 2)
		return (0);
	else
		check_errors(argv);
	stacka = stack_fill(argc, argv);
	if (stack_check(&stacka, &stackb) == 0)
		return (0);
	else
	{
		normalize(&stacka);
		allocate_algo(&stacka, &stackb);
	}
	return (0);
}
