/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:38:41 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/15 13:37:27 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX 2147483647
# define MIN -2147483647
# include "./libft/libft.h"
# include "./get_next_line/get_next_line.h"
# include <stdlib.h>
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

void				ft_sa(t_stack **stacka, int i);
void				ft_sb(t_stack **stackb, int i);
void				ft_ss(t_stack **stacka, t_stack **stackb, int i);
void				ft_pa(t_stack **stacka, t_stack **stackb, int i);
void				ft_pb(t_stack **stacka, t_stack **stackb, int i);
void				ft_ra(t_stack **stacka, int i);
void				ft_rb(t_stack **stackb, int i);
void				ft_rr(t_stack **stacka, t_stack **stackb, int i);
void				ft_rrb(t_stack **stackb, int i);
void				ft_rra(t_stack **stacka, int i);
void				ft_rrr(t_stack **stacka, t_stack **stackb, int i);

/*
**	visualizer.c
*/

void				print_space_before(int n);
void				print_space_after(int n);
void				print_content(t_stack **a, t_stack **b);
void				viz(int flag, t_stack **a, t_stack **b);

/*
**	stack_ops.c
*/

t_stack				*stack_fill(char **arg);
t_stack				*create_node(int num);
void				add_tail_node(t_stack **stack, t_stack *node);
void				add_head_node(t_stack **stack, t_stack *node);

/*
**	input_one.c && input_two.c
*/

void				normalize(t_stack **stacka);
void				check_errors(char **arg, int flag);
void				duplicate_check(char **arg, int flag);
void				do_op(int flag, char *command, t_stack **stacka,
					t_stack **stackb);
int					flag_value(int v, int c, int r);
int					flag_check(char **arr);
int					string_input(char **str);
char				**fill_from_string(char **arg);

/*
**	validate.c
*/

void				ft_error(int i);
void				validate(int flag, t_stack **a, t_stack **b);
int					stack_check(t_stack **stacka, t_stack **t_stackb);
int					stack_size(t_stack **head);

/*
** sorting_algo_two.c
*/

void				sort_plus(t_stack **a, t_stack **b);

/*
** sorting_algo_one.c
*/

void				sort_twenty(t_stack **a, t_stack **b);
void				sort_fifty(t_stack **a, t_stack **b);
void				sort_hundred(t_stack **a, t_stack **b);
void				sort_twofifty(t_stack **a, t_stack **b);
void				sort_fivehundred(t_stack **a, t_stack **b);

/*
** algo_ops_one.c && algo_ops_two.c
*/

int					smallest_pos(t_stack **head);
int					biggest_pos(t_stack **head);
void				ra_rra_pos(t_stack **a, int pos);
void				rb_rrb_pos(t_stack **b, int pos);
void				pushback_all(t_stack **a, t_stack **b);
int					begin_pos(t_stack **node, int chunk);
int					compare_smallest_pos(t_stack **b, int chunk);

/*
** push_swap.c
*/

void				klein(t_stack **a);
void				tiny(t_stack **a);
void				small(t_stack **a, t_stack **b);

#endif
