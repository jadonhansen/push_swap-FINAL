/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:51:44 by jhansen           #+#    #+#             */
/*   Updated: 2019/08/13 13:54:08 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_intlen(int n)
{
    int     i;

    i = 0;
    if (n < 0)
    {
        i++;
        n = n * -1;
    }
    while (n >= 10)
    {
        n = n / 10;
        i++;
    }
    if (n >= 0)
        i++;
    return (i);
}
