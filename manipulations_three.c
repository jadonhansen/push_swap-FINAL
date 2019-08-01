/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulations_three.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:38:17 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/01 17:55:35 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_stack **stacka, t_stack **stackb, int i)
{
	ft_rra(stacka, 0);
	ft_rrb(stackb, 0);
	if (i == 1)
		write(1, "rrr\n", 4);
}
