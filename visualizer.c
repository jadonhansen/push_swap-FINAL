/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:27:07 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/13 12:40:53 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_top(int i)
{
	i = 0;
	while (i++ < 26)
		ft_putchar('-');
	ft_putstr("\n|  ");
	ft_putstr("STACK A");
	ft_putstr("   ");
	ft_putchar('|');
	ft_putstr("   ");
	ft_putstr("STACK B |\n");
	i = 0;
	while (i++ < 26)
		ft_putchar('-');
	ft_putchar('\n');
}

void	print_content(t_stack **a, t_stack **b)
{
	t_stack	*one;
	t_stack	*two;

	one = *a;
	two = *b;
	while (one || two)
	{
		ft_putstr("|  ");
		if (one)
		{
			ft_putnbr(one->num);
			one = one->next;
		}
		else
			ft_putchar(' ');
		ft_putstr("         |   ");
		if (two)
		{
			ft_putnbr(two->num);
			two = two->next;
			ft_putstr("       |\n");
		}
		else
			ft_putstr("        |\n");
	}
}

void	print_bottom(int i)
{
	i = 0;
	while (i++ < 26)
		ft_putchar('-');
	ft_putstr("\n\n");
}

void	viz(t_stack **a, t_stack **b)
{
	print_top(1);
	print_content(a, b);
	print_bottom(1);
}
