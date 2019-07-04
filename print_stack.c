/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:55:17 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/04 15:59:09 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list **stacka)
{
	if ((*stacka) != NULL)
	{
		while ((*stacka)->next != NULL)
		{
			printf("%d", (*stacka)->num);
			*stacka = (*stacka)->next;
		}
	}
}
