/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:38:41 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/11 13:20:39 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX 2147483647
# define MIN -2147483647
# include "./libft/libft.h"
# include "./get_next_line/get_next_line.h"
# include <stdlib.h>

typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

/*
**	stack_operations.c
*/

void	print_stack(t_stack **stacka);
t_stack	*stack_fill(int arc, char **arg);
t_stack	*create_node(int num);
void	add_tail_node(t_stack **stack, t_stack *node);

/*
**	input_validation.c
*/

void	check_errors(int len, char **arg);
void	duplicate_checker(int *array);
int		*array_fill(int len, char **arg);

/*
**	output_validation.c
*/

int		stack_check(t_stack **stacka, t_stack **t_stackb);
int		stack_size(t_stack **head);

#endif
