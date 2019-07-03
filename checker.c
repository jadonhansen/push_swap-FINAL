/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/03 14:20:37 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void	start_process(t_list *stacka, t_list *stackb)
{
	int		gnlret;
	char	*command;

	gnlret = 0;
	while ((gnlret = get_next_line(0, &command)) > 0)
	{
		if (command = "sa")
			ft_sa(&stacka);
		else if (command = "sb")
			ft_sb(&stacka);
		else if (command = "ss")
			ft_ss(&stacka);
		else if (command = "pa")
			ft_pa(&stacka);
		else if (command = "pb")
			ft_pb(&stacka);
		else if (command = "ra")
			ft_ra(&stacka);
		else if (command = "rb")
			ft_rb(&stacka);
		else if (command = "rr")
			ft_rr(&stacka);
		else if (command = "rra")
			ft_rra(&stacka);
		else if (command = "rrb")
			ft_rrb(&stacka);
		else if (command = "rrr")
			ft_rrr(&stacka);
		else
		{
			write(1, "Error\n", 6);
			exit;

		}
	}
}

int		main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;
	int		i;

	if (argc < 2)
		exit(0) ;
	else
	{
		i = 1;
		stacka = (t_list)malloc(sizeof(t_list));
		stackb = (t_list)malloc(sizeof(t_list));
		while (argc-- > 1)
		{
			check_errors(&stacka, argv[i]);
			stacka->num = ft_atoi(argv[i++]);
			stacka->next = (t_list)malloc(sizeof(t_list));
			stacka = stack->next;
		}
		stacka->next = NULL;
	}

//use gnl to get commands line by line
//perform commands obtained line by line to stacka var
//then iterate through stacka and see if it's sorted
//return based on sorted outcome

	start_process(&stacka, &stackb);
	stack_check(&stacka, &stackb);
	return (0);
}
