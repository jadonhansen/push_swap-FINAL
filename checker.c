/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/04 17:13:37 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

/*void	start_process(t_list *stacka, t_list *stackb)
{
	int		gnlret;
	char	*command;

	gnlret = 0;
	while ((gnlret = get_next_line(0, &command)) > 0)
	{
		if (command = "sa")
			ft_sa(&stacka, &stackb);
		else if (command = "sb")
			ft_sb(&stacka, &stackb);
		else if (command = "ss")
			ft_ss(&stacka, &stackb);
		else if (command = "pa")
			ft_pa(&stacka, &stackb);
		else if (command = "pb")
			ft_pb(&stacka, &stackb);
		else if (command = "ra")
			ft_ra(&stacka, &stackb);
		else if (command = "rb")
			ft_rb(&stacka, &stackb);
		else if (command = "rr")
			ft_rr(&stacka, &stackb);
		else if (command = "rra")
			ft_rra(&stacka, &stackb);
		else if (command = "rrb")
			ft_rrb(&stacka, &stackb);
		else if (command = "rrr")
			ft_rrr(&stacka, &stackb);
		else
		{
			write(1, "Error\n", 6);
			exit;
		}
	}
}*/

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	t_stack	*temp;	//for checking
	int		i;

	if (argc < 2)
		exit(0) ;
	else
	{
		i = 1;
		stacka = (t_stack *)malloc(sizeof(t_stack));
		stackb = (t_stack *)malloc(sizeof(t_stack));
		temp = stacka;
		while (argc-- > 1)
		{
			check_errors(&stacka, argv[i]);
			stacka->num = ft_atoi(argv[i++]);
			stacka->next = (t_stack *)malloc(sizeof(t_stack));
			stacka = stacka->next;
		}
		stacka->next = NULL;
	}
	print_stack(&temp);

//use gnl to get commands line by line
//perform commands obtained line by line to stacka var
//then iterate through stacka and see if it's sorted
//return based on sorted outcome

	//start_process(&stacka, &stackb);
	//stack_check(&stacka, &stackb);
	return (0);
}
