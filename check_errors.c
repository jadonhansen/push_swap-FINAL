/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:59:09 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/05 13:33:11 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	check_errors(t_stack **stacka, char *arg)
{
	int		i;
	t_stack	*temp = NULL;

	i = ft_atoi(arg);
	temp = *stacka;
	if (temp != NULL)
	{
		if (i > MAX || i < MIN)
		{
			write(1, "Error\n", 6);
			exit (0);
		}
		while (temp->prev != NULL)
		{
			if (i == temp->prev->num)
			{
				write(1, "Error\n", 6);
				exit (0);
			}
			temp = temp->prev;
		}
	}
}
