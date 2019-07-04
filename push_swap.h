/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 10:38:41 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/04 14:19:24 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "get_next_line.h"
# include <stdlib.h>

typedef struct		s_list
{
	int				num;
	struct s_struct	*next;
	struct s_struct	*prev;
}					t_list;

#endif
