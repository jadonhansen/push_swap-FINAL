/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:59:09 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/04 17:29:37 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_errors(t_stack **stacka, char *arg)
{
	int		i;
	t_stack	*temp;

	i = ft_atoi(arg);
	temp = *stacka;
	if (i > MAX || i < MIN)
	{
		write(1, "Error\n", 6);
		exit (0);
	}	
	while (temp->prev != NULL)
	{
		if (temp->num == temp->prev->num)
		{
			write(1, "Error\n", 6);
			exit (0);
		}
		temp = temp->prev;
	}
}
