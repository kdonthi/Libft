/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitmain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdonthi <kdonthi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 19:03:03 by kdonthi           #+#    #+#             */
/*   Updated: 2020/03/06 19:30:19 by kdonthi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char** arrayofchars = ft_strsplit("Hello World!", ' ');
	int i = 0;
	int j;
	while (arrayofchars[i] != '\0')
	{
		j = 0;
		while (arrayofchars[i][j] != '\0')
			printf("%c", arrayofchars[i][j++]);
		printf("\n");
		i++;
	}
}
