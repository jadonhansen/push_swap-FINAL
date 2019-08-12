/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 15:11:38 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/12 18:12:09 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_twenty(t_stack **a, t_stack **b)
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

void	sort_fifty(t_stack **a, t_stack **b)
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
		chunk = chunk + 13;
		while (i <= chunk)
		{
			if (!(*a))
				break ;
			// if (stack_size(a) == 2)
			// {
			// 	klein(a);
			// 	flag = 0;
			// 	break;
			// }
			pos = compare_smallest_pos(a, chunk);
			ra_rra_pos(a, pos);
			ft_pb(a, b, 1);
			i++;
		}
	}
	pushback_all(a, b);
}

void	sort_hundred(t_stack **a, t_stack **b)
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
		chunk = chunk + 17;
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

void	sort_twofifty(t_stack **a, t_stack **b)
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
		chunk = chunk + 30;
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

void	sort_fivehundred(t_stack **a, t_stack **b)
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
		chunk = chunk + 44;
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
