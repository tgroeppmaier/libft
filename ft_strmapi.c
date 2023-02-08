/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgroeppm <tgroeppm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:09:47 by tgroeppm          #+#    #+#             */
/*   Updated: 2023/02/03 09:10:26 by tgroeppm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	newf(unsigned int i, char c)
{
	i = (int)i;
	return (ft_toupper(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	if (!s || !f)
		return (NULL);
	dst = (char *)malloc(ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/* 
int	main(void)
{
	char *str = "hello wonderful World!!!!";
	printf("%s", ft_strmapi(str, &newf));
	return (0);
} */