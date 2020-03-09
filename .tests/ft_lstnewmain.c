/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewmain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravikumardonthi <ravikumardonthi@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:10:39 by ravikumardo       #+#    #+#             */
/*   Updated: 2020/03/09 10:26:13 by ravikumardo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main()
{
	char const *string = "hello";
	t_list	*pointer = ft_lstnew((void const*) string, 5);
	printf("The content is %s, the content_size is :%lu\n", (char*)(pointer->content), pointer->content_size);
	string = NULL;
	pointer = ft_lstnew((void const*) string, 10);
	printf("The content is %s, the content_size is :%lu\n", (char*)(pointer->content), pointer->content_size);
	string = "hello world!";
	pointer = ft_lstnew((void const*) string, 12);
	printf("The content is %s, the content_size is :%lu\n", (char*)(pointer->content), pointer->content_size);
}
