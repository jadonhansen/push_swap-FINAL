/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/01 17:43:28 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_process(t_stack **stacka, t_stack **stackb)
{
	char	*command;

	while ((get_next_line(0, &command)))
	{
		do_op(command, stacka, stackb);
		//print_stack(stacka, 'A'); //for error checking
		//print_stack(stackb, 'B');
	}
}

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;

	if (argc < 2)
		return (0);
	else
		check_errors(argv);
	stacka = stack_fill(argc, argv);

	//print_stack(&stacka, 'A'); //for error checking
	//print_stack(&stackb, 'B');

	start_process(&stacka, &stackb);
	if (stack_check(&stacka, &stackb) > 0)
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
	return (0);
}
