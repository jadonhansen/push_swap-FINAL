/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/06 13:01:01 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_process(t_stack **stacka, t_stack **stackb, int flag)
{
	char	*command;
	int		count;

	count = 0;
	if (flag == 1 || flag == 3)
	{
		print_stack(stacka, 'A');
		print_stack(stackb, 'B');
	}
	while ((get_next_line(0, &command)))
	{
		do_op(flag, command, stacka, stackb);
		if (flag == 1 || flag == 3)
		{
			print_stack(stacka, 'A');
			print_stack(stackb, 'B');
		}
		else if (flag == 2 || flag == 3)
			count++;
	}
	if (flag == 2 || flag == 3)
	{
		ft_putstr("\n\nCOMMAND COUNT:\n");
		ft_putnbr(count);
	}
}

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	char	**array;
	int		flag;

	flag = 0;
	if (argc < 2)
		return (0);
	else
	{
		if (string_input(argv[1]))
		{
			array = fill_from_string(argv);
			check_errors(argv);
			stacka = stack_fill(argc, argv);
			flag = flag_check(array);
		}
		else
		{
			check_errors(argv);
			stacka = stack_fill(argc, argv);
			flag = flag_check(argv);
		}
		normalize(&stacka);
		start_process(&stacka, &stackb, flag);
	}
	if (stack_check(&stacka, &stackb) > 0)
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
	return (0);
}
