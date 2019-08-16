/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/16 12:48:02 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_process(t_stack **stacka, t_stack **stackb, int flag)
{
	char	*command;
	int		count;

	count = 0;
	if (flag == 1 || flag == 4 || flag == 5 || flag == 7)
		viz(flag, stacka, stackb);
	while ((get_next_line(0, &command)))
	{
		do_op(flag, command, stacka, stackb);
		if (flag == 1 || flag == 4 || flag == 5 || flag == 7)
			viz(flag, stacka, stackb);
		if (flag == 2 || flag == 4 || flag == 6 || flag == 7)
			count++;
		free(command);
	}
	if (flag == 2 || flag == 4 || flag == 6 || flag == 7)
	{
		ft_putstr("COMMAND COUNT: ");
		ft_putnbr(count);
		ft_putstr("\n\n");
	}
}

void	execute(char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;
	char	**array;
	int		flag;

	array = NULL;
	flag = flag_check(argv);
	if (string_input(&argv[1]))
	{
		array = fill_from_string(&argv[1]);
		check_errors(array, flag);
		stacka = stack_fill(array);
	}
	else
	{
		check_errors(&argv[1], flag);
		stacka = stack_fill(&argv[1]);
	}
	normalize(&stacka);
	start_process(&stacka, &stackb, flag);
	validate(flag, &stacka, &stackb);
	ft_array_free(array);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else
		execute(argv);
	return (0);
}
