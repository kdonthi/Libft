/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 13:41:35 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/05 13:54:50 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar('-');
		ln *= -1;
	}
	if (ln >= 10)
		ft_putnbr(ln / 10);
	ft_putchar((ln % 10) + '0');
}
