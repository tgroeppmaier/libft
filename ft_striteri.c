/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:42:29 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:42:30 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	news(unsigned int i, char *str)
{
	i = (int)i;
	*str = ft_tolower(*str);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
		s[i] = '\0';
	}
}
/* 
int	main(void)
{
	char str[] = "THIS IS a TesT!!!";

	printf("%s\n", str);
	ft_striteri(str, &news);
	printf("%s", str);
	return (0);
} */