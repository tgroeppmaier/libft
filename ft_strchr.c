/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:42:17 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:42:18 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str)
			return (NULL);
		str++;
	}
	return ((char *)str);
}
/* 
int	main(void)
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = ft_strchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
} */
