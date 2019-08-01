/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:38:41 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/01 17:42:52 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX 2147483647
# define MIN -2147483647
# include "./libft/libft.h"
# include "./get_next_line/get_next_line.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct		s_stack
{
	int				num;
	int				normed;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

/*
**	manipulations.c
*/

void	ft_sa(t_stack **stacka, int i);
void	ft_sb(t_stack **stackb, int i);
void	ft_ss(t_stack **stacka, t_stack **stackb, int i);
void	ft_pa(t_stack **stacka, t_stack **stackb, int i);
void	ft_pb(t_stack **stacka, t_stack **stackb, int i);
void	ft_ra(t_stack **stacka, int i);
void	ft_rb(t_stack **stackb, int i);
void	ft_rr(t_stack **stacka, t_stack **stackb, int i);
void	ft_rrb(t_stack **stackb, int i);
void	ft_rra(t_stack **stacka, int i);
void	ft_rrr(t_stack **stacka, t_stack **stackb, int i);

/*
**	stack_operations.c
*/

void	print_stack(t_stack **stack, char c);
t_stack	*stack_fill(int arc, char **arg);
t_stack	*create_node(int num);
void	add_tail_node(t_stack **stack, t_stack *node);
void	add_head_node(t_stack **stack, t_stack *node);

/*
**	input.c
*/

void	normalize(t_stack **stacka);
void	check_errors(char **arg);
void	duplicate_check(char **arg);
void	do_op(char *command, t_stack **stacka, t_stack **stackb);

/*
**	output_validation.c
*/

int		stack_check(t_stack **stacka, t_stack **t_stackb);
int		stack_size(t_stack **head);

/*
** bigboy_algo.c
*/

void	bigboy(t_stack **a, t_stack **b);

/*
** sorting_algo.c
*/

int		smallest_pos(t_stack **head);
void	ra_rra_pos(t_stack **a, int pos);
void	mediumrare(t_stack **a, t_stack **b);
void	welldone(t_stack **a, t_stack **b);
void	overcooked(t_stack **a, t_stack **b);

/*
** push_swap.c
*/

void	allocate_algo(t_stack **stacka, t_stack **stackb);
void	klein(t_stack **a);
void	tiny(t_stack **a);
void	small(t_stack **a, t_stack **b);

#endif
