/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:08:44 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/12 18:10:08 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_plus(t_stack **a, t_stack **b)
{
	int		chunk;
	//int		flag;
	int		pos;
	int		i;

	//flag = 1;
	chunk = 0;
	i = 1;
	while (*a/* && flag*/)
	{
		chunk = chunk + 45;
		while (i <= chunk)
		{
			if (!(*a))
				break ;
		// 	if (stack_size(a) == 2)
		// 	{
		// 		klein(a);
		// 		flag = 0;
		// 		break;
		// 	}
			pos = compare_smallest_pos(a, chunk);
			ra_rra_pos(a, pos);
			ft_pb(a, b, 1);
			i++;
		}
	}
	pushback_all(a, b);
}
