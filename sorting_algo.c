/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:42:34 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/05 15:53:50 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mediumrare(t_stack **a, t_stack **b)
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
		
		chunk = chunk + 5;
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

/*void	welldone(t_stack **a, t_stack **b)
{
	return ;
}

void	overcooked(t_stack **a, t_stack **b)
{
	return ;
}*/
