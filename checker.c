/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/12 17:37:12 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_process(t_stack **stacka, t_stack **stackb, int flag)
{
	char	*command;
	int		count;

	count = 0;
	if (flag == 1 || flag == 3)
		print_stack(stacka, stackb, 'A', 'B');
	while ((get_next_line(0, &command)))
	{
		do_op(flag, command, stacka, stackb);
		if (flag == 1 || flag == 3)
			print_stack(stacka, stackb, 'A', 'B');
		if (flag == 2 || flag == 3)
			count++;
	}
	if (flag == 2 || flag == 3)
	{
		ft_putstr("COMMAND COUNT: ");
		ft_putnbr(count);
		ft_putstr("\n\n");
	}
}

t_stack	*stringstuff(char **argv)
{
	t_stack	*stack;
	char	**array;

	array = fill_from_string(&argv[1]);
	check_errors(array);
	stack = stack_fill(array);
	return (stack);
}

int		main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	int		flag;

	flag = 0;
	if (argc < 2)
		return (0);
	else
	{
		flag = flag_check(argv);
		if (string_input(&argv[1]))
			stacka = stringstuff(argv);
		else
		{
			check_errors(&argv[1]);
			stacka = stack_fill(&argv[1]);
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
