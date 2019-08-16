/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:08:44 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/16 12:08:00 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_plus(t_stack **a, t_stack **b)
{
	int		chunk;
	int		pos;
	int		i;

	chunk = 0;
	i = 1;
	while (*a)
	{
		chunk = chunk + 45;
		while (i <= chunk)
		{
			if (!(*a))
				break ;
			pos = compare_smallest_pos(a, chunk);
			ra_rra_pos(a, pos);
			ft_pb(a, b, 1);
			i++;
		}
	}
	pushback_all(a, b);
}
