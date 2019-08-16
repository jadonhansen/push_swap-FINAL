/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/16 13:56:17 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		sort_twenty(stacka, stackb);
	else if (size >= 21 && size <= 50)
		sort_fifty(stacka, stackb);
	else if (size > 50 && size <= 100)
		sort_hundred(stacka, stackb);
	else if (size > 100 && size <= 250)
		sort_twofifty(stacka, stackb);
	else if (size > 250 && size <= 500)
		sort_fivehundred(stacka, stackb);
	else if (size > 500)
		sort_plus(stacka, stackb);
}

void	execute(char **argv)
{
	t_stack	*stacka;
	t_stack *stackb;
	char	**array;

	if (string_input(&argv[1]))
	{
		array = fill_from_string(&argv[1]);
		check_errors(array, 0);
		stacka = stack_fill(array);
		ft_array_free(array);
	}
	else
	{
		check_errors(&argv[1], 0);
		stacka = stack_fill(&argv[1]);
	}
	if (stack_check(&stacka, &stackb) == 0)
		exit(1);
	normalize(&stacka);
	allocate_algo(&stacka, &stackb);
	free_stack(&stacka);
	free_stack(&stackb);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else
		execute(argv);
	return (0);
}
