/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:48:41 by kdonthi           #+#    #+#             */
/*   Updated: 2020/02/28 18:27:47 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char x;

	if (c >= 256 || c < 0)
		return (c);
	x = (unsigned char)c;
	if (x >= 'a' && x <= 'z')
		x -= ('a' - 'A');
	return (x);
}
