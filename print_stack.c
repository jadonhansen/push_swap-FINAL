/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:55:17 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/04 16:59:41 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack **stacka)
{
	int	i;

	i = 0;
	if ((*stacka) != NULL)
	{
		while ((*stacka)->next != NULL)
		{
			i = (*stacka)->num;
			ft_putnbr(i);
			*stacka = (*stacka)->next;
		}
	}
}
