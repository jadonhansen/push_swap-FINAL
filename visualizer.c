/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:27:07 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/13 15:09:36 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_space_before(int num)
{
	int	n;

	n = ft_intlen(num);
	if (n == 1)
		ft_putstr("            |  ");
	else if (n == 2)
		ft_putstr("           |  ");
	else if (n == 3)
		ft_putstr("          |  ");
	else if (n == 4)
		ft_putstr("         |  ");
	else if (n == 5)
		ft_putstr("        |  ");
	else if (n == 6)
		ft_putstr("       |  ");
	else if (n == 7)
		ft_putstr("      |  ");
	else if (n == 8)
		ft_putstr("     |  ");
	else if (n == 9)
		ft_putstr("    |  ");
	else if (n == 10)
		ft_putstr("   |  ");
	else if (n == 11)
		ft_putstr("  |  ");
}

void	print_space_after(int num)
{
	int	n;

	n = ft_intlen(num);
	if (n == 1)
		ft_putstr("           |\n");
	else if (n == 2)
		ft_putstr("          |\n");
	else if (n == 3)
		ft_putstr("         |\n");
	else if (n == 4)
		ft_putstr("        |\n");
	else if (n == 5)
		ft_putstr("       |\n");
	else if (n == 6)
		ft_putstr("      |\n");
	else if (n == 7)
		ft_putstr("     |\n");
	else if (n == 8)
		ft_putstr("    |\n");
	else if (n == 9)
		ft_putstr("   |\n");
	else if (n == 10)
		ft_putstr("  |\n");
	else if (n == 11)
		ft_putstr(" |\n");
}

void	print_content(t_stack **a, t_stack **b)
{
	t_stack	*one;
	t_stack	*two;

	one = *a;
	two = *b;
	while (one || two)
	{
		ft_putstr("| ");
		if (one)
		{
			ft_putnbr(one->num);
			print_space_before(one->num);
			one = one->next;
		}
		else
			ft_putstr("             |  ");
		if (two)
		{
			ft_putnbr(two->num);
			print_space_after(two->num);
			two = two->next;
		}
		else
			ft_putstr("            |\n");
	}
}

void	viz(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	while (i++ < 31)
		ft_putchar('-');
	ft_putstr("\n|   STACK A    |   STACK B    |\n");
	i = 0;
	while (i++ < 31)
		ft_putchar('-');
	ft_putchar('\n');
	print_content(a, b);
	i = 0;
	while (i++ < 31)
		ft_putchar('-');
	ft_putstr("\n\n");
}
