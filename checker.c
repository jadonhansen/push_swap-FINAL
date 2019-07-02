/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:29:22 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/02 13:27:55 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"

#include <stdio.h>
#include <string.h>

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
}
