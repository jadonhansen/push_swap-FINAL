/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/11 13:29:51 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/*void	stackb_fill(t_stack **a, t_stack **b)
{
	int	i;

	i = stack_size(a);
	while (i >= 0)
	{
		
		i--;
	}
}*/

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	t_stack	*temp;

	if (argc < 2)
		exit(0) ;
	else
		stacka = stack_fill(argc, argv);
	temp = stacka;
	print_stack(&temp); //for error checking

	check_errors(argc, argv);
	//stackb_fill(&temp, &stackb);
	//start_process(&stacka, &stackb);
	if (stack_check(&stacka, &stackb) > 0)
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
	return (0);
}
