/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/02 15:49:31 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"

#include <stdio.h>
#include <string.h>

void	ft_strartprocess(int *stacka)
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
		else ()

	}
}

int		main(int argc, char **argv)
{
	int		stacka[argc - 1];
	int		i;
//	int		j;
	int		count;

	count = 0;
	if (argc < 2)
		exit(0) ;
	else
	{
		i = 1;
		while (argc-- > 1)
			stacka[count++] = ft_atoi(argv[i++]);
	}


//	j = 0;
//	while (j < count)
//		printf("%d\n", stacka[j++]);
//	return (0);
// PRINT STACKA FOR CHECK PURPOSES


//use gnl to get commands line by line
//perform commands obtained line by line to stacka var
//then iterate through stacka and see if it's sorted
//return based on sorted outcome

	ft_startprocess(&stacka);
}
