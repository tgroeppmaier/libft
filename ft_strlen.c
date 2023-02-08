/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:43:00 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:43:01 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*p)
		++p;
	return (p - s);
}
/* 
int	main(void)
{
	char *str = "1234";
	printf("%lu\n", ft_strlen(str));
	printf("%lu", strlen(str));
	return (0);
} */