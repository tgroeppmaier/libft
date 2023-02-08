/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:54:57 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/08 16:58:00 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)

{
	struct s_list *s1;

	s1 = malloc(sizeof(t_list));
	if (!s1)
		return (NULL);
	(*s1).content = content;
	s1->next = NULL;
	return (s1);
}
/* 
int	main(void)
{
	t_list	*new_list;
	char str[] = "test";

	new_list = ft_lstnew(str);
	if (new_list == NULL)
		printf("error");
	else
		printf("%s", (char*)(*new_list).content);
	return (0);
}
 */